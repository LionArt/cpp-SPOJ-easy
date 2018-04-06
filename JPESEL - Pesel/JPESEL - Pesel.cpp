/* Andrulewicz Artur
JPESEL - Pesel
2017-10-21
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double pesel,n;
    int t,suma=0,x;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        suma=0;
        cin>>pesel;
        for(int j=10;j>=0;j--)
        {
            n=pow(10,j);
            x=pesel/n;
            pesel=pesel-(x*n);
            switch(j)
            {
                case 10:
                case 6:
                case 2:
                case 0:
                {
                    suma=suma+x;
                    break;
                }
                case 9:
                case 5:
                case 1:
                {
                    suma=suma+(x*3);
                    break;
                }
                case 8:
                case 4:
                {
                    suma=suma+(x*7);
                    break;
                }
                case 7:
                case 3:
                {
                    suma=suma+(x*9);
                    break;
                }
            }
        }
        if(suma%10==0)
        cout<<"D"<<endl;
        else
        cout<<"N"<<endl;
    }
    return 0;
}
