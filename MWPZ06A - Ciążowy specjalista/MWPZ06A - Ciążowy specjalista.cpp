/* Andrulewicz Artur
MWPZ06A - Ci¹¿owy specjalista
2018-06-27
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x,y,z,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>z;
        int a=x+y;
        int b=y*z;
        double temp=double(a-b)/double(z-1);
        temp*=-12;
        cout<<round(temp)<<endl;
    }
    return 0;
}
