/* Andrulewicz Artur
CHAOS - Godzina chaosu
2018-07-26
*/

#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

template<typename T>
string toStr(const T& obj)
{
    std::stringstream ss;
    ss<<obj;
    return ss.str();
}

class Time
{
    public:
    int h;
    int m;
    Time(string time)
    {
        string hour,minute;
        bool isHour=true;
        for(int i=0;i<time.length();i++)
        {
            if(time[i]==':')
            isHour=false;
            else
            {
                if(isHour)
                hour+=time[i];
                else
                minute+=time[i];
            }
        }
        h=atoi(hour.c_str());
        m=atoi(minute.c_str());
    }

    void setTime(int hour, int minute)
    {
        this->h=hour;
        this->m=minute;
    }

    string getTime() const
    {
        stringstream ss;
        ss<<h;
        string hours=ss.str();
        ss.str("");
        ss<<m;
        string minutes=ss.str();
        string time="00:00";
        for(int i=hours.length()-1;i>=0;i--)
        time[1-hours.length()+i+1]=hours[i];
        for(int i=0;i<minutes.length();i++)
        time[4-minutes.length()+i+1]=minutes[i];
        return time;
    }
};

void getPalindrome(Time *t)
{
    int h=t->h;
    int m=t->m;
    if(h==23 && m>=32)
    {
        h=0;
        m=0;
    }
    else if(h==0 && m<=54)
    {
        m+=1;
        if(m>9)
        {
            if((((m/10)*10)+m/10)<m)
            m=((((m+10)/10)*10)+(((m+10)/10)*10)/10);
            else
            m=((m/10)*10)+m/10;
        }
    }
    else if(h>=0 && h<10)
    {
        if(h==9 && m>=59)
        {
            h++;
            m=1;
        }
        else
        {
            if(m>=h)
            {
                if(m%10<h)
                {
                    m=(m/10)*10+h;
                }
                else
                {
                    if((m/10)==5)
                    {
                        h++;
                        m=h;
                    }
                    else
                    {
                        m=((m/10)*10)+10+h;
                    }
                }
            }
            else
            {
               m=h;
            }
        }
    }
    else
    {
        string temp=toStr(h);
        string temp2;
        for(int i=1;i>=0;i--)
        {
            temp2+=temp[i];
        }
        int temp_i=atoi(temp2.c_str());
        if(m<temp_i)
        {
            m=temp_i;
        }
        else
        {
            h++;
            string temp=toStr(h);
            temp2="";
            for(int i=1;i>=0;i--)
            {
                temp2+=temp[i];
            }
            int temp_i=atoi(temp2.c_str());
            m=temp_i;
        }
        if(h>15 && h<20)
        {
            h=20;
            m=2;
        }
    }
    t->setTime(h,m);
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string time;
        cin>>time;
        Time t(time);
        getPalindrome(&t);
        cout<<t.getTime()<<endl;
    }
    return 0;
}
