#include <iostream>
#include <set>
using namespace std;
int main()
{
multiset<int> ms;
multiset<int> ms1;

ms.insert(10);
ms.insert(20);
ms.insert(20);
ms.insert(20);
ms.insert(30);

multiset<int>::iterator it;
for (it = ms.begin(); it != ms.end(); ++it)
    {
        cout << *it << " ";
    }

cout<<"Size of multiset with elements"<<ms.size()<<endl;

return 0;
}