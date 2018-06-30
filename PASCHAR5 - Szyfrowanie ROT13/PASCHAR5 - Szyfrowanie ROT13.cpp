/* Andrulewicz Artur
PASCHAR5 - Szyfrowanie ROT13
2018-06-30
*/

#include <iostream>

using namespace std;

int main()
{
    string line;
    while(getline(cin,line))
    {
        for(int i=0;i<line.length();i++)
        {
            int x=0;
            if(line[i]>=65 && line[i]<=90)
            {
                x=line[i]+13;
                if(x>90)
                line[i]=64+x%90;
                else
                line[i]=x;
            }
            else if(line[i]>=97 && line[i]<=122)
            {
                x=line[i]+13;
                if(x>122)
                line[i]=96+x%122;
                else
                line[i]=x;
            }
            else if(line[i]>=48 && line[i]<=57)
            {
                x=line[i]+5;
                if(x>57)
                line[i]=47+x%57;
                else
                line[i]=x;
            }
        }
        cout<<line<<endl;
    }
    return 0;
}
