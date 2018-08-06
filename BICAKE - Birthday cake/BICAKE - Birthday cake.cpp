/* Andrulewicz Artur
BICAKE - Birthday cake
2018-08-06
*/

#include <iostream>

using namespace std;

long long getCuts(const long long *x)
{
    long long pieces=1;
    int temp=1;
    while(pieces<*x)
    {
        pieces+=temp;
        temp++;
    }
    return temp-1;
}

int main()
{
    long long x;
    while(cin>>x)
    {
        cout<<getCuts(&x)<<endl;
    }
}
