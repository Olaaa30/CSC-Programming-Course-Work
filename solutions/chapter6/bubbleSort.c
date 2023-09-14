#include <stdio.h>
#define SIZE 10

int main (void){
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    puts("Data items in original order");
    for (size_t i = 0; i < SIZE; i++){
        printf("%4d", a[i]);
    }
    //bubble sort
    for (unsigned int pass = 1; pass < SIZE; pass++){
        for (size_t i = 0; i < SIZE - 1; ++i){
            if (a[i] > a[i + 1]){
                int hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
    }
    puts("\nData items in ascending order");
    for (size_t i = 0; i < SIZE; i++){
        printf("%4d", a[i]);
    }
    puts("");

}