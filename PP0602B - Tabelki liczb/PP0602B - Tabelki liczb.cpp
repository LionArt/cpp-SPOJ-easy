/* Andrulewicz Artur
PP0602B - Tabelki liczb
2018-06-27
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        int tab[x][y];
        for(int j=0;j<x;j++)
        for(int k=0;k<y;k++)
        {
            int n;
            cin>>n;
            tab[j][k]=n;
        }
        int temp[4];
        temp[0]=tab[0][0];
        temp[1]=tab[x-1][0];
        temp[2]=tab[x-1][y-1];
        temp[3]=tab[1][y-1];
        for(int j=0;j<y-1;j++)
        tab[0][j]=tab[0][j+1];
        for(int j=x-1;j>0;j--)
        tab[j][0]=tab[j-1][0];
        for(int j=y-1;j>0;j--)
        tab[x-1][j]=tab[x-1][j-1];
        for(int j=0;j<x-1;j++)
        tab[j][y-1]=tab[j+1][y-1];
        tab[1][0]=temp[0];
        tab[x-1][1]=temp[1];
        tab[x-2][y-1]=temp[2];
        tab[0][y-1]=temp[3];
        for(int j=0;j<x;j++)
        {
            for(int k=0;k<y;k++)
            {
                cout<<tab[j][k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
