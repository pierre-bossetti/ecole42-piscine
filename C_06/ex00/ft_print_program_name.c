#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i;
    
    i = 0;
    while (argv[0][i] != '\0')
    {
        ft_putchar(argv[0][i]);
        i++;
    } 
    write(1, "\n", 1);
    return (0);
}
