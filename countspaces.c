#include <stdio.h>
#include<string.h>

int main() {
    char a[100];
    printf("Enter the string : ");
    gets(a);
    int count =0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]==32)
        count++;
    }
    printf("count of spaces=%d",count);
    return 0;
}