//#include<stdio.h>
//int main()
//{
//	int a[2][3],i,j;
//	printf("enter elements:");
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("array is:");
//	for(i=0;i<2;i++)
//	{
//		printf("\n");
//		for(j=0;j<3;j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//	
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[2][3],b[2][3],c[2][3],i,j;
//	printf("enter elements:");
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("\nmatrix is:");
//	for(i=0;i<2;i++)
//	{
//		printf("\n");
//		for(j=0;j<3;j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//		
//	}
//	printf("\nenter elements:");
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&b[i][j]);
//		}
//	}
//	printf("\nmatrix is:");
//	for(i=0;i<2;i++)
//	{	printf("\n");
//		for(j=0;j<3;j++)
//		{
//			printf("%d ",b[i][j]);
//		}
//		
//	}
//	printf("\naddition matrix is:");
//	for(i=0;i<2;i++)
//	{	printf("\n");
//		for(j=0;j<3;j++)
//		{
//			c[i][j]=a[i][j]+b[i][j];
//			printf("%d ",c[i][j]);
//		}
//		
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[2][3],i,j,sum1=0,sum2=0;
//	printf("enter elements:");
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("\nmatrix is:");
//	for(i=0;i<2;i++)
//	{
//		printf("\n");
//		for(j=0;j<3;j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//	}
//	printf("\nsum of diagnols are:");
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			if(i==j)
//			sum1=sum1+a[i][j];
//			else if(i+j==2)
//			sum2=sum2+a[i][j];
//			
//		
//		}
//	}
//	printf("\n%d",sum1);
//	printf("\n%d",sum2);
//	return 0;
//	
//}

//#include<stdio.h>
//int main()
//{
//	int i;
//	i=1,2,3;
//	printf("%d",i);
//	return 0;
//	
//}
//    #include <stdio.h>
//    int main()
//    {
//        int y = 1, x = 0;
//        int l = (y++, x++) ? y : x;
//        printf("%d\n", l);
//        return 0;
//    }
#include<stdio.h>
int main()
{
	char a[5][20];
	int i;
	printf("enter 5 cities:");
	for(i=0;i<5;i++)
	{
		scanf("%s",&a);
	}
	printf("cities are:");
	for(i=0;i<5;i++)
	{
		printf("%s ",a[i]);
	}
	return 0;
	
}
































































