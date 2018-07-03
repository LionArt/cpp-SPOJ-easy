/* Andrulewicz Artur
WZP09_2F - XV
2018-07-03
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string num;
    while(cin>>num)
    {
        if(num=="0")
        break;
        else
        {
            int mod=0;
            string number="";
            for(int i=0;i<num.length();i++)
            {
                number+=num[i];
                int temp=atoi(number.c_str());
                temp%=15;
                if(temp>9)
                {
                    number='1';
                    number+=(temp%10)+48;
                }
                else
                number=(temp%15)+48; // Dodawanie ASCII zastapilo stringstream, ktory znacznie wydluzal czas wykonania programu dla testow
            }
            if(number=="0")
            cout<<"TAK"<<endl;
            else
            cout<<"NIE"<<endl;
        }
    }
    return 0;
}
