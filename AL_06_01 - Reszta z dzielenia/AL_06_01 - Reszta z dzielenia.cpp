/* Andrulewicz Artur
AL_06_01 - Reszta z dzielenia
2018-07-28
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int reszta=a%b;
        if(reszta<0 && b>0)
        reszta+=b;
        else if(reszta<0 && b<0)
        reszta+=-b;
        cout<<reszta<<endl;
    }
    return 0;
}
