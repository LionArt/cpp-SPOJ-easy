/* Andrulewicz Artur
DOUGHNUT - Harry and big doughnuts
2018-05-14
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int c,k,w;
        cin>>c>>k>>w;
        if((c*w)>k)
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
    }
    return 0;
}
