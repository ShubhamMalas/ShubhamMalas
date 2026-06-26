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

    //read from the file and write it to stdout
    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }
    // Read from the file and write to stdout
    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), file)) {
        fputs(buffer, stdout);
    }
    
    // Close the file
    fclose(file);
    return EXIT_SUCCESS;
}  