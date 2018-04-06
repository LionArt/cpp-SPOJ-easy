/* Andrulewicz Artur
PP0601A2 - Test 3
2017-10-25
*/

#include <iostream>

using namespace std;

int main()
{
    int p,a,c=0;
    cin>>p;
    cout<<p<<endl;
    while(c!=3)
    {
        cin>>a;
        if(a==42 && p!=42)
        c++;
        if(c==3)
        cout<<a;
        else
        cout<<a<<endl;
        p=a;
    }
    return 0;
}
