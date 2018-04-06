/* Andrulewicz Artur
CALC - Kalkulator
2017-10-18
*/

#include <iostream>

using namespace std;

int main()
{
    char x;
    int a,b;
    while(cin>>x>>a>>b)
    {
        switch(x)
        {
            case '%':
            {
                cout<<a%b<<endl;
                break;
            }
            case '/':
            {
                cout<<a/b<<endl;
                break;
            }
            case '*':
            {
                cout<<a*b<<endl;
                break;
            }
            case '-':
            {
                cout<<a-b<<endl;
                break;
            }
            case '+':
            {
                cout<<a+b<<endl;
                break;
            }
        }
    }
    return 0;
}
