#include<stdio.h>
struct book_details
{
	int bcode;
	char bname[20];
	float rate;
	int qoh;
};
typedef struct book_details book;
int main()
{
	book b[5];
	int i,tot=0;
	printf("\nenter 5 book details");
	for(i=0;i<5;i++)
	{
		printf("\nenter bcode,bname,rate,qoh:");
		
		scanf("%d %s %f %d",b[i].bcode,b[i].bname,&b[i].rate,&b[i].qoh);
		fflush(stdin);
		tot=tot+b[i].qoh;
	}
	printf("book details:");
	for(i=0;i<5;i++)
	printf("%d %s %f %d",b[i].bcode,b[i].bname,b[i].rate,b[i].qoh);
	printf("total quantity is:%d",tot);
	return 0;
}
