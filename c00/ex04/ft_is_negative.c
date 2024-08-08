#include <unistd.h>

 void ft_is_negative(int n)
{
    if (n >= 0) //le estoy indicando que si es o mayor (todos los numero)
    {
        write (1, "p\n", 2);
    }
    else
    {
        write (1, "N\n", 2);
    }
}

int main (void)
{
    ft_is_negative(5); //esto imprime P
    ft_is_negative(-3); //esto imprime N
}
