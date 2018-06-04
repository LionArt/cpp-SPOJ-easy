/* Andrulewicz Artur
PROGC05 - Wycinanie literek
2018-06-04
*/

#include <iostream>

using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        string newString="";
        char x=str[0];
        str.erase(0,2);
        for(int i=0;i<str.length();i++)
        {
            if(str[i]!=x)
            newString+=str[i];
        }
        cout<<newString<<endl;
    }
    return 0;
}
