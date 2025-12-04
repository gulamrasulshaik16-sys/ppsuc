#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]="cse",b[10]="ADITYA";
	printf("a sting length is:%d\n",strlen(a));
	printf("a sting reverse is:%s\n",strrev(a));
	printf("a sting in uppercase is:%s\n",strupr(a));
	printf("b sting in lowercase is:%s\n",strlwr(b));
	printf("sting copy is:%s\n",strcpy(a,b));
	printf("sting concat is:%s\n",strcat(a,b));
	printf("string compare is:%d",strcmp(a,b));
	return 0;
}

