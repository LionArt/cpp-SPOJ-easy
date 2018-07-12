/* Andrulewicz Artur
KC005 - Formularz
2018-07-12
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string line;
    while(getline(cin,line))
    {
        string imie,nazwisko,data;
        int pos=6;
        for(pos;;pos++)
        {
            if(line[pos]==';')
            break;
            else
            imie+=line[pos];
        }
        for(pos+=12;;pos++)
        {
            if(line[pos]==';')
            break;
            else
            nazwisko+=line[pos];
        }
        for(pos+=12;pos<line.length();pos++)
        {
            data+=line[pos];
        }
        int result=3;
        if(imie[0]<65 || imie[0]>90)
        {
            result=0;
        }
        else
        {
            for(int i=1;i<imie.length();i++)
            {
               if(imie[i]<97 || imie[i]>122)
               {
                   result=0;
                   break;
               }
            }
        }
        if(result==3)
        {
            if(nazwisko[0]<65 || nazwisko[0]>90)
            {
                result=1;
            }
            else
            {
                for(int i=1;i<nazwisko.length();i++)
                {
                    if(nazwisko[i]<97 || nazwisko[i]>122)
                    {
                        result=1;
                        break;
                    }
                }
            }
        }
        if(result==3)
        {
            for(int i=0;i<data.length();i++)
            {
                if(i==4 || i==7)
                i++;
                else
                {
                    if(data[i]<48 || data[i]>57)
                    {
                        result=2;
                        break;
                    }
                }
            }
        }
        if(result==3)
        {
            string temp=data.substr(0,4);
            if(atoi(temp.c_str())>2000 || atoi(temp.c_str())<1900)
            {
                result=2;
            }
            else
            {
                temp=data.substr(5,2);
                if(atoi(temp.c_str())>12 || atoi(temp.c_str())<1)
                {
                    result=2;
                }
                else
                {
                    temp=data.substr(8,2);
                    if(atoi(temp.c_str())>31 || atoi(temp.c_str())<1)
                    {
                        result=2;
                    }
                }
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
