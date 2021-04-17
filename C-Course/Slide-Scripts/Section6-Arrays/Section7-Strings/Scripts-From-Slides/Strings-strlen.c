#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="vikings";
    char b[20]={'v','i','k','i','n','g','s','\0'};

    printf("Length of string a = %zu \n",strlen(a));
    printf("Length of string b = %zu \n",strlen(b));

    return 0;
}