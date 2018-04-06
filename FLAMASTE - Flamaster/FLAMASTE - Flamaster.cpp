/* Andrulewicz Artur
FLAMASTE - Flamaster
2017-10-21
*/

#include <iostream>

using namespace std;

int main()
{
    int t,c;
    string w;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>w;
        c=1;
        for(int j=1;j<=w.length();j++)
        {
            if(w[j]==w[j-1])
            {
                c++;
            }
            else
            {
                if(c>2)
                {
                    cout<<w[j-1];
                    cout<<c;
                }
                else
                for(int k=0;k<c;k++)
                {
                    cout<<w[j-1];
                }
                c=1;
            }
        }
        cout<<endl;
    }
    return 0;
}
