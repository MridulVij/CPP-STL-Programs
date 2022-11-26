// CPP code to illustrate Queue in
// Standard Template Library (STL)
#include <iostream>
#include <queue>

using namespace std;

/*
// Print the queue by run an loop
//start
void showq(queue<int> gq)
{
	queue<int> g = gq;
	while (!g.empty()) {
		cout << '\t' << g.front();
		g.pop();
	}
	cout << '\n';
}//end

// Driver Code
int main()
{
	queue<int> gquiz;
	gquiz.push(10);
	gquiz.push(20);
	gquiz.push(30);

	cout << "The queue gquiz is : ";
	showq(gquiz);

	cout << "\ngquiz.size() : " << gquiz.size(); //tells size of queue
	cout << "\ngquiz.front() : " << gquiz.front();//prints front element inside queue or top  of queue
	cout << "\ngquiz.back() : " << gquiz.back();//prints back element inside queue or down side of queue

	cout << "\ngquiz.pop() : ";
	gquiz.pop();//delete the element from queue
	showq(gquiz);

	return 0;
}*/


//
// CPP code to illustrate Queue operations in STL

// Print the queue using while loop
//start
void print_queue(queue<int> q)
{
	queue<int> temp = q;
	while (!temp.empty()) {
		cout << temp.front()<<" ";
		temp.pop();
	}
	cout << '\n';
}//end

// Driver Code
int main()
{
	queue<int> q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);
    q1.emplace(33);

	cout << "The first queue is : ";
	print_queue(q1);// q1 all elements goes to q and save in queue

	queue<int> q2;
	q2.push(4);
	q2.push(5);
	q2.push(6);
	q2.emplace

	// here we print front element in queue that is 4 and we delete it now we print front element of q2 = 5
    //start
    cout<<q2.front()<<endl;
    q2.pop();
    cout<<q2.front()<<endl;
    //end

	cout << "The second queue is : ";
	print_queue(q2);// q2 all elements goes to q and save in queue


	q1.swap(q2);// swap q1 elements with q2 elements

	cout << "After swapping, the first queue is : ";
	print_queue(q1);
	cout << "After swapping the second queue is : ";
	print_queue(q2);

    cout<<q1.size()<<endl;
    cout<<q2.size()<<endl;

	cout<<q1.empty(); // if its not empty then it returns 0 if empty it returns 1


	return 0;
}

//
