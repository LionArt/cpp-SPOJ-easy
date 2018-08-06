/* Andrulewicz Artur
MWP3_3D - Dzielenie pizzy
2018-08-06
*/

#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

double obwod(long long bok)
{
    return 2*M_PI*(double(bok)/2);
}

double przeciecie(double obwod,int osoby)
{
    return obwod/osoby;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long bok;
        int osoby;
        cin>>bok>>osoby;
        int ciecia;
        if(osoby%2==0)
        ciecia=osoby/2;
        else
        ciecia=osoby;
        double odleglosc;
        if(osoby%2!=0)
        odleglosc=przeciecie(obwod(bok),osoby)/2;
        else
        odleglosc=przeciecie(obwod(bok),osoby);
        odleglosc*=1000;
        odleglosc=round(odleglosc);
        odleglosc=odleglosc/1000;
        cout<<setprecision(3)<<fixed<<odleglosc<<" "<<ciecia<<endl;

    }
}
