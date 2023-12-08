#ifndef MAIN_H
#define MAIN_H

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_fd(int fd, const char *file);
void copy_file(const char *from, const char *to);
void close_fd(int fd, const char *file);

#endif
