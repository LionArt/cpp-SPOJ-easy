/* Andrulewicz Artur
FANGEN - Wiatraczki
2018-06-21
*/

#include <iostream>

using namespace std;

int main()
{
    int t=-1;
    while(t!=0)
    {
        cin>>t;
        bool right=true;
        if(t<0)
        {
            right=false;
            t=-t;
        }
        char tab[2*t][2*t];
        for(int i=0;i<2*t;i++)
        {
            for(int j=0;j<2*t;j++)
            tab[i][j]='.';
        }
        if(right)
        {
            for(int i=0;i<t;i++)
            for(int j=i;j<t;j++)
            tab[i][j]='*';
            for(int i=t-1;i>=0;i--)
            for(int j=(2*t)-1;j>=((2*t)-1)-i;j--)
            tab[i][j]='*';
            for(int i=t;i<t*2;i++)
            for(int j=0;j<(2*t)-i;j++)
            tab[i][j]='*';
            for(int i=(2*t);i>=t;i--)
            for(int j=t;j<=i;j++)
            tab[i][j]='*';
        }
        else
        {
            for(int i=t-1;i>=0;i--)
            for(int j=0;j<=i;j++)
            tab[i][j]='*';
            for(int i=0;i<t;i++)
            for(int j=t;j<((2*t)-i);j++)
            tab[i][j]='*';
            for(int i=2*t-1;i>=t;i--)
            for(int j=i;j<(2*t);j++)
            tab[i][j]='*';
            for(int i=2*t-1;i>=t;i--)
            for(int j=2*t-1-i;j<t;j++)
            tab[i][j]='*';
        }
        for(int i=0;i<2*t;i++)
        {
            for(int j=0;j<2*t;j++)
            cout<<tab[i][j];
            cout<<endl;
        }
    }
    return 0;
}
