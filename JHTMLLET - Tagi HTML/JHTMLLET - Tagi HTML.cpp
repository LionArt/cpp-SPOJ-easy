/* Andrulewicz Artur
JHTMLLET - Tagi HTML
2018-06-01
*/

#include <iostream>

using namespace std;

int main()
{
    string str;
    bool enlarge=false;
    while(getline(cin,str))
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='<')
            enlarge=true;
            else
            if(str[i]=='>')
            enlarge=false;
            else
            if(enlarge)
            {
                if(str[i]>=97 && str[i]<=122)
                {
                    str[i]-=32;
                }
            }
        }
        cout<<str<<endl;
    }
    return 0;
}
