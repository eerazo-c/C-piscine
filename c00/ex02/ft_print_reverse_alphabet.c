#include <unistd.h> 

void ft_print_reverse_alphabet(void)
{
    char letra;
    int i;

    //letra contiene le valor de el caracter
    letra = 'z';
    //i es el iterador para avanzar
    i = 0;
    //la condicion que necesitamos que se cumpla
    while (i < 26)
    {
        write (1, &letra, 1);
        //letra es -- por que cada vez que pase retrocedera
        letra--;
        i++;
    }
}

int main (void)
{
    ft_print_reverse_alphabet();
    return (0);
}
