/* Andrulewicz Artur
PTWPZ083 - PTwPZ Kalkulator
2018-06-27
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string ciag;
        cin>>ciag;
        int wynik=0;
        bool dodaj=true;
        string liczba="";
        for(int j=0;j<ciag.length();j++)
        {
            if((ciag[j]!='-' && ciag[j]!='+') && (j!=(ciag.length()-1)))
            liczba+=ciag[j];
            else
            {
                if(j==(ciag.length()-1))
                liczba+=ciag[j];
                if(dodaj)
                wynik+=atoi(liczba.c_str());
                else
                wynik-=atoi(liczba.c_str());
                liczba="";
            }
            if(ciag[j]=='-')
            dodaj=false;
            else if(ciag[j]=='+')
            dodaj=true;
        }
        cout<<wynik<<endl;
    }
    return 0;
}
