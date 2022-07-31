#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
} 

char    *ft_strdup(char *src)
{    
    int i;
    int size;

    size = ft_strlen(src);
    i = 0;
    char *src2 = 0;
    src2 = malloc(sizeof(char) * size);
    while (src[i] != '\0')
    {
        src2[i] = src[i];
        i++;
    }
    src2[i] = '\0';
    return (src2);
}

int main(int ac, char *av[])
{
    (void) ac;
    char *hi = 0;
    char *hello = 0;
    hi = av[1];
    hello = ft_strdup(hi);
    printf("%s", hello);
}
