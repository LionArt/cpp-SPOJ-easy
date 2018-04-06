/* Andrulewicz Artur
POL - Po³owa
2017-10-18
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for(int i=0;i<t;i++)
    {
        string s;
        getline(cin,s);
        for(int i=0;i<(s.length()/2);i++)
        cout<<s[i];
        cout<<endl;
    }
    return 0;
}
