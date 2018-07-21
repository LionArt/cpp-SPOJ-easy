/* Andrulewicz Artur
PASTAB4 - Histogram z liczb
2018-07-21
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int liczba;
    int arr[21];
    for(int i=0;i<21;i++)
    arr[i]=0;
    while(cin>>liczba)
    {
        arr[liczba+10]++;
    }
    int m=0;
    for(int i=0;i<21;i++)
    {
        if(arr[i]>m)
        m=arr[i];
    }
    for(int i=-10;i<=10;i++)
    {
        int result;
        if(arr[i+10]>0 && m>0)
        {
            double x=double(arr[i+10])/m;
            x*=100;
            result=round((x/100)*30);
        }
        else
        result=0;
        if(abs(i)!=10)
        cout<<" ";
        if(i>=0)
        cout<<" ";
        cout<<i<<":|";
        for(int j=0;j<result;j++)
        cout<<"*";
        for(int j=0;j<30-result;j++)
        cout<<" ";
        cout<<"|"<<endl;
    }
}
