/* Andrulewicz Artur
Nazwa zadania
2018-06-30
*/

#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

class Time
{
    private:
    int h;
    int m;
    public:
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
    void addMinutes(int addedMinutes)
    {
        int hours;
        int minutes;
        hours=addedMinutes/60;
        minutes=addedMinutes-(hours*60);
        m+=minutes;
        if(m>=60)
        {
            m-=60;
            hours++;
        }
        h=(hours+h)%24;
    }
    string getTime()
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

int main()
{
    string time;
    cin>>time;
    int przerwa;
    cout<<time<<",";
    Time t(time);
    t.addMinutes(45);
    cout<<t.getTime();
    while(cin>>przerwa)
    {
        cout<<",";
        t.addMinutes(przerwa);
        cout<<t.getTime()<<",";
        t.addMinutes(45);
        cout<<t.getTime();
    }
    return 0;
}
