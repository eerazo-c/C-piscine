#include <unistd.h>

 void ft_is_negative(int n)
{
    int i;

    i = 0;
    if (n == 45)
    {
        write (1, "N\n", 2);
        i++;
    }
    else if (n == 43)
    {
        write (1, "P\n", 2);
        i++;
    }
    else 
        return (1);
}
