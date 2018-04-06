/* Andrulewicz Artur
PTCLTZ - Problem Collatza
2017-10-22
*/

#include <iostream>

using namespace std;

int main()
{
    int t,s,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        n=0;
        while(s!=1)
        {
            if(s%2==0)
            {
                s=s/2;
            }
            else
            {
                s=((3*s)+1);
            }
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}
