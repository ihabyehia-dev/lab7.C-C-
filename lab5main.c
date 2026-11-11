/***************************************************************** 

    File: lab5main.c

    Author: [ihab yehia]
    Seneca email: [iyehia1@myseneca.ca]    

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab5.c lab5main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/
//Uncomment the next line if you are using Visual Studio
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define CAP 20

// forward declarations for your functions
int sum(const int array[], int size);
void reverse(int array[], int size);
int countChar(char ch, const char str[]);
int countAllCase(char ch, const char str[]);

// helper to print an integer array
void printArray(const int array[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("]\n");
}

int main(void) {
    // --- Array setup for testing ---
    int array[CAP] = {1, 5, 4, 3, 2};
    int size = 5;

    printf("Original array: ");
    printArray(array, size);

    // --- Test sum() ---
    int total = sum(array, size);
    printf("Sum of elements = %d\n", total);

    // --- Test reverse() ---
    reverse(array, size);
    printf("Reversed array: ");
    printArray(array, size);

    // --- Test string functions ---
    char mystring[100] = "the quick brown Fox jumped\tOver r2d2 but c 3po was\n Too tall";

    int count_t = countChar('t', mystring);
    printf("\ncountChar('t') = %d\n", count_t);

    int count_o = countAllCase('o', mystring);
    printf("countAllCase('o') = %d\n", count_o);

    return 0;
}
