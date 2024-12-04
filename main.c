#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main() {

    int fd1 = open("test1.txt", O_RDONLY);
    int fd2 = open("test2.txt", O_RDONLY);

    char *line1, *line2;

    // Interleaved reading
    line1 = get_next_line(fd1);  // Read first line of file 1
    line2 = get_next_line(fd2);  // Read first line of file 2
    
    printf("File 1 - Line 1: %s", line1);
    printf("File 2 - Line 1: %s", line2);
    
    free(line1);
    free(line2);

    line1 = get_next_line(fd1);  // Read second line of file 1
    line2 = get_next_line(fd2);  // Read second line of file 2
    
    printf("File 1 - Line 2: %s", line1);
    printf("File 2 - Line 2: %s", line2);
    
    free(line1);
    free(line2);

	line1 = get_next_line(fd1);  // Read first line of file 1
    line2 = get_next_line(fd2);  // Read first line of file 2
    
    printf("File 1 - Line 3: %s", line1);
    printf("File 2 - Line 3: %s", line2);
    
    free(line1);
    free(line2);


    close(fd1);
    close(fd2);

    return 0;
}