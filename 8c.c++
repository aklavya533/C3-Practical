#include <iostream>
#include <vector>
using namespace std;

class Deque {
    vector<int> dq;
public:
    void insertFront(int x) { dq.insert(dq.begin(), x); }
    void insertRear(int x)  { dq.push_back(x); }
    void deleteFront()      { if(!dq.empty()) dq.erase(dq.begin()); else cout<<"Underflow!\n"; }
    void deleteRear()       { if(!dq.empty()) dq.pop_back(); else cout<<"Underflow!\n"; }
    void display() {
        if(dq.empty()) cout<<"Deque empty\n";
        else { for(int x:dq) cout<<x<<" "; cout<<"\n"; }
    }
};

int main() {
    Deque d;
    d.insertRear(10);
    d.insertRear(20);
    d.insertFront(5);
    d.display();       // 5 10 20
    d.deleteFront();
    d.display();       // 10 20
    d.deleteRear();
    d.display();       // 10
    return 0;
}
