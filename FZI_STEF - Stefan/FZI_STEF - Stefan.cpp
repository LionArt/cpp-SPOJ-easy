/* Andrulewicz Artur
FZI_STEF - Stefan
2018-06-13
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int tab[t];
    long long aktualnyZysk=0;
    long long maksymalnyZysk=0;
    for(int i=0;i<t;i++)
    {
        cin>>tab[i];
    }
    for(int i=0;i<t;i++)
    {
        aktualnyZysk+=tab[i];
        if(aktualnyZysk<0)
        aktualnyZysk=0;
        else
        if(aktualnyZysk>maksymalnyZysk)
        maksymalnyZysk=aktualnyZysk;
    }
    cout<<maksymalnyZysk<<endl;
    return 0;
}
