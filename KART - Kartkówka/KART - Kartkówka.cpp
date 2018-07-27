/* Andrulewicz Artur
KART - Kartkówka
2018-07-27
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int liczba;
        int mod=5;
        cin>>liczba;
        int zera=0;
        // Przy kolejnej potędze 5, liczba zer zwiększa się o 1
        //od 1-24, liczba zer zwiększa się co 5
        //przy 25 zwiększa się jeszcze o 1 dodatkowo (20! lub 24! da nam 4 zera na końcu, 25! da nam 6 zer)
        //przy 125 zwiększa się jeszcze o 2, bo zwiększa się o 1 ze względu na kolejną wielokrotność 5 oraz
        // o 1 ze względu na pierwszą wielokrotność 125 (kolejnej potęgi 5)
        while(liczba>=mod)
        {
            zera+=liczba/mod;
            mod*=5;
        }
        cout<<zera<<endl;
    }
    return 0;
}
