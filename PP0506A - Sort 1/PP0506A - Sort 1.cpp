/* Andrulewicz Artur
PP0506A - Sort 1
2018-06-04
*/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Punkt
{
private:
    string nazwa;
    int x;
    int y;
public:
    double odleglosc;
    Punkt(string _nazwa,int _x,int _y)
    {
        x=_x;
        y=_y;
        nazwa=_nazwa;
        odleglosc=sqrt(pow(x,2)+pow(y,2));
    }
    void wypisz()
    {
        cout<<nazwa<<" "<<x<<" "<<y<<endl;
    }
};

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int t2;
        cin>>t2;
        vector<Punkt> vPunkt;
        for(int j=0;j<t2;j++)
        {
            string nazwa;
            int a;
            int b;
            cin>>nazwa>>a>>b;
            Punkt punkt(nazwa,a,b);
            int n=-1;
            for(int k=0;k<vPunkt.size();k++)
            {
                if(punkt.odleglosc<vPunkt[k].odleglosc)
                {
                    n=k;
                    break;
                }
            }
            if(n==-1)
            {
                vPunkt.push_back(punkt);
            }
            else
            {
                vector<Punkt> temp;
                temp=vPunkt;
                vPunkt.clear();
                for(int k=0;k<temp.size();k++)
                {
                    if(k==n)
                    {
                        vPunkt.push_back(punkt);
                        k--;
                        n=-1;
                    }
                    else
                    vPunkt.push_back(temp[k]);
                }
            }
        }
        for(int k=0;k<vPunkt.size();k++)
            {
                vPunkt[k].wypisz();
            }
            cout<<endl;

    }
    return 0;
}
