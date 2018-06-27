/* Andrulewicz Artur
MWPZ06H - Konkurs pseudomatematyczny
2018-06-27
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        vector <int> tab;
        for(int j=0;j<x;j++)
        {
            int y;
            cin>>y;
            int pos=0;
            for(int k=0;k<tab.size();k++)
            {
                if(y>tab[k])
                {
                    pos=k+1;
                }
            }
            tab.insert(tab.begin()+pos,y);
        }
        int maximum=tab[tab.size()-1];
        int c=0;
        for(int j=tab.size()-1;j>=0;j--)
        {
            if(tab[j]==maximum)
            {
                c++;
                cout<<tab[j]<<" ";
            }
        }
        for(int j=0;j<tab.size()-c;j++)
        cout<<tab[j]<<" ";
        cout<<endl;
    }
    return 0;
}
