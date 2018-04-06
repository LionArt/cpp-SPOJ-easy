/* Andrulewicz Artur
RNO_DOD - Proste dodawanie
2017-10-16
*/

#include <iostream>

using namespace std;

int main()
{
    int t,n,l,suma;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        suma=0;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>l;
            suma=suma+l;
        }
        cout<<suma<<endl;
    }
    return 0;
}
