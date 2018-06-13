/* Andrulewicz Artur
NIEKOLEJ - Niekolejne
2018-06-13
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    if(t<3 && t!=0)
    cout<<"NIE"<<endl;
    else
    {
        int tab[t+1];
        for(int i=0;i<=t;i++)
        {
            tab[i]=i;
        }
        for(int i=1;i<t+1;i+=2)
        {
            cout<<tab[i]<<" ";
        }
        for(int i=0;i<t+1;i+=2)
        {
            cout<<tab[i]<<" ";
        }
    }
    return 0;
}
