#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <dirent.h>


void interactiv(char *list_arg);
void non_interactive (char *list_arg);



int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);



#endif
