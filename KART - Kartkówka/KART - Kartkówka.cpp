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
        // Przy kolejnej potêdze 5, liczba zer zwiêksza siê o 1
        //od 1-24, liczba zer zwiêksza siê co 5
        //przy 25 zwiêksza siê jeszcze o 1 dodatkowo (20! lub 24! da nam 4 zera na koñcu, 25! da nam 6 zer)
        //przy 125 zwiêkszas siê jeszcze o 2, bo zwiêksza siê o 1 ze wzglêdu na kolejn¹ wielokrotnoœæ 5 oraz
        // o 1 ze wzglêdu na pierwsz¹ wielokrotnoœæ 125 (kolejnej potêgi 5)
        while(liczba>=mod)
        {
            zera+=liczba/mod;
            mod*=5;
        }
        cout<<zera<<endl;
    }
    return 0;
}
