/* Andrulewicz Artur
PP0602A - Parzyste nieparzyste
2017-10-19
*/

#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int tab[n];
        for(int j=0;j<n;j++)
        {
            cin>>tab[j];
        }

        for(int j=1;j<n;j+=2)
        {
            cout<<tab[j]<<' ';
        }
        for(int j=0;j<n;j+=2)
        {
            cout<<tab[j]<<' ';
        }

        cout<<endl;
    }
    return 0;
}
