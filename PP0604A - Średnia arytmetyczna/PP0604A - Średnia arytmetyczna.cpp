/* Andrulewicz Artur
PP0604A - Œrednia arytmetyczna
2018-05-31
*/

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int count;
        cin>>count;
        int tab[count];
        double srednia=0;
        for(int j=0;j<count;j++)
        {
            int liczba;
            cin>>liczba;
            tab[j]=liczba;
            srednia+=liczba;
        }
        srednia=srednia/count;
        int liczba=tab[0];
        double roznica=abs(srednia-tab[0]);
        for(int j=1;j<count;j++)
        {
            if(abs(srednia-tab[j])<roznica)
            {
                roznica=abs(srednia-tab[j]);
                liczba=tab[j];
            }
        }
        cout<<liczba<<endl;
    }
    return 0;
}
