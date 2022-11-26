#include <iostream>
#include <deque>
using namespace std;

int main()
{
deque<int>d;

d.push_back(100); //element 1
d.push_back(200); //element 2
d.push_back(300); //element 3
d.push_back(400); //element 4
d.push_back(500); //element 5

d.push_front(10); //element 6
d.push_front(20); //element 7
d.push_front(30); //element 8
d.push_front(40); //element 9
d.push_front(50); //element 10

cout<<d.size()<<endl; // total no. of element will be = size = 5


// Note - jitni baar popback ya popfront function laagega utni baar element delete hoote jaaye ge
// example - no. of functions == no. of deleting elements from deque
d.pop_back(); // used to delete elements from back in deque
d.pop_front(); // used to delete elements from front in deque
d.pop_front(); // used to delete elements from front in deque

// for accessing element from front and back
cout<<"front element"<<d.front()<<endl;
cout<<"back element"<<d.back()<<endl;

// is deque is empty or not
cout<<"Empty or not"<<d.empty()<<endl; // no this not empty 0 = false

// accessing element from index
cout<<"Element on Index"<<" "<<d.at(0)<<endl;

for(int i:d){ //loop prints all element inside deque
cout<<i<<" ";
}

// erasing element from deque
d.erase(d.begin());
cout<<d.size(); // size declaration from starting index that is 0

cout<<"Size of Deque"<<d.size()<<endl; // direct size declaration

return 0;
}
