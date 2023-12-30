#include <stdio.h>
#include<string.h>
int main() {
    char a[20]="abhijith PWIOI";
    
    char b[2];
    strcpy(b,a);
     printf("%s\n",b);
     printf("%d\n",strlen(b));
     printf("%d\n",sizeof(b));
     printf("%d\n",strlen(a));
     printf("%d\n",sizeof(a));

    return 0;
}