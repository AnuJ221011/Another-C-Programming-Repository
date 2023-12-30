//b me a ko hi copy kar dega.No matter ki b ka length kya hai.
#include <stdio.h>
#include<string.h>
int main() {
    char a[]="abhijith PWIOI";
    char b[1];
    strcpy(b,a);
     printf("%s\n",b);
     printf("%d",strlen(b));

    return 0;
}