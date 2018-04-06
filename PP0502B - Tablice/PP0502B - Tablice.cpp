/* Andrulewicz Artur
PP0502B - Tablice
2017-10-17
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
        for(int j=n-1;j>=0;j--)
        {
            cout<<tab[j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
