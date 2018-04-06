/* Andrulewicz Artur
FCTRL3 - Dwie cyfry silni
2017-10-17
*/

#include <iostream>

using namespace std;

int main()
{
    int t,n,d,j,s=1;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        s=1;
        cin>>n;
        if(n>9)
        {
            d=0;
            j=0;
        }
        else
        {
            for(int k=1;k<=n;k++)
            {
                s=s*k;
            }
            d=((s%100-s%10)/10);
            j=s%10;
        }
        cout<<d<<' '<<j<<endl;
    }
    return 0;
}
