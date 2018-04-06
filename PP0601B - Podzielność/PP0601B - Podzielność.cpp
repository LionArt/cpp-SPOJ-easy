/* Andrulewicz Artur
PP0601B - Podzielnoœæ
2017-10-19
*/

#include <iostream>

using namespace std;

int main()
{
    int t,a,b,c,j;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(b>c)
        j=c;
        else
        j=b;
        for(j;j<a;j++)
        {
            if((j%b==0) && (j%c>0))
            cout<<j<<' ';
        }
        cout<<endl;
    }
    return 0;
}
