/* Andrulewicz Artur
VSR - Predkoœæ œrednia
2017-10-17
*/

#include <iostream>

using namespace std;

int main()
{
    int a,b,t,x=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        x=a*b;
        cout<<(int)((x/(float)(a+b)*2))<<endl;
    }
    return 0;
}
