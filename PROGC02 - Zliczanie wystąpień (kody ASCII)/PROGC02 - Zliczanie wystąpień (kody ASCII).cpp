/* Andrulewicz Artur
PROGC02 - Zliczanie wystąpień (kody ASCII)
2018-06-30
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int ascii[255];
    for(int i=0;i<255;i++)
    ascii[i]=0;
    string line;
    while(getline(cin,line))
    {
        for(int i=0;i<line.length();i++)
        {
            char c=line[i];
            int x=c;
            if(x<0)
            x+=256;
            ascii[x]++;
        }
        ascii[10]++;
    }
    for(int i=0;i<255;i++)
    if(ascii[i]>0)
    cout<<i<<" "<<ascii[i]<<endl;
}
