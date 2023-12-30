#include <stdio.h>
#include<string.h>
int main() {
    char a[15]="abhijith PWIOI";
    
    char b[14]="Anuj";
    strcpy(a,b);
     printf("%s\n",a);
     printf("%d",strlen(a));

    return 0;
}