/* Andrulewicz Artur
KC022 - Statystyka pozycyjna
2018-07-12
*/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string line;
    while(getline(cin,line))
    {
        int p=0;
        for(int i=0;i<line.length();i++)
        {
            if(line[i]==' ')
            {
                p=i;
                break;
            }
        }
        int n=atoi((line.substr(0,p)).c_str());
        line.erase(0,p+1);
        vector<int> vec;
        string temp;
        for(int i=0;i<line.length();i++)
        {
            if(line[i]!=' ')
            temp+=line[i];
            if(line[i]==' ' || i==(line.length()-1))
            {
                int x=atoi(temp.c_str());
                temp="";
                if(vec.end()==find(vec.begin(),vec.end(),x))
                {
                    if(vec.size()==0)
                    vec.push_back(x);
                    else
                    {
                        for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
                        {
                            if(x>*it)
                            {
                                vec.insert(it,x);
                                break;
                            }
                            if(*it==vec[vec.size()-1])
                            {
                                vec.push_back(x);
                                break;
                            }
                        }
                    }
                }
            }
        }
        if(vec.size()>=n && n>0)
        cout<<vec[n-1]<<endl;
        else
        cout<<"-"<<endl;
    }
    return 0;
}
