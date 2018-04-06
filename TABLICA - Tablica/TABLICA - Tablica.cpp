/* Andrulewicz Artur
TABLICA - Tablica
2017-10-21
*/

#include <iostream>

using namespace std;

int main()
{
    int a,i=0;
    int tab[100];
    while(cin>>a)
    {
        tab[i]=a;
        i++;
    }
    for(i=i-1;i>=0;i--)
    cout<<tab[i]<<" ";
    return 0;
}
