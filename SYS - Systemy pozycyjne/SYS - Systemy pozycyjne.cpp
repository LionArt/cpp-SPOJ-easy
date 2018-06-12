/* Andrulewicz Artur
SYS - Systemy pozycyjne
2018-06-12
*/

#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

template<typename T>
string to_string(const T& obj)
{
    stringstream ss;
    ss<<obj;
    return ss.str();
}

string toEleven(int liczba)
{
    string _liczba="";
    int temp;
    int reszta=liczba;
    for(int i=5;i>=0;i--)
    {
        temp=reszta/pow(11,i);
        if(temp>0 || _liczba!="")
        {
            if(temp<10)
            {
                _liczba+=to_string(temp);
            }
            else
            {
                _liczba+='A';
            }
        }
        reszta=reszta-(temp*pow(11,i));
    }
    return _liczba;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int liczba;
        cin>>liczba;
        cout<<uppercase<<hex<<liczba<<" ";
        cout<<toEleven(liczba)<<endl;
    }
    return 0;
}
