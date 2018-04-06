/* Andrulewicz Artur
EUCGAME - Gra Euklidesa
2017-10-21
*/

#include <iostream>

using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        while(a!=b)
        {
            if(a>b)
            a=a-b;
            else
            b=b-a;
        }
        cout<<a+b<<endl;
    }
    return 0;
}
