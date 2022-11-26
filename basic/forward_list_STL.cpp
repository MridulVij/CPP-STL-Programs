/*
#include<iostream>
#include<forward_list>
using namespace std;

int main(){

forward_list<int>fl;

fl.assign();
}
*/

//
// C++ code to demonstrate forward list
// and assign()
#include <forward_list>
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	// Declaring forward list
	forward_list<int> flist1;

	// Declaring another forward list
	forward_list<int> flist2;

	//Declaring another forward list
	forward_list<int> flist3;

	// Assigning values using assign()
	flist1.assign({ 1, 2, 3 });

	// Assigning repeating values using assign()
	// 5 elements with value 10
	flist2.assign(5, 10);


	//Assigning values of list 1 to list 3
	flist3.assign(flist1.begin(), flist1.end());

	// Displaying forward lists
	cout << "The elements of first forward list are : ";
	for (int a : flist1)
		cout << a << " ";
	cout << endl;

	cout << "The elements of second forward list are : ";
	for (int b : flist2)
		cout << b << " ";
	cout << endl;

	
	cout << "The elements of third forward list are : ";
	for (int c : flist3)
		cout << c << " ";
	cout << endl;








// my code b
 flist1.push_front(30);
 flist1.emplace_front(20);
 flist1.pop_front();
 for (int c : flist1)
		cout << c << " ";
	cout << endl;






 forward_list<int>::iterator ptr;

 ptr = flist2.insert_after(flist2.begin(), { 30, 20, 10 }); // it means insert element after begin element 10 that is 30, 20, 10, and remaining 10,10,10,10
 
    // Displaying the forward list
    cout << "The forward list after insert_after operation ";
    for (int& c : flist2)       
    cout << c <<"\n";
    cout << endl;


	return 0;
}

//