/* Andrulewicz Artur
GLUTTON - Ob¿artuchy
2017-10-19
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t,obzartuchy,ciastka_w_paczce,ciastka,czas;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ciastka=0;
        cin>>obzartuchy>>ciastka_w_paczce;
        for(int j=0;j<obzartuchy;j++)
        {
            cin>>czas;
            ciastka=ciastka+(86400/czas);
        }
        cout<<ceil((double)ciastka/ciastka_w_paczce)<<endl;
    }
    return 0;
}
