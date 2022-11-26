// CPP Program to demonstrate Priority Queue
#include <iostream>
#include <queue>
using namespace std;

/*
void showpq(priority_queue<int> gq)
{
    priority_queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}

// Driver Code
int main()
{
    priority_queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(5);
    gquiz.push(1);

    cout << "The priority queue gquiz is : ";
    showpq(gquiz);

    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.top() : " << gquiz.top();

    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showpq(gquiz);

    return 0;
}
*/

//
int main()
{
      int arr[]={1,2,3};

    priority_queue<int> pq1(arr, arr+3);     // creating priority queue using array

      cout<<"Max priority queue: ";
      while(pq1.empty()==false){
      cout<<pq1.top()<<" ";
      pq1.pop();
    }
      cout<<endl;


      for(int i=0; i<3; i++){
      arr[i]=-arr[i];             // multiplying each array element by -1
    }

    priority_queue<int> pq2(arr, arr+3);

      cout<<"Min priority queue: ";
      while(pq2.empty()==false){
      cout<<-pq2.top()<<" ";
      pq2.pop();
    }

}
//
