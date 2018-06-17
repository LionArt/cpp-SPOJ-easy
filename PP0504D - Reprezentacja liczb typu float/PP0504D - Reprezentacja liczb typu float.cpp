/* Andrulewicz Artur
PP0504D - Reprezentacja liczb typu float
2018-06-17
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <sstream>

using namespace std;

string toBinary(string liczba,bool isDecimal);
string toIEE754(string l);
string toHex(string l);

template <typename T>
string toString(const T& obj)
{
    stringstream ss;
    ss<<obj;
    return ss.str();
}

class LiczbaZmiennoprzecinkowa
{
    public:
    string znak;
    string cecha;
    string mantysa;
    bool wypisz()
    {
        if(cout<<toHex(znak+cecha+mantysa)<<endl)
        return 1;
        else
        return 0;
    }

    string get()
    {
        return znak+cecha+mantysa;
    }

    LiczbaZmiennoprzecinkowa(string l)
    {
        string liczba=toIEE754(l);
        znak=liczba[0];
        cecha=liczba.substr(1,8);
        mantysa=liczba.substr(9,23);
    }
};

string toHex(string liczba)
{
    string l="";
    int tab[8];
    int current=0;
    for(int j=0;j<8;j++)
    {
        int x=0;
        for(int i=0;i<4;i++)
        {
            if(liczba[current]=='1')
            {
                x+=pow(2,3-i);
            }
            current++;
        }
        tab[j]=x;
    }
    for(int i=0;i<8;i++)
    {
        if(tab[i]<10)
        {
            l+=toString(tab[i]);
        }
        else
        {
            switch (tab[i])
            {
                case 10:
                {
                    l+='a';
                    break;
                }
                case 11:
                {
                    l+='b';
                    break;
                }
                case 12:
                {
                    l+='c';
                    break;
                }
                case 13:
                {
                    l+='d';
                    break;
                }
                case 14:
                {
                    l+='e';
                    break;
                }
                case 15:
                {
                    l+='f';
                    break;
                }
            }
        }
    }
    string temp="";
    int x=0;
    for(int i=0;i<8;i++)
    {
        if(x==2)
        {
            temp+=' ';
            x=0;
        }
        temp+=l[i];
        x++;
    }
    x=0;
    for(int i=0;i<4;i++)
    {
        if(temp[x]=='0'&& temp[x+1]=='0')
        {
            temp.erase(x,1);
            x+=2;
        }
        else
        x+=3;
    }
    return temp;
}

string toIEE754(string l)
{
   string znak,w,d;
    int i=0;
    if(l[0]=='-')
    {
        i++;
        znak="1";
    }
    else
    znak="0";
    for(i;i<l.length();i++)
    {
        if(l[i]!='.')
        {
            w+=l[i];
        }
        else
        break;
    }
    i=w.length()+1;
    if(znak=="1")
    i++;
    for(i;i<l.length();i++)
    {
        d+=l[i];
    }
    string binWhole=toBinary(w,false);
    string binDecimal=toBinary(d,true);
    int bias=127;
    if(atoi(w.c_str())>0)
    {
        bias+=binWhole.length()-1;
    }
    else
    {
        if(atof(d.c_str())>0.f)
        {
            int x=1;
            for(int i=0;i<binDecimal.length();i++)
            {
                if(binDecimal[i]=='0')
                x++;
                else
                break;
            }
            bias-=x;
        }
        else
        bias=0;
    }
    string temp=toBinary(toString(bias),false);
    string _c="";
    for(int i=0;i<8;i++)
    _c+='0';
    int x=0;
    for(int i=8-temp.length();i<8;i++)
    {
        _c[i]=temp[x];
        x++;
    }
    string _m="";
    for(int i=0;i<23;i++)
    _m+='0';
    if(atoi(w.c_str())>0)
    {
        x=0;
        for(int i=1;i<binWhole.length();i++)
        {
            _m[x]=binWhole[i];
            x++;
        }
        int s=0;
        if(x<23)
        while(x<23)
        {
            _m[x]=binDecimal[s];
            s++;
            x++;
        }
    }
    else
    {
        if(atof(d.c_str())>0.f)
        {
            x=(127-bias);
            for(int i=0;i<23;i++)
            {
                _m[i]=binDecimal[x+i];
            }
        }
    }
    return znak+_c+_m;
}


string toBinary(string liczba,bool isDecimal)
{
    string l;
    string temp_l="";
    bool isPowerOf2=true;
    int temp=atoi(liczba.c_str());
    if(isDecimal)
    {
        float f_temp=float(temp/(pow(10,liczba.length())));
        for(int i=0;i<128;i++)
        {
            f_temp*=2;
            if(f_temp>=1)
            {
                temp_l+='1';
                f_temp-=1;
            }
            else
            temp_l+='0';
        }
    }
    else
    {
        while(temp>0)
        {
            if(temp%2==0)
            {
                l+='0';
            }
            else
            {
                l+='1';
                isPowerOf2=false;
            }
            temp=temp/2;
        }
        if(liczba=="0")
        temp_l+='0';
        else
        if(isPowerOf2)
        l+=1;
        for(int i=l.length()-1;i>=0;i--)
        {
            temp_l+=l[i];
        }


    }
    return temp_l;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string liczba;
        cin>>liczba;
        LiczbaZmiennoprzecinkowa x(liczba);
        x.wypisz();
    }
    return 0;
}
