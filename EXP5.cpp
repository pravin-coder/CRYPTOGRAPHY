#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char plain[25],cipher[25];
	int k,l,i=0,j=0;
	printf("\nENTER THE PLAIN TEXT: ");
	scanf("%s",&plain);
	printf("\nENTER THE KEY VALUE: ");
	scanf("%d",&k);
	l=strlen(plain);
	
	
	printf("\n\tFOR ENCRYPTION");
	char rail[k][l];
	for(i=0;i<k;i++){
		for(j=0;j<l;j++){
			rail[i][j]='\0';
		}
	}
	
	int r=0,c=0,t=-1;
	for(i=0;i<l;i++){
		rail[r][c++]=plain[i];
		if(r==0||r==k-1)
		t=t*(-1);
		r=r+t;
	}
printf("\nCIPHER TEXT= ");	
	for(i=0;i<k;i++){
		printf("(");
		for(j=0;j<l;j++){
			printf("%c",rail[i][j]);
		}
		printf(") / ");
	}
	
	printf("\n\t FOR DECRYPTION");
	printf("\nENTER THE CIPHER TEXT(which is displayed above) :");
	scanf("%s",&cipher);
	
	
	for(i=0;i<k;i++){
		for(j=0;j<l;j++){
			rail[i][j]='\0';
		}
	}
	
r=0,c=0,t=-1;
	for(i=0;i<l;i++){
		rail[r][c++]='*';
		if(r==0||r==k-1)
		t=t*(-1);
		r=r+t;
	}
	
t=0;
	for(i=0;i<k;i++){
		for(j=0;j<l;j++){
			if(rail[i][j]=='*')
			rail[i][j]=cipher[t++];
		}
	}
	
	for(j=0;j<l;j++){
		for(i=0;i<k;i++){
			printf("%c",rail[i][j]);
		}
	}
	return 0;
}
