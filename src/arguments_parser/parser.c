#include "hexdump.h"

t_option *parse_options(char *arg)
{

}

t_args *parse_args(int argc, char *argv[])
{
    t_args      *args;
    t_option    *options;
    t_option    *last_option;
    t_file      *last_file;

    args = malloc(sizeof(t_args));
    if (args)
    {
        args->options = NULL;
        args->files = NULL;
        last_option = NULL;
        last_file = NULL;

        for (int i = 0, i < argc, i++)
        {
            // Parse an argument starting with '-'

            options = NULL;
            if (argv[i][0] == '-')
                options = parse_options(argv[i]);
            if (last_options)
                last_options->next = options;
            else
                args->options = options;


            // Parse the file name if argument not starting with '-'

            if (args->files == NULL)
            {
                args->files = malloc(sizeof(t_file));
                strncpy(args->files, argv[i], 1024);
            }
            else
                strncpy(args->files, argv[i], 1024);
        }
    }
    return (args);
}