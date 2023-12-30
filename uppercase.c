#include <stdio.h>
#include<string.h>

int main() {
    char a[100];
    printf("Enter the string : ");
    gets(a);
    int count =0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]>=65 && a[i]<=90)
        count++;
    }
    printf("count of uppercase=%d",count);
    return 0;
}