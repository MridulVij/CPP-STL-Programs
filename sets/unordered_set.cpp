#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int>ump;
    ump.insert(10);
    ump.insert(20);
    ump.insert(30);
    ump.insert(40);
    ump.insert(50);

    // for(auto i : ump){
    //     cout<<i;
    // }    

    // for(auto it = ump.begin(); it != ump.end(); it++){
    //     cout<<(*it);
    // }

    if(ump.find(50)==ump.end()){
        cout<<"Element Found";
    }else{
        cout<<"Not Found";
    }

return 0;
}
