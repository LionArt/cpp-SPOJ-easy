/* Andrulewicz Artur
JLITOSL - Liczba na s³owo
2018-06-28
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string jednostki[9]={"jeden","dwa","trzy","cztery","piec","szesc","siedem","osiem","dziewiec"};
    string nastki[9]={"jedenascie","dwanascie","trzynascie","czternascie","pietnascie","szesnascie","siedemnascie","osiemnascie","dziewietnascie"};
    string dziesiatki [9]={"dziesiec","dwadziescia","trzydziesci","czterdziesci","piecdziesiat","szescdziesiat","siedemdziesiat","osiemdziesiat","dziewiecdziesiat"};
    string setki[9]={"sto","dwiescie","trzysta","czterysta","piecset","szescset","siedemset","osiemset","dziewiecset"};
    string inne[4]={"tys.","mln.","mld.","bln."};
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string liczba;
        cin>>liczba;
        vector<string> vLiczba;
        int y=liczba.size()-1;
        for(int i=0;i<liczba.size();i++)
        {
            int x=liczba[i]-49;
            if(x>=0)
            {
                if(y%3==0)
                {
                    if(i>0 && liczba[i-1]=='1')
                    vLiczba[vLiczba.size()-1]=nastki[x]; //vLiczba.size()-1 odnosi sie do ostatniego indeksu (dziesiatek)
                    else
                    vLiczba.push_back(jednostki[x]);
                }
                else if(y%3==1)
                vLiczba.push_back(dziesiatki[x]);
                else if(y%3==2)
                vLiczba.push_back(setki[x]);
            }
            if(y%3==0 && y>0)
            {
                string test;
                for(int j=2;j>=0;j--)
                test+=liczba[i-j];
                if(test!="000") // sprawdzamy czy nie wystepuje brak danej jednostki (tys,mln,mld,bln)
                vLiczba.push_back(inne[y/4]);
            }
            y--;
        }
        //podzial liczby: jednostki (bln) setki dziesiatki jednostki (mld) setki dziesiatki jednostki (mln) setki dziesiatki jednostki (tys) setki dziesiatki jednostki
        for(vector<string>::iterator it=vLiczba.begin();it<vLiczba.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}
