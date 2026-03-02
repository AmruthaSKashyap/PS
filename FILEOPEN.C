#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file_ptr;

    file_ptr = fopen("example.txt", "w");

    if(file_ptr == NULL)
    {
        printf("Failed to open the file");
        exit(1);
    }

    printf("File opened successfully");

    return 0;
}