#include <stdio.h>

// prototype
void printMahDangArray(int myArray[], int mySize);

int main()				     
{
    
    int arrayTwenty[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int arrayTwentyThree[23] = {21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43};

    printMahDangArray(arrayTwenty, 20);

    printf("\n");

    printMahDangArray(arrayTwentyThree, 23);
    
    return 0;

}

void printMahDangArray(int myArray[], int mySize){
    for (int i = 0; i < mySize; ++i){
        printf("%d ", myArray[i]);
    }
}