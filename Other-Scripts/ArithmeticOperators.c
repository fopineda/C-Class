#include <stdio.h>
int main()
{
    
    int x = 10,y = 4, z;
    z = x/y;
    printf("x/y = %d \n",z); // x/y = 2 


    int a = 10,b = 4, c;
    c = a/b;
    printf("a/b = %d \n",c); // a/b = 2

    double d = 10, e = 4, f; 
    f = d/e;
    printf("d/e = %lf \n",f); // d/e = 2.500000

    int h = 10,i = 4;
    double j;
    j = h/i;
    printf("h/i = %lf \n",j); // h/i = 2.000000

    double k = 10.0 ,m;
    int l = 4;
    printf("k/l = %lf \n",m); // h/i = 2.000000
    return 0;
}