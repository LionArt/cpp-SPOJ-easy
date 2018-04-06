/* Andrulewicz Artur
PRZEDSZK - Przedszkolanka
2017-10-18
*/

#include <iostream>

using namespace std;

int nwd (int a,int b)
{
    int temp;
    while ((a-b!=0) || (b-a!=0))
    {
        if(b>a)
        {
            temp=a;
            a=b;
            b=temp;
        }
        temp=a-b;
        a=b;
        b=temp;
    }
    return a;
}
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        cout<<((a*b)/nwd(a,b))<<endl;
    }
    return 0;
}
