/*
Snippet for reading from a text file:
USAGE : gcc read_from_text.c -o read_from_text
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    int i; // for loop
    FILE* filePointer = fopen("./DATA/in.txt", "r");
    // let's check if we can open the file
    if (filePointer == NULL)
    {
        printf("Can't open/find file!\n");
        return 1;
    }

    char output[256]; // to hold our text
    for (i = 1; fgets(output, sizeof(output), filePointer) != NULL; i++)
    {
        printf("%02d: %s", i, output);
    }

    // let's close our file
    fclose(filePointer);

    return 0;
}