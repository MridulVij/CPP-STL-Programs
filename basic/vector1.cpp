#include <iostream>
#include <vector>
using namespace std;

class Solution
{
 int elements;
 
 public:
 void vectors(vector<int>v, int size)
 {
  cout<<"\nEnter Elements inside Vectors\n";
 for(int i=0; i<v.size(); ++i)
  {
   cin>>elements;
   v.push_back(elements);
  }
 }

};

int main()
{
 int size=0;
 //vector<int>v;
 cin>>size;
vectors(size);
return 0;
}