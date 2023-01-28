#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,j,k,l;
	char a[20],c[20],d[20];
	printf("\n\t\t RAIL FENCE TCHNIQUE");
	printf("\n\nenter the input string : ");
	gets(a);
	l=strlen(a);
	/*ciphering*/
	for(i=0,j=0;i<1;i++)
	{
		if(i%2==0)
		c[j++]=a[i];
	}
	for(i=0;i<1;i++)
	{
		if(i%2==1)
		c[j++]=a[i];
	}
	c[j]='\0';
	printf("\ncipher text after applying railfence :");
	printf("\n%s",c);
	/*deciphering*/
	if(1%2==0)
	k=1/2;
	else
	k=(1/2)+1;
	for(i=0,j=0;i<k;i++)
	{
		d[j]=c[i];
		j=j+2;
	}
	for(i=k,j=1;i<1;i++)
	{
		d[j]=c[i];
		j=j+2;
	}
	d[l]='\0';
	printf("\ntext after decrypyion : ");
	printf("%s",d);
	getch();
}
