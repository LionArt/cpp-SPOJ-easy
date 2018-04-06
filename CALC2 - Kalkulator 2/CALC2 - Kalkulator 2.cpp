/* Andrulewicz Artur
CALC2 - Kalkulator 2
2017-10-22
*/

#include <iostream>

using namespace std;

int main()
{
    char x;
    int a,b,tab[10];
    for(int i=0;i<10;i++)
    tab[i]=0;
    while(cin>>x>>a>>b)
    {
        switch(x)
        {
            case 'z':
            {
                tab[a]=b;
                break;
            }
            case '+':
            {
                cout<<(tab[a]+tab[b])<<endl;
                break;
            }
            case '-':
            {
                cout<<(tab[a]-tab[b])<<endl;
                break;
            }
            case '*':
            {
                cout<<(tab[a]*tab[b])<<endl;
                break;
            }
            case '/':
            {
                cout<<(tab[a]/tab[b])<<endl;
                break;
            }
            case '%':
            {
                cout<<(tab[a]%tab[b])<<endl;
                break;
            }
        }
    }
    return 0;
}
