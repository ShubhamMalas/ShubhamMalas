#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<error.h>

int main() {
    FILE *file;
    char *filename = "example.txt";
    
    // Open the file for writing
    file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return EXIT_FAILURE;
    }
    // Write some data to the file
    fprintf(file, "Hello, World!\n");
    // Close the file
    fclose(file);
    return EXIT_SUCCESS;
}  