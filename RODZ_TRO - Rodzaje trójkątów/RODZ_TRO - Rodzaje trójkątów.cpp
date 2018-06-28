/* Andrulewicz Artur
RODZ_TRO - Rodzaje trójk¹tów
2018-06-28
*/

#include <iostream>
#include <cmath>

using namespace std;

bool istnieje(int a,int b,int c)
{
    if(a>=(b+c))
    return false;
    if(b>=(a+c))
    return false;
    if(c>=(a+b))
    return false;
    return true;
}

bool prostokatny(int a,int b,int c)
{
    double x=pow(a,2)+pow(b,2);
    double y=pow(c,2);
    if(x==y)
    return true;
    else
    return false;
}

bool ostrokatny(int a,int b,int c)
{
    double x=pow(a,2)+pow(b,2);
    double y=pow(c,2);
    if(x>y)
    return true;
    else
    return false;
}

bool rozwartokatny(int a,int b,int c)
{
    double x=pow(a,2)+pow(b,2);
    double y=pow(c,2);
    if(x<y)
    return true;
    else
    return false;
}

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a>c && a>=b)
        {
            int temp=a;
            a=c;
            c=temp;
        }
        else
        if(b>c && b>=a)
        {
            int temp=b;
            b=c;
            c=temp;
        }
        if(!istnieje(a,b,c))
        cout<<"brak"<<endl;
        else if(prostokatny(a,b,c))
        cout<<"prostokatny"<<endl;
        else if(ostrokatny(a,b,c))
        cout<<"ostrokatny"<<endl;
        else if(rozwartokatny(a,b,c))
        cout<<"rozwartokatny"<<endl;
    }
    return 0;
}
