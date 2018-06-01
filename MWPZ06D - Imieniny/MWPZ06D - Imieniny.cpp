/* Andrulewicz Artur
MWPZ06D - Imieniny
2018-05-31
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int l,c;
        cin>>l>>c;
        if(l==1 && c>0)
        cout<<"TAK"<<endl;
        else if(((l-1)>c) || (c%(l-1)>0))
        {
            cout<<"TAK"<<endl;
        }
        else
        cout<<"NIE"<<endl;

    }
    return 0;
}
