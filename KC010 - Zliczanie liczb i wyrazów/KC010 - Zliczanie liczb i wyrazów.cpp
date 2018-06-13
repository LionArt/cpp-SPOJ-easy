/* Andrulewicz Artur
KC010 - Zliczanie liczb i wyrazów
2018-06-13
*/

#include <iostream>

using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        int liczby=0,wyrazy=0;
        bool nowyWyraz=true;
        for(int i=0;i<str.length();i++)
        {
            if(nowyWyraz)
            {
                if(str[i]>=48 && str[i]<=57)
                liczby++;
                else
                wyrazy++;
                nowyWyraz=false;
            }
            if(str[i]==' ')
            nowyWyraz=true;
        }
        cout<<liczby<<" "<<wyrazy<<endl;
    }
    return 0;
}
