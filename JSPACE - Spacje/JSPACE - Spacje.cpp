/* Andrulewicz Artur
JSPACE - Spacje
2018-05-31
*/

#include <iostream>

using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        string newstr="";
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' ')
            {
                if(str[i+1]>=97 && str[i+1]<=122)
                {
                    str[i+1]-=32;
                }
            }
            else
            newstr=newstr+str[i];
        }
        cout<<newstr<<endl;
    }
    return 0;
}
