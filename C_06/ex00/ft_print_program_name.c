#include <unistd.h>

int main(int argc, char *argv[])
{
    int len;

    len = sizeof (argv[0]);
    write(1, argv[0], len);
    write(1, "\n", 1);
    return (0);
}
