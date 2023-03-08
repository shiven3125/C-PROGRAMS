#include<stdio.h>
int main()
{
	char a[5][20];
	int i;
	printf("enter 5 cities:");
	for(i=0;i<5;i++)
	{
		gets(a[i]);
	}
	printf("cities are:");
	for(i=0;i<5;i++)
	{
		printf("%s ",a[i]);
	}
	return 0;
	
}
