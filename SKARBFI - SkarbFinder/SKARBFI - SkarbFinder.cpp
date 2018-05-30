/* Andrulewicz Artur
SKARBFI - SkarbFinder
2018-05-30
*/

#include <iostream>

using namespace std;

void changePos(int &ax,int &ay,int x,int y)
{
    switch(x)
    {
        case 0:
        {
            ay+=y;
            break;
        }
        case 1:
        {
            ay+=-y;
            break;
        }
        case 2:
        {
            ax+=-y;
            break;
        }
        case 3:
        {
            ax+=y;
            break;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int w;
        cin>>w;
        int posx=0;
        int posy=0;
        for(int i=0;i<w;i++)
        {
            int x;
            int y;
            cin>>x>>y;
            changePos(posx,posy,x,y);
        }
        if(posx==0 && posy==0)
        cout<<"studnia"<<endl;
        else
        {
            if(posy!=0)
            {
                if(posy>0)
                cout<<0<<" "<<posy<<endl;
                else
                cout<<1<<" "<<-posy<<endl;
            }
            if(posx!=0)
            {
                if(posx>0)
                cout<<3<<" "<<posx<<endl;
                else
                cout<<2<<" "<<-posx<<endl;
            }
        }
    }
    return 0;
}
