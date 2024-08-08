#include <unistd.h>

 void ft_print_numbers(void)
{
    char num;
    int i;

    //num tiene el valor que se quiere imprimir
    num = '0';
    //iterador
    i = 0;

    //condicion le puse un = para que tambien impriera el 9
    while (i <= 9)
    {
        write (1, &num, 1);
        num++;
        i++;
    }
}

int main (void)
{
    ft_print_numbers();
    return (0);
}
