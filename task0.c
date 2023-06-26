#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        FILE *file_pointer = fopen(argv[1], "r");
        char *buffer = NULL;
        size_t buffer_size = 0;

        while(getline(&buffer, &buffer_size, file_pointer) != -1)
        {
            unsigned long long num = strtoll(buffer, NULL, 10);
            printf("%lli\n%s", num, buffer);
        }
        fclose(file_pointer);
    }
    return (0);
}