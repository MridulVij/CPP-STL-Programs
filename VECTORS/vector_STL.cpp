#include <iostream>
#include <vector>
using namespace std;

//
vector<int>v;
//
int main()
{
vector<int> v; // old vector
//vector<int> last(v); // new vector with old elements

cout<<"Capacity: "<<v.capacity()<<endl;

v.push_back(99); //0
v.push_back(74); //1
v.push_back(78); //2

// Start iterator code from here
vector<int>::iterator i;

  for (i = v.begin(); i != v.end(); ++i) 
    {
        cout << *i << " ";
    }
return 0;
}
// Ends iterator code here

/*
cout<<"Capacity: "<<v.capacity()<<endl;
//cout<<"Element in Vector at: "<<v.at(1)<<endl; // access by index value
cout<<"Element in Front of vector: "<<v.front()<<endl; // accessing functions
cout<<"Element in Back of vector: "<<v.back()<<endl; // accessing functions
v.clear(); // clear all elements inside vector
cout<<"Clear All Elements: "<<v.size()<<endl; // checking size of vector
cout<<"Size: "<<v.size()<<endl;
cout<<"Capacity: "<<v.capacity()<<endl; //all elements is deleted but vector is not deleted yet

cout<<"Returns"<<v.empty()<<endl;
*/


// C++ program to illustrate the
// capacity function in vector
/*
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> g1;

	for (int i = 1; i <= 5; i++)
		g1.push_back(i);

	cout << "Size : " << g1.size();
	cout << "\nCapacity : " << g1.capacity();
	cout << "\nMax_Size : " << g1.max_size();

	// resizes the vector size to 4
	g1.resize(4);

	// prints the vector size after resize()
	cout << "\nSize : " << g1.size();

	// checks if the vector is empty or not
	if (g1.empty() == false)
		cout << "\nVector is not empty";
	else
		cout << "\nVector is empty";

	// Shrinks the vector
	g1.shrink_to_fit();
	cout << "\nVector elements are: ";
	for (auto it = g1.begin(); it != g1.end(); it++)
		cout << *it << " ";

	return 0;
}*/
//










// 5 == 5 -> True
// 0 == 5 -> False
// 0 != 5 -> True 
// 5 != 5 -> False