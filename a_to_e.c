#include <stdio.h>
#include<string.h>

int main() {
    char a[100];
    printf("Enter the string : ");
    gets(a);

    for(int i=0;i<strlen(a);i++){
        if(a[i]>=97&& a[i]<=101)
    
    printf("%c",a[i]);
    }
    return 0;
}