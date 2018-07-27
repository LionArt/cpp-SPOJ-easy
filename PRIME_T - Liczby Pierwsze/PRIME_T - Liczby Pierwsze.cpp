/* Andrulewicz Artur
PRIME_T - Liczby Pierwsze
2017-10-16
*/

#include <cstdio>

using namespace std;

int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        bool isPrime=true;
        if(n<2)
		isPrime=false;
		else
		{
	    	for(int i=2;i*i<=n;i++)
	    	{
	        	if (n%i==0)
	        	{
	        		isPrime=false;
	        		break;	
	        	}
			}
		}
		if(isPrime)
        printf("TAK\n");
        else
        printf("NIE\n");
    }
}
