/* Andrulewicz Artur
BAJTST - Bajtockie Œwiêto Trójk¹ta
2018-07-27
*/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

//Wzór Herona na pole dowolnego trojkata na podstawie znajomosci dlugosci 3 bokow
double getPole(int a,int b,int c)
{
    if((a<(b+c)) && (b<(a+c)) && (c<(a+b)))
    {
        double p=double(a+b+c)/2;
        double pole=sqrt(double((p*(p-a)*(p-b)*(p-c))));
        return pole;
    }
    else
    return 0;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int osoby;
        double kreda,wynik=0;
        cin>>osoby>>kreda;
        for(int j=0;j<osoby;j++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            wynik+=((getPole(a,b,c))/10)*kreda;
        }
        wynik=round(wynik);
        cout<<setprecision(1000)<<wynik<<endl;
    }
    return 0;
}
