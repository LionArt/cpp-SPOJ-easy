/* Andrulewicz Artur
KC001 - Dodawanie liczb ca³kowitych
2017-10-16
*/

#include <iostream>

using namespace std;

int main()
{
    int l,suma=0;
    for(int i=0;i<3;i++)
    {
        cin>>l;
        suma=suma+l;
    }
    cout<<suma;
    return 0;
}
