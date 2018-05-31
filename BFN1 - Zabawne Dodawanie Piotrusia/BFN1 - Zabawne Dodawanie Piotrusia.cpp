/* Andrulewicz Artur
BFN1 - Zabawne Dodawanie Piotrusia
2018-05-31
*/

#include <iostream>
#include <sstream>
#include <stdlib.h>

using namespace std;

template<typename T>
string to_string(const T& obj)
{
    std::stringstream ss;
    ss << obj;
    return ss.str();
}

string getReverseString (string s)
{
    string _s="";
    for(int i=s.length()-1;i>=0;i--)
    {
        _s=_s+s[i];
    }
    return _s;
}
int getReverseNumber (int n)
{
    string _s=getReverseString(to_string(n));
    int x;
    x=atoi(_s.c_str());
    return x;
}

bool isPalindrome(int n)
{
    if(to_string(n)==getReverseString(to_string(n)))
    return true;
    else
    return false;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int liczba;
        cin>>liczba;
        int tries=0;
        while(!isPalindrome(liczba))
        {
            tries++;
            liczba=liczba+getReverseNumber(liczba);
        }
        cout<<liczba<<" "<<tries<<endl;
    }
    return 0;
}
