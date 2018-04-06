/* Andrulewicz Artur
JROWLIN - Równanie liniowe
2017-10-20
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,b,c,wynik;
    cin>>a>>b>>c;
    if(a!=0)
    {
        wynik=((c-b)/a);
        wynik=wynik*100;
        wynik=round(wynik);
        wynik=wynik/100;
        cout<<wynik;
        if((int)wynik==wynik)
        cout<<".00";
    }
    else
    {
        if((c-b)==0)
        cout<<"NWR"<<endl;
        else
        cout<<"BR"<<endl;
    }
    return 0;
}
