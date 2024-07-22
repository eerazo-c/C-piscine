#include <unistd.h>

/**
 * ft_print_alphabet - esta impriemndo el abcedario usando la funcion write.
 * .
 *
 * descripcion completa de lo que hace
 */

 void ft_print_alphabet(void)
{
    write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}

int main (void)
{
    char *str;

    //le doy el valor a str del abecedario para que se imprima.
    str = "abcdefghijklmnopqrstuvwxyz";

    //aqui llamo la funccion que lo va imprimir por consola con 
    //la funcion write.
    ft_print_alphabet();
}
