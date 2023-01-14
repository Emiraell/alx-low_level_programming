#ifndef MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_greed(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);


#endif