/* Andrulewicz Artur
WI_SZYFR - Szyfr Gronsfelda
2018-06-13
*/

#include <iostream>

using namespace std;

string szyfruj(string haslo,string klucz)
{
    string noweHaslo="";
    for(int i=0;i<haslo.length();i++)
    {
        int temp=klucz[i]-'0';
        char litera=haslo[i]+temp;
        if(litera>90)
        {
            litera-=24;
        }
        noweHaslo+=litera;
    }
    return noweHaslo;
}

string deszyfruj(string haslo,string klucz)
{
    string noweHaslo="";
    for(int i=0;i<haslo.length();i++)
    {
        int temp=klucz[i]-'0';
        char litera=haslo[i]-temp;
        if(litera<65)
        {
            litera+=26;
        }
        noweHaslo+=litera;
    }
    return noweHaslo;
}

int main()
{
    string polecenie,klucz,haslo;
    cin>>polecenie>>klucz>>haslo;
    if(klucz.length()<haslo.length())
    {
        int x=0;
        for(int i=klucz.length()-1;i<haslo.length()-1;i++)
        {
            klucz+=klucz[x];
            x++;
            if(x>klucz.length()-1)
            x=0;
        }
    }
    if(polecenie=="SZYFRUJ")
    cout<<szyfruj(haslo,klucz);
    else
    if(polecenie=="DESZYFRUJ")
    cout<<deszyfruj(haslo,klucz);
    return 0;
}
