/* Andrulewicz Artur
ROWNANIE - Równanie kwadratowe
2017-10-21
*/

#include <iostream>

using namespace std;

int main()
{
    double a,b,c,delta;
    while(cin>>a>>b>>c;)
    {
        delta=((b*b)-((4*a)*c));
        if(delta>0)
        cout<<2<<endl;
        else if(delta==0)
        cout<<1<<endl;
        else
        cout<<0<<endl;
    }
    return 0;
}
