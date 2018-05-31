/* Andrulewicz Artur
JZLICZ - Zliczacz liter
2018-05-31
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int tab[52];
    for(int i=0;i<52;i++)
    tab[i]=0;
    for(int i=0;i<t+1;i++)
    {
        string line;
        getline(cin,line);
        for(int j=0;j<line.length();j++)
        {
            if(line[j]>=65 && line[j]<=90)
            {
                tab[line[j]-39]+=1;
            }
            else
            if(line[j]>=97 && line[j]<=122)
            {
                tab[line[j]-97]+=1;
            }
        }
    }
    for(int i=0;i<52;i++)
    {
        char t;
        if(tab[i]>0)
        {
            if(i<=25)
            {
                t=i+97;
            }
            else
            {
                t=i+39;
            }
            cout<<t<<" "<<tab[i]<<endl;
        }
    }
    return 0;
}
