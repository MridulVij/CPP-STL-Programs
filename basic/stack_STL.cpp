#include <iostream>
#include <stack>
using namespace std;

int main()
{

stack<int>s;

s.push(10);
s.push(20);
s.push(30);
s.push(40);

// for displaying elements inside stack
while (!s.empty()) {
        cout << s.top() <<" ";
        s.pop();
}

cout<<s.size()<<endl;

// for deleting elements from stack by applying no. of pop() function
 // pop will delete element
cout<<"Delete element"<<s.top()<<endl; // top will show element
return 0;

}
