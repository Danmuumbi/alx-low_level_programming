#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFSIZE 1024

void close_fd(int fd, const char *file);
void copy_file(const char *from, const char *to);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    copy_file(argv[1], argv[2]);

    return 0;
}

void close_fd(int fd, const char *file)
{
    if (close(fd) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

void copy_file(const char *from, const char *to)
{
    int fd_from, fd_to, read_bytes;
    char buffer[BUFSIZE];

    fd_from = open(from, O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", from);
        exit(98);
    }

    fd_to = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", to);
        close_fd(fd_from, from);
        exit(99);
    }

    while ((read_bytes = read(fd_from, buffer, BUFSIZE)) > 0)
    {
        if (write(fd_to, buffer, read_bytes) == -1)
        {
            dprintf(2, "Error: Can't write to %s\n", to);
            close_fd(fd_from, from);
            close_fd(fd_to, to);
            exit(99);
        }
    }

    close_fd(fd_from, from);
    close_fd(fd_to, to);
}
