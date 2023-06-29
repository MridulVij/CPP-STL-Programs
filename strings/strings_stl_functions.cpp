#include <bits/stdc++.h>
using namespace std;
int main()
{
string str = "mridulvij";
string n1 = "mridul";
string n2 = "vij";

// Reverse function - TC = O(length of input string)
reverse(str.begin(), str.end());
cout << str << endl;


// Substring - substr()
cout << str.substr(1,4) << endl;


// Concatination
cout << n1+n2 <<endl;
cout << n1.append(n2) <<endl;


// String Concatinate with char type - strcat()
char nn1[10] = "mridul";
char nn2[10] = "vij";

strcat(nn1,nn2);

cout<<nn1<<endl;

// Push Back

// Size

// Length

// strlen for extracting char array length / size
char ch[20] = "mridul";
cout<<strlen(ch)<<endl;


// to_string - to convert the int value to string
int num = 10;

cout<< to_string(num)<<endl;

string str2 = to_string(num);
str += "1";
cout<<str2<<endl;


// strcmp - for comparing 2 strings




return 0;
}
