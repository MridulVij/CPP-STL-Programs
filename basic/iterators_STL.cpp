#include<iostream>
#include<iterator>
#include<set>
// Iterator is like a Pointer it is used to point 
using namespace std;

//
// Without Iterator to Accessing elements from sets with loop
int main(){

set<int>s;
s.insert(10);
s.insert(20);
s.insert(30);

for(int i:s)
    { //loop prints all element inside deque
        cout<<i<<" ";
    }
}
//


#include<iostream>
#include<iterator>
#include<set>

using namespace std;

//
// With Iterator it gives fix elements space to access correctly and accuratly
int main(){

set<int>s;
s.insert(10);
s.insert(20);
s.insert(30);

set<int>::iterator i;

  for (i = s.begin(); i != s.end(); ++i)
    {
        cout << *i << " ";
    }
}
//
