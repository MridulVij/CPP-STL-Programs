#include<iostream>
#include<list>

using namespace std;
//
int main(){

list<int>l;

l.push_back(100); //element 1
l.push_back(200); //element 2
l.push_back(300); //element 3
l.push_back(400); //element 4
l.push_back(500); //element 5

l.push_front(10); //element 6
l.push_front(20); //element 7
l.push_front(30); //element 8
l.push_front(40); //element 9
l.push_front(50); //element 10

cout<<l.size()<<endl; // total no. of element will be = size = 5


// Note - jitni baar popback ya popfront function laagega utni baar element delete hoote jaaye ge
// example - no. of functions == no. of deleting elements from deque
l.pop_back(); // used to delete elements from back in deque
l.pop_front(); // used to delete elements from front in deque
l.pop_front(); // used to delete elements from front in deque

// for accessing element from front and back
cout<<"front element"<<l.front()<<endl;
cout<<"back element"<<l.back()<<endl;

// is deque is empty or not
cout<<"Empty or not"<<l.empty()<<endl; // no this not empty 0 = false

// direct accessing element from index is not possible
//cout<<"Element on Index"<<" "<<l.at(0)<<endl;                                             // big difference in list as compare to deque

for(int i:l){ //loop prints all element inside deque
cout<<i<<" ";
}

// erasing element from deque
l.erase(l.begin());
cout<<l.size(); // size declaration from starting index that is 0

cout<<"Size of List"<<l.size()<<endl; // direct size declaration

return 0;
}
//

/*
// CPP program to show the implementation of List
// function for printing the elements in a list
void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

// Driver Code
int main()
{

    list<int> gqlist1, gqlist2;

    for (int i = 0; i < 10; ++i) {
        gqlist1.push_back(i * 2);
        gqlist2.push_front(i * 3);
    }
    cout << "\nList 1 (gqlist1) is : ";
    showlist(gqlist1);

    cout << "\nList 2 (gqlist2) is : ";
    showlist(gqlist2);

    cout << "\ngqlist1.front() : " << gqlist1.front();
    cout << "\ngqlist1.back() : " << gqlist1.back();

    cout << "\ngqlist1.pop_front() : ";
    gqlist1.pop_front();
    showlist(gqlist1);

    cout << "\ngqlist2.pop_back() : ";
    gqlist2.pop_back();
    showlist(gqlist2);

    cout << "\ngqlist1.reverse() : ";
    gqlist1.reverse();
    showlist(gqlist1);

    cout << "\ngqlist2.sort(): ";
    gqlist2.sort();
    showlist(gqlist2);

    return 0;
}
*/
