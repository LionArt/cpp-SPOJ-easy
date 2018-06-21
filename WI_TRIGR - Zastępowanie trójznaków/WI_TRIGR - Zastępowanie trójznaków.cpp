/* Andrulewicz Artur
WI_TRIGR - Zastêpowanie trójznaków
2018-06-21
*/

#include <iostream>

using namespace std;

int main()
{
    string line;
    char znaki[9]={'=','/','\'','(',')','!','<','>','-'};
    char znaki_c[9]={'#','\\','^','[',']','|','{','}','~'};
    while(getline(cin,line))
    {
        for(int i=0;i<9;i++)
        {
            string x="??";
            x+=znaki[i];
            size_t pos=line.find(x);
            while(pos!=line.npos)
            {
                line[pos]=znaki_c[i];
                line.erase(pos+1,2);
                pos=line.find(x);
            }
            x.erase(2,1);
        }
        cout<<line<<endl;
    }
    return 0;
}
