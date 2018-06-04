/* Andrulewicz Artur
KC008 - Sumy wielokrotne
2018-06-04
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int liczba;
    long long sumaSum=0;
    long long suma=0;
    while(cin>>liczba)
    {
        if(liczba==0)
        {
            sumaSum+=suma;
            cout<<suma<<endl;
            suma=0;
        }
        else
        {
            suma+=liczba;
        }
    }
    cout<<sumaSum<<endl;
    return 0;
}
