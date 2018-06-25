/* Andrulewicz Artur
PICIRC - Punkty w okrêgu
2018-06-25
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x,y,r,t;
    cin>>x>>y>>r>>t;
    for(int i=0;i<t;i++)
    {
        int px,py;
        double l;
        cin>>px>>py;
        if(px==x)
        {
            l=fabs(y-py);
        }
        else if(py==y)
        {
            l=fabs(x-px);
        }
        else
        {
            int a=fabs(x-px);
            int b=fabs(y-py);
            l=sqrt(pow(a,2)+pow(b,2));
        }
        if(l==r)
        cout<<"E"<<endl;
        else if(l>r)
        cout<<"O"<<endl;
        else
        cout<<"I"<<endl;
    }
    return 0;
}
