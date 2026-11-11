/***************************************************************** 

    File: lab5.c

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
/*
This function is passed an array and the size of the array. The
function returns the sum of the values from the array
*/
int sum(const int array[], int size){
int sum = 0;
  for(int i = 0; i<size;i++){
   sum+=array[i];
 }
    return=sum;

}

/*
This function is passed an array of integers and its size. 
Function will reverse the array
*/
void reverse(int array[], int size){
    int temp;
for(int i = size -1, j = 0;i >= size/2 ; i--,j++){
  temp = array[j];
  array[j]=array[i];
  array[i]=temp;
}
}

/*
This function returns the number of times ch shows up in str
*/
int countChar(char ch, const char str[]) {
     int count = 0;
     for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
             count++;
         }
     }
     return count;
 
}

/*
This function returns the number of times ch shows up in str.
If ch is an alphabetic character, count both the upper and lower
case versions of this character.
*/
int countAllCase(char ch, const char str[]) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (ch >= 'A' && ch <= 'Z') { 
             if (str[i] == ch || str[i] == ch + 32)  {
                 count++;
        }
        }
       else if (ch >= 'a' && ch <= 'z') { 
            if (str[i] == ch || str[i] == ch - 32) {
                count++;
    }
    }
        else { 
            if (str[i] == ch){
                count++;}
        }
    }

     return count;
   

}
