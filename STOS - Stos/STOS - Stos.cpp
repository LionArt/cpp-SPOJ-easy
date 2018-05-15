/* Andrulewicz Artur
STOS - Stos
2018-05-15
*/

#include <iostream>

using namespace std;

int main()
{
    char t[10];
    char wskaznik=-1;
    char x;
    for(int i=0;i<10;i++)
    t[i]=0;
    bool dodawanie=false;
    while (cin>>x)
    {

        if(x=='+')
        {
            dodawanie=true;
        }
        else if(x=='-')
        {
            if(wskaznik>-1)
            {
                cout<<t[wskaznik]<<endl;
                t[wskaznik]=0;
                wskaznik--;
            }
            else
            cout<<":("<<endl;
        }
        else
        {
            if(dodawanie)
            {
                if(wskaznik<9)
                {
                    wskaznik++;
                    t[wskaznik]=x;
                    cout<<":)"<<endl;
                }
                else
                cout<<":("<<endl;
                dodawanie=false;
            }
        }
    }
    return 0;
}
