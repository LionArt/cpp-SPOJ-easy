/* Andrulewicz Artur
KC015 - Porównywanie du¿ych liczb
2018-06-28
*/

#include <iostream>

using namespace std;

int main()
{
    string temp;
    while(getline(cin,temp))
    {
        int rownosc=0;// 0 rowny, 1 wiekszy, -1 mniejszy
        string n[3];
        int x=0;
        for(int i=0;i<temp.length();i++)
        {
            if(temp[i]==' ')
            x++;
            else
            n[x]+=temp[i];
        }
        if(n[0]!=n[2])
        {
            if(n[0].length()>n[2].length())
            rownosc=1;
            else
            if(n[0].length()<n[2].length())
            rownosc=-1;
            if(rownosc==0)
            {
                for(int i=0;i<n[0].length();i++)
                {
                    if(n[0][i]<n[2][i])
                    {
                        rownosc=-1;
                        break;
                    }
                    else
                    if(n[0][i]>n[2][i])
                    {
                        rownosc=1;
                        break;
                    }
                }
            }
        }
        if(n[1]=="==")
        {
            if(rownosc==0)
            cout<<1<<endl;
            else
            cout<<0<<endl;
        }
        else if(n[1]=="<=")
        {
            if(rownosc==0 || rownosc==-1)
            cout<<1<<endl;
            else
            cout<<0<<endl;
        }
        else if(n[1]==">=")
        {
            if(rownosc==0 || rownosc==1)
            cout<<1<<endl;
            else
            cout<<0<<endl;
        }
        else if(n[1]=="!=")
        {
            if(rownosc==0)
            cout<<0<<endl;
            else
            cout<<1<<endl;
        }
    }
    return 0;
}
