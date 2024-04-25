#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int sz, fd;
    char *c = (char *)calloc(100, sizeof(char));
    // Attempt to open the file "system_call.txt" for reading
    // O_RDONLY: Open for reading only
    // O_CREAT: Create the file if it does not exist
    fd = open("system_call.txt", O_RDONLY | O_CREAT);
    if (fd < 0) {
        perror("r1");
        exit(1);
    }
    sz = read(fd, c, 100);
    printf("called read(%d, c, 100), returned that %d bytes were read.\n", fd, sz);
    c[sz] = '\0';
    printf("Those bytes are as follows: %s\n", c);
    free(c);
    close(fd);

    return 0;
}
