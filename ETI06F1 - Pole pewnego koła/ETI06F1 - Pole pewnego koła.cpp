/* Andrulewicz Artur
ETI06F1 - Pole pewnego ko³a
2017-10-19
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double r,d,pi=3.141592654,wynik;
    cin>>r>>d;
    wynik=((r*r)-(double)((d*d)/4))*pi;
    wynik=(int)(wynik*1000);
    wynik=wynik/10;
    wynik=round(wynik);
    wynik=wynik/100;
    cout<<setprecision(10000)<<wynik;
    return 0;
}
