#include<iostream>
#include<utility>

using namespace std;

int main()
{
   pair<int, string> p={10, "MV"}; // 1st method

   pair<int, string>p1;
   p1 = make_pair(2, "MV"); // 2nd method

    cout<<p.first<<" "<<p.second<<" "<<p1.first<<" "<<p1.second<<endl;
}

