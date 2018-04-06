/* Andrulewicz Artur
PP0501A - NWD
2017-10-16
*/

#include <iostream>

using namespace std;

int nwd(int a,int b)
{
    int temp;
    if(a==0 || b==0)
    return 0;
    else
    {
        while((a-b)!=0)
        {
            if(b>a)
            {
                temp=a;
                a=b;
                b=temp;
            }
            a=a-b;
        }
        return a;
    }
}

int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        cin>>b;
        cout<<nwd(a,b)<<endl;
    }
}
