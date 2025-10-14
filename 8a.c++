 //Implement STACK using a vector (1-D array)  
 #include<iostream>
 #include<vector>
 #include<stack>
 using namespace std;
 int main(){
    stack<int, vector<int>> K;
    K.push(2);
    K.push(21);
    K.push(45);
    K.push(76);
    cout<<"Top element is: "<<K.top()<<endl;
    while ( !K.empty() ) {
       cout << "Top element is: " << K.top() << endl;
       K.pop();
    }
    if (K.empty())
       cout << "The Stack is now empty\n";
    return 0;
 }