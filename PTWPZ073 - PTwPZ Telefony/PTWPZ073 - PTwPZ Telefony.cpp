/* Andrulewicz Artur
PTWPZ073 - PTwPZ Telefony
2018-06-13
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string str;
        cin>>str;
        for (int j=0;j<str.length();j++)
        {
            if(str[j]>=65 && str[j]<=67)
            cout<<2;
            else
            if(str[j]>=68 && str[j]<=70)
            cout<<3;
            else
            if(str[j]>=71 && str[j]<=73)
            cout<<4;
            else
            if(str[j]>=74 && str[j]<=76)
            cout<<5;
            else
            if(str[j]>=77 && str[j]<=79)
            cout<<6;
            else
            if(str[j]>=80 && str[j]<=83)
            cout<<7;
            else
            if(str[j]>=84 && str[j]<=86)
            cout<<8;
            else
            if(str[j]>=87 && str[j]<=90)
            cout<<9;
        }
        cout<<endl;
    }
    return 0;
}
