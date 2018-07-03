/* Andrulewicz Artur
WI_IDEN - Skracanie identyfikatorów
2018-07-03
*/

#include <iostream>

using namespace std;

string skroc(const string &S,int n)
{
    string skrot=S;
    int length=S.length();
    if(length>n)
    {
        for(int i=length-1;i>=0;i--)
        {
            if(length>n)
            {
                if(((skrot[i]>=0 && skrot[i]<=47) || (skrot[i]>=58 && skrot[i]<=64) || (skrot[i]>=91 && skrot[i]<=96) || (skrot[i]>=123)) && (skrot[i]!='$'))
                {
                    skrot.erase(i,1);
                    length--;
                    if(i<length-1)
                    i++;
                }
            }
            else
            break;
        }
        for(int i=length-1;i>=0;i--)
        {
            if(length>n)
            {
                if(((skrot[i]>=0 && skrot[i]<=64) || (skrot[i]>=91 && skrot[i]<=96) || (skrot[i]>=123)) && (skrot[i]!='$'))
                {
                    skrot.erase(i,1);
                    length--;
                    if(i<length-1)
                    i++;
                }
            }
            else
            break;
        }
        bool pierwsza=true;
        for(int i=0;i<length;i++)
        {
            if(length>n)
            {
                if(skrot[i]=='A' || skrot[i]=='a' || skrot[i]=='E' || skrot[i]=='e' || skrot[i]=='I' || skrot[i]=='i' || skrot[i]=='O' || skrot[i]=='o' || skrot[i]=='U' || skrot[i]=='u' || skrot[i]=='Y' || skrot[i]=='y')
                {
                    if(pierwsza)
                    {
                        pierwsza=false;
                    }
                    else
                    {
                        skrot.erase(i,1);
                        length--;
                        if(i>0)
                        i--;
                    }
                }
            }
            else
            break;
        }
        for(int i=length-2;i>=0;i--)
        {
            if(length>n)
            {
                skrot.erase(i,1);
                length--;
                if(i<length-1)
                i++;
            }
            else
            break;
        }
    }
    return skrot;
}

int main()
{
    int t;
    cin>>t;
    string wyraz;
    cin>>wyraz;
    cout<<skroc(wyraz,t)<<endl;
    return 0;
}
