#include <unistd.h> 
/*
void ft_print_alphabet(void)
{
    write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}
*/
//otra version 

void ft_print_alphabet(void)
{
    //char letra es quien tendra la letra a imprimir
    char letra;
    // esto es iterador para que avance
    int i;

    letra = 'a';
    i = 0;

    //26 por que en programacion se cuenta empezando desde 0
    while (i < 26)
    {
        write (1, &letra, 1);
        //letra itera para que sume a la siguiente caracter
        letra++;
        //itera hasta llegar a 26
        i++;
    }
}

int main (void)
{
    //aqui solo es necesario llamar la funcion
    ft_print_alphabet();
    return (0);
}
