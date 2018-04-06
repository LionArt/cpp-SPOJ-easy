/* Andrulewicz Artur
PA05_POT - Czy umiesz potêgowaæ
2017-10-19
*/

#include <iostream>

using namespace std;

int main()
{
    int t,a,b,x;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        a=a%10;
        if((a==2) || (a==3) || (a==7) || (a==4))
        b=b%4;
        if ((a==4) || (a==9))
        b=b%2;
        switch (a)
        {
            case 2:
            {
                if(b==0)
                x=6;
                else if(b==1)
                x=2;
                else if(b==2)
                x=4;
                else if(b==3)
                x=8;
                break;
            }
            case 3:
             {
                if(b==0)
                x=1;
                else if(b==1)
                x=3;
                else if(b==2)
                x=9;
                else if(b==3)
                x=7;
                break;
            }
            case 4:
            {
                if(b==0)
                x=6;
                else if(b==1)
                x=4;
                break;
            }
            case 7:
             {
                if(b==0)
                x=1;
                else if(b==1)
                x=7;
                else if(b==2)
                x=9;
                else if(b==3)
                x=3;
                break;
            }
            case 8:
            {
                if(b==0)
                x=6;
                else if(b==1)
                x=8;
                else if(b==2)
                x=4;
                else if(b==3)
                x=2;
                break;
            }
            case 9:
             {
                if(b==0)
                x=1;
                else if(b==1)
                x=9;
                break;
            }
            default:
            {
                x=a;
                break;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
