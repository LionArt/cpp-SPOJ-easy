/* Andrulewicz Artur
PP0504B - StringMerge
2018-05-14
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string a,b;
        cin>>a>>b;
        int x;
        if(a.length()>b.length())
        x=b.length();
        else
        x=a.length();
        for(int j=0;j<x;j++)
        {
            cout<<a[j];
            cout<<b[j];
        }
        cout<<endl;
    }
    return 0;
}
