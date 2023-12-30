#include<stdio.h>
void main()
{
	char a[1000];
	printf("Enter the string : ");
	gets(a);
	int count=0;
	for(int i=0; a[i]!='\0';i++){
		
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		
		count++;
		
	}
	printf("no. of vowels = %d",count);
}