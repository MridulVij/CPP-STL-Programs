// CPP CLASS TEMPLATE by MRIDUL
#include <bits/stdc++.h>
using namespace std;

class Solution{
 int i=0;
 public:
 // parameterized constructor is used here
 Solution(vector<int>v){
  for(i=0; i<v.size(); ++i){
   cout<<v.at(i)<<" ";
  }
 }
};

int main()
{
vector<int>v = {10,20,30,40,50,60,70,80,90};
Solution S(v);

return 0;
}