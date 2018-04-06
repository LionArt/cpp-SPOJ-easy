/* Andrulewicz Artur
PTROL - ROL
2017-10-18
*/

#include <iostream>

using namespace std;

int main()
{
    int t,n,l;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int tab[n];
        for(int j=0;j<n;j++)
        {
            cin>>l;
            tab[j]=l;
        }
        l=tab[0];
        for(int j=0;j<n-1;j++)
        {
            tab[j]=tab[j+1];
        }
        tab[n-1]=l;
        for(int j=0;j<n;j++)
        {
            cout<<tab[j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
