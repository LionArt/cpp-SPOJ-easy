/* Andrulewicz Artur
WZP09_2F - XV
2018-07-03
*/

#include <iostream>

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
            if(num[num.length()-1]=='0' || num[num.length()-1]=='5') // Jesli koncowa liczba jest rozna od 0 lub 5, liczba nie jest podzielna przez 15
            {
                for(int i=0;i<num.length();i++)
                {
                    mod+=((num[i]-48)*10)%15;
                    mod%=15;
                }
            }
            else
            mod=1;
            if(mod==0)
            cout<<"TAK"<<endl;
            else
            cout<<"NIE"<<endl;
        }
    }
    return 0;
}
