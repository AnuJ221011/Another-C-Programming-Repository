#include <stdio.h>
#include<string.h>
int main() {
    char a[13]="abhijithPWIOI";
    
    char b[6]="Anuj  ";
    strcpy(a,b);
     printf("%s\n",a);
     printf("%d",strlen(a));

    return 0;
}