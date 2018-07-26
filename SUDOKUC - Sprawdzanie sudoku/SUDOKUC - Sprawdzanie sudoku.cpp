/* Andrulewicz Artur
SUDOKUC - Sprawdzanie sudoku
2018-07-26
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int x=0;x<t;x++)
    {
        int arr[9][9];
        bool sudoku=true;
        for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]<=0 || arr[i][j]>9)
            sudoku=false;
        }
        string c;
        cin.ignore();
        getline(cin,c);
        if(sudoku)
        {
            for(int i=0;i<9;i++)
            {
                bool arr2[9]={false};
                for(int j=0;j<9;j++)
                {
                    arr2[(arr[i][j])-1]=true;
                }
                for(int j=0;j<9;j++)
                {
                    if(arr2[j]==false)
                    {
                        sudoku=false;
                        break;
                    }
                }
                if(!sudoku)
                break;
            }
        }
        if(sudoku)
        {
            for(int j=0;j<9;j++)
            {
                bool arr2[9]={false};
                for(int i=0;i<9;i++)
                {
                    arr2[(arr[i][j])-1]=true;
                }
                for(int i=0;i<9;i++)
                {
                    if(arr2[i]==false)
                    {
                        sudoku=false;
                        break;
                    }
                }
                if(!sudoku)
                break;
            }
        }
        if(sudoku)
        {
            int j=0;
            int k=0;
            int turn=0;
            for(int i=0;i<9;i++)
            {
                int temp=j;
                int temp2=k;
                bool arr2[9]={false};
                for(j;j<temp+3;j++)
                {
                    for(k;k<temp2+3;k++)
                    {
                        arr2[(arr[j][k])-1]=true;
                    }
                    k-=3;
                }
                for(int l=0;l<9;l++)
                {
                    if(arr2[l]==false)
                    {
                        sudoku=false;
                        break;
                    }
                }
                if(!sudoku)
                break;
                else
                {
                    j=j%9;
                    if(j==0)
                    turn++;
                    k=turn*3;
                }
            }
        }
        if(sudoku)
        cout<<"TAK"<<endl;
        else
        cout<<"NIE"<<endl;
    }
}
