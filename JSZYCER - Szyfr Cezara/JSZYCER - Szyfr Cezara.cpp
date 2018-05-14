/* Andrulewicz Artur
JSZYCER - Szyfr Cezara
2018-05-14
*/

#include <iostream>

using namespace std;

int main()
{
    string x;
    while(getline(cin,x))
    {
        for(int i=0;i<x.length();i++)
        {
            if(x[i]>=65 && x[i]<=90)
            {
                x[i]=x[i]+3;
                if(x[i]>90)
                {
                    x[i]=65+(x[i]-90-1);
                }
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
