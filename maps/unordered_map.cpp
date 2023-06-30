#include <bits/stdc++.h>
using namespace std;

// map is based on red black trees have an order form TC O(n)
// unordered map is based upon hashing and does not any order form TC O(1)

int main()
{
    unordered_map<string, int>ump;

    ump["m"] = 20;
    ump["r"] = 30;
    ump["i"] = 40;
    ump.insert({"hello", 20});
    // functions

    // for(auto x:ump)
    //     cout<<x.first<<" "<<x.second<<endl;
    

    // if(ump.find("hello")!=ump.end())
    //  cout<<"Found";
     
    // else 
    //  cout<<"Not Found";

    // auto it = ump.find("hello");
    // if(it != ump.end()){
    //     cout<<(it->second);
    // }


    for(auto it = ump.begin(); it!=ump.end(); it++){
        cout<<it->second;
                
    }

    if(ump.count("hello")>0){
        cout<<"Found";
    }else{
        cout<<"Not Found";
    }

    //erase()  ump.erase(), ump.erase(ump.begin(), ump,end());
    //size()

// TC - O(1)
// SC - O(1)


return 0;
}
