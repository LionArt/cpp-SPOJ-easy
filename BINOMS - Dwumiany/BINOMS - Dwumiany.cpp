/* Andrulewicz Artur
BINOMS - Dwumiany
2018-06-06
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        double wynik=1;
        cin>>n>>k;
        if(k!=0 && k!=n)
        {
            for(int j=0;j<k;j++)
            {
                wynik=(wynik*(n-j));
                wynik=(wynik/(j+1));
            }
        }
        else
        wynik=1;
        cout<<setprecision(100)<<wynik<<endl;
    }
    return 0;
}
