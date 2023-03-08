//#include<stdio.h>
//int main()
//{
//	int a[2][3],i,j,sum=0,sum1=0;
//	printf("enter elements:");
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%d",&a[i][j]);
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
//	printf("\nsum of diagnol elements:");
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			if(i==j)
//			sum=sum+a[i][j];
//			else if(i+j<3)
//			sum1=sum1+a[i][j];
//		}
//	}
//	printf("%d",sum);
//	printf("%d",sum1);
//	return 0;
//	
//}

//#include<stdio.h>
//int main()
//{
//	int x=1,y=2;
//	printf("\n%d %d",x,y);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    if(10.0)
//    {
//    	printf("Texas\n");
//    }
//    printf("ZING");
//
//    return 0;
//}
//int main()
//{
//    if( 4 < 5 )
//        printf("Hurray..\n");
//        printf("Yes");
//    else
//        printf("England");
//
//    return 0;
//}
//    #include <stdio.h>
//    int main()
//    {
//        int n = 1;
//   		printf("%d, %dn", 3*n, n++);
//   		printf("%d",sizeof(int));
//   		return 0;
//    }
//#include<stdio.h>
//int si(int,int,int);
//int main()
//{
//	int p,r,t,x;
//	scanf("%d %d %d",&p,&r,&t);
//	x=si(p,r,t);
//	printf("the si is:%d",x);
//	return 0;
//	
//}
//int si(int x,int y,int  z)
//{
//	int d;
//	d=(x*y*z)/100;
//	return d;
//}
//#include<stdio.h>
//int main()
//{
//    if( 4 < 5 )
//        printf("Hurray..\n");
//        printf("Yes");
//    else
//        printf("England")
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//    {
//        int k = 8;
//        int x = 1 == 1 && k++;
//        printf("%d %d\n", x, k);
//    }
//{
//	
//	int i=1,2,3;
//	printf("%d",i);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int x = 0;
//    if (x == 0)
//        printf("Its zero\n");
//    else
//        printf("Its not zero\n");
//}
//#include <stdio.h>
//int main()
//{
//    int a=1;
//    
//    switch(a)
//    {
//        case 0: printf("0 "); break;
//        case 1: printf("1 ");
//        case 2: printf("2 "); break;
//        default: printf("Go ");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int y = 5, x = 4;
//    int l = (y++, x++) ? y : x;
//    printf("%d\n", l);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{ 
//   int x = 3;
//   
//   x += 2;
//   x =+ 2;
//   printf("%d", x); 
//   return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int z, x = 5, y = 10;
//	z = (x++) - (- -y);
//	printf("%d",z);
//	int p = 10, q = 20, r = 30;
//	if(r > q >p)
//		printf("True");
////	else
////		printf("False");
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a,b,c,d;
//	scanf("%d %d %d %d",&a,&b,&c,&d);
//	if(a>b)
//	{
//		if(a>c && a>d)
//		printf("a is greater");
//	}
//	else if(b>a)
//	{
//		if(b>c && b>d)
//		printf("b is greaterst");
//	}
//	else if(c>a)
//	{
//		if(c>b && c>d)
//		printf("c is greatest");
//		
//	}
//	else if(d>a)
//	{
//		if(d>b && d>c)
//		printf("d is grestest");	
//	} 
//	
//	return 0;
//}


 

//#include<stdio.h> 
// main() 
// { 
//        int a,b,c,d; 
//         
//        printf("Enter the Four Numbers :"); 
//        scanf("%d %d %d %d",&a,&b,&c,&d); 
//        if(a>b) 
//         { 
//              if(a>c) 
//               { 
//                  if(a>d) 
//                   {   
//                      printf("%d is big",a); 
//                    } 
//                  else 
//                   { 
//                      printf("%d is big",d); 
//                    } 
//                } 
//           } 
//        else if(b>c) 
//        { 
//            if(b>d) 
//            { 
//                printf("%d is big",b); 
//            } 
//            	else 
//                { 
//                    printf("%d is big",d); 
//                } 
//        } 
//        else if(c>d) 
//        { 
//            printf("%d is big",c); 
//        } 
//        else 
//        { 
//            printf("%d is big",d); 
//        } 
//    return 0;
// } 
//#include <stdio.h>
//#include<string.h>
//int main()
//		{
//    		char str[30];
//
//  	  		scanf("%s", str);
//    		printf("%s", str);
//
//    		return 0;
//		}
//
//	#include <stdio.h>
//	int main()
//	{
//   		 int a=0;
//    
//   	 	a=5||2|1;
//    		printf("%d",a);
//    
//    		return 0;
//	}
#include<stdio.h>
#include<string.h>
int main()
{
	char a[5][20],temp;
	int i,j;
	printf("enter 5 cities:");
	for(i=0;i<5;i++)
	{
		gets(a[i]);
	}
	for(i=1;i<5;i++)
	{
		for(j=0;j=5-i;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("%s ",a[i]);
	}
	return 0;
	
	
}



















