#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i;
    int l;

    i = 0;
    l = 1;
    while (argc > l)
    {
        while (argv[l][i] != '\0')
        {
            i++;
        }
        while (i >= 0)
        {
            ft_putchar(argv[l][i]);
            i--;
        }
        ft_putchar('\n');
    l++;
    i = 0;
    }
 return (0);   
}
