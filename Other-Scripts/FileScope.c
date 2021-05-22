#include <stdio.h>

int addMyGlobalVar();
int globalVar = 100;

int main()				     
{
    printf("%d \n", addMyGlobalVar()); // 251
    return 0;

}	

int anotherGlobalVar = 101;

int addMyGlobalVar(){
    int simpleVar = 50;
    return globalVar + simpleVar + anotherGlobalVar + lastGlobalVar; //??
}

int lastGlobalVar = 102; // ??
