#include <unistd.h>

 void ft_print_alphabet(void)
{
    write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}

int main (void)
{
    char *str;

    str = "abcdefghijklmnopqrstuvwxyz";

    ft_print_alphabet();
}
