#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Variable Declaration
    string str = "nitin";
    int l = 0;
    int h = str.size()-1;
    int flag=0;

    // String Checking
    while (l<=h){
     if(str[l]!=str[h]) flag = 1;
     else l++; h--; 
    }
    // String Comparison 
    (flag==0) ? cout<<"String is Palindrome" : cout<<"String is not a Palindrome";

return 0;
}
