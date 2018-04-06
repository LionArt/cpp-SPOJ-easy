/* Andrulewicz Artur
PP0602D - ROL (k)
2017-10-22
*/

#include <iostream>

using namespace std;

int main()
{
    int n,k, *tab, *tab2, pos;
    cin>>n>>k;
    tab= new int [n];
    tab2= new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>tab[i];
    }
    for(int i=0;i<n;i++)
    {
        pos=i-k;
        if(pos<0)
        pos=n+pos;
        tab2[pos]=tab[i];
    }
    for(int i=0;i<n;i++)
    cout<<tab2[i]<<" ";
    delete [] tab;
    delete [] tab2;
    return 0;
}
