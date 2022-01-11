#ifndef HEXDUMP_H
# define HEXDUMP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>

# define OPTIONS "bcCdsonv"

typedef struct s_option
{
    char            value;
    struct s_option *next;
}   t_option;

typedef struct s_file
{
    char            *name;
    struct s_file   *next;
}   t_file;

typedef struct s_args
{
    t_option    *options;
    t_file      *files;
}   t_args;

#endif