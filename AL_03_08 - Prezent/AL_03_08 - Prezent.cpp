/* Andrulewicz Artur
AL_03_08 - Prezent
2018-07-27
*/

#include <cstdio>

using namespace std;

int main()
{
    long long x=-1,_max=0,prezent=0;
    while(x!=0)
    {
        if(x>prezent && x!=_max)
        prezent=x;
        scanf("%lld",&x);
        if(x>_max)
        {
            prezent=_max;
            _max=x;
        }
    }
    if(prezent==0)
    prezent=_max;
    printf("%lld",prezent);
    return 0;
}
