/* Andrulewicz Artur
WYMIANA - Zamiana miejsc
2018-06-28
*/

#include<stdio.h>

int main()
{
	int x, y;
	scanf("%d %d",&x,&y);
    x-=y;
    y+=x;
    x=y-x;
	printf("%d %d",x,y);
	return 0;
}
