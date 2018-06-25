/* Andrulewicz Artur
PP0504D - Reprezentacja liczb typu float
2018-06-25
*/

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <iomanip>

using namespace std;

template <typename T>
string toString(const T& obj)
{   stringstream ss;
    ss.precision(10);
    ss<<obj;
    return ss.str();}

string toHex(string liczba)
{   string l="";
    int tab[8];
    int current=0;
    for(int j=0;j<8;j++)
    {   int x=0;
        for(int i=0;i<4;i++)
        {
            if(liczba[current]=='1')
            {
                x+=pow(2,3-i);
            }
            current++;
        }
        tab[j]=x;}
    for(int i=0;i<8;i++)
    {if(tab[i]<10)
        l+=toString(tab[i]);
        else
        {switch (tab[i])
        {case 10:
        {l+='a';
        break;}
        case 11:{
        l+='b';
        break;}
        case 12:
        {l+='c';
        break;}
        case 13:
        {l+='d';
        break;}
        case 14:{
        l+='e';
        break;}
        case 15:
        {l+='f';
        break;}}}}
    string temp="";
    int x=0;
    for(int i=0;i<8;i++)
    {if(x==2)
    {temp+=' ';
    x=0;}
    temp+=l[i];
    x++;}
    x=0;
    for(int i=0;i<4;i++)
    {if(temp[x]=='0')
    {temp.erase(x,1);
    x+=2;}
    else
    x+=3;}
    return temp;}


string toBinary(string w)
{   bool isPowerOf2=true;
    int w_tempInt=atoi(w.c_str());
    string w_cpy=w;
    w="";
    string temp_w="";
    while(w_tempInt>0)
    {if(w_tempInt%2==0)
    {temp_w+='0';}
    else{
    temp_w+='1';
    isPowerOf2=false;}
    w_tempInt=w_tempInt/2;}
    if(w_cpy=="0")
    temp_w+='0';
    else
    if(isPowerOf2)
    temp_w=1;
    for(int i=temp_w.length()-1;i>=0;i--)
    w+=temp_w[i];
    return w;
}

int main()
{   int t;
    cin>>t;
    for(int s=0;s<t;s++)
    {   float f_liczba;
        string liczba;
        cin>>f_liczba;
        liczba=toString(f_liczba);
        string znak,w,d;
        if(liczba[0]=='-')
        {znak="1";
        liczba.erase(0,1);}
        else
        znak="0";
        for(int i=0;i<liczba.length();i++)
        {if(liczba[i]!='.')
        {w+=liczba[i];}
        else
        break;}
        int x=w.length()+1;
        for(x;x<liczba.length();x++)
        d+=liczba[x];
        bool isPowerOf2=true;
        int w_tempInt=atoi(w.c_str());
        int d_tempInt=atoi(d.c_str());
        float f_temp=float(d_tempInt/(pow(10,d.length())));
        w=toBinary(w);
        d="";
        for(int i=0;i<128;i++)
        {   f_temp*=2;
            if(f_temp>=1)
            {d+='1';
            f_temp-=1;}
            else
            d+='0';}
        int bias=127;
        if(w_tempInt>0)
        bias+=w.length()-1;
        else
        {if(d_tempInt>0.f)
        {int x=1;
        for(int i=0;i<d.length();i++)
        {if(d[i]=='0')
        x++;
        else
        break;}
        bias-=x;}
        else
        bias=0;}
        string temp=toBinary(toString(bias));
        string cecha="";
        for(int i=0;i<8;i++)
        cecha+='0';
        x=0;
        for(int i=8-temp.length();i<8;i++)
        {cecha[i]=temp[x];
        x++;}
        string mantysa="";
        for(int i=0;i<23;i++)
        mantysa+='0';
        if(w_tempInt>0)
        {   x=0;
            for(int i=1;i<w.length();i++)
            {mantysa[x]=w[i];
            x++;}
            int s=0;
            if(x<23)
            while(x<23)
            {mantysa[x]=d[s];
            s++;
            x++;}}
        else
        {if(d_tempInt>0.f)
            {x=(127-bias);
            for(int i=0;i<23;i++)
            {mantysa[i]=d[x+i];}}}
         cout<<toHex(znak+cecha+mantysa)<<endl;}
    return 0;}
