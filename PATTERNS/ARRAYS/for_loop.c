/*
Snippet for iterating an array and printing its contents
USAGE : gcc for_loop.c -o for_loop
*/
#include <stdio.h>

int main() {
    int arr1[5]; // declaring an array of ints of size = 5
    int arr2[5] = {19, 10, 8, 17, 9}; // declaring and initializing array of ints of size = 5
    int values[] = {19, 10, 8, 17, 9}; // declaring and initializing array of ints without specifying 
                                       // the size in advance

    // printing elements of an array
    for(int i = 0; i < 5; ++i) {
        printf("%d\n", values[i]);
    }

    return 0;
}