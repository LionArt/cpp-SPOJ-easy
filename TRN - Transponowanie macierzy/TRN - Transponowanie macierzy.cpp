/* Andrulewicz Artur
TRN - Transponowanie macierzy
2017-10-22
*/

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int tab[a][b];
    for(int i=0;i<a;i++)
    for(int j=0;j<b;j++)
    cin>>tab[i][j];
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
        cout<<tab[j][i]<<" ";
        cout<<endl;
    }
    return 0;
}
