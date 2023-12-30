#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,j;
    int a;
    // printf("Enter the lenth of the string 1 :");
    // scanf("%d",&a)
    
    // int b;
    // printf("Enter the lenth of the string 1 :");
    // scanf("%d",&b)
    printf("Enter the first string :");
    scanf("[^\n%s]",str1);
    printf("Enter the second string :");
    scanf("[^\n%s]",str2);
    while(str1[i]!='\0')
    {
        i++;
    }
    for(j=0;str2[j]!='\0';++i,++j)
    {
        str1[i]=str2[j];
    }
    str1[i]='\0';
    printf("\nOutput of concat is : %d",str1);

}
