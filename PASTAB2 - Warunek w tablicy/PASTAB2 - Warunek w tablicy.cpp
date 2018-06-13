/* Andrulewicz Artur
PASTAB2 - Warunek w tablicy
2018-06-13
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int tab[t];
    for(int i=0;i<t;i++)
    tab[i]=0;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        tab[i]=x;
    }
    char znak;
    cin>>znak;
    int liczba;
    cin>>liczba;
    if(znak=='>')
    {
        for(int i=0;i<t;i++)
        {
            if(tab[i]>liczba)
            cout<<tab[i]<<endl;
        }
    }
    else
    {
        for(int i=0;i<t;i++)
        {
            if(tab[i]<liczba)
            cout<<tab[i]<<endl;
        }
    }
    return 0;
}
