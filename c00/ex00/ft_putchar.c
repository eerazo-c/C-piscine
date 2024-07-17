#include <unistd.h> 

/**
 * ft_putchar - Imprime un caracter.
 * @param c: es el valor que quiero que haga/imprima.
 *
 * Esta funcion imprime una caracter, llamando a la funcion write,  
 * write:
 * -STDIN_FILENO(0, cuando escribimos desde el teclado, puedes meter info con el teclado)
 * -STDOUT_FILENO(1,lo vemos en la salida de pantalla)
 * -STDERR_FILENO(2, vemos cualquier error en la pantalla).
 */

void ft_putchar(char c)
{
    write (1, &c, 1);
}
/*
int main (void)
{
    write (STDOUT_FILENO, "salida estandar\n", 16);
    write (STDERR_FILENO, "Error estandar\n", 15);
   
    //puedo llamar ft_putchar sin necesidad 
    //de declarar variables por que se le puede
    //pasar el caracter utilizando -> ('').

    ft_putchar('s');
    ft_putchar('a');
    ft_putchar('n');
    ft_putchar('t');
    ft_putchar('i');
    ft_putchar('\n');
}
*/
