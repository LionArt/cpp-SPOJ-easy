/* Andrulewicz Artur
KC009 - Odwracanie wyrazow
2018-05-14
*/

#include <iostream>

using namespace std;

int main()
{
    string wyraz;
    while(cin>>wyraz)
    {
        for(int i=wyraz.length()-1;i>=0;i--)
        {
            cout<<wyraz[i];
        }
        cout<<endl;
    }
}
