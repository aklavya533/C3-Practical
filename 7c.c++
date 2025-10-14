// Circularly linked  list 
#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node* up;
    Node* down;
    Node(int v = 0) : data(v), left(nullptr), right(nullptr), up(nullptr), down(nullptr) {}
};

// create a K x K circular 2D grid of nodes with sequential data starting at 1
Node* createGrid(int K) {
    if (K <= 0) return nullptr;
    vector<vector<Node*>> a(K, vector<Node*>(K, nullptr));
    int val = 1;
    for (int i = 0; i < K; ++i)
        for (int j = 0; j < K; ++j)
            a[i][j] = new Node(val++);

    // link rows (left/right) circularly
    for (int i = 0; i < K; ++i) {
        for (int j = 0; j < K; ++j) {
            a[i][j]->right = a[i][(j + 1) % K];
            a[i][j]->left  = a[i][(j - 1 + K) % K];
        }
    }

    // link columns (up/down) circularly
    for (int j = 0; j < K; ++j) {
        for (int i = 0; i < K; ++i) {
            a[i][j]->down = a[(i + 1) % K][j];
            a[i][j]->up   = a[(i - 1 + K) % K][j];
        }
    }

    return a[0][0];
}

// display the K x K circular grid starting from head
void display(Node* head) {
    if (!head) return;
    Node* rowStart = head;
    Node* curRow = rowStart;
    do {
        Node* cur = curRow;
        do {
            cout << cur->data << " ";
            cur = cur->right;
        } while (cur != curRow);
        cout << '\n';
        curRow = curRow->down;
    } while (curRow != rowStart);
}

int main() {
    int K;
    if (!(cin >> K)) return 0;
    Node* head = createGrid(K);
    display(head);
    return 0;
}
