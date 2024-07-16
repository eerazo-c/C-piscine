#include <unistd.h> 

void ft_putchar(char c)
{
    write (1, &c, 1);
}

char regresachar(void);

int main (void)
{
    char c;
    char r;
    
    c = 'c';
    r = 'r';
    
    ft_putchar(r);
    ft_putchar(c);
    r = regresachar();
    ft_putchar('\n');
    return (0);
}

char regresachar(void)
{
    return ('d');
}

