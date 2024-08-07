#include <unistd.h>
#include <stdlib.h>

int num_len(int n)
{
    int len = 0;
    
    if (n <= 0)
        len = 1;
    while (n != 0)
    {
        n = n / 10;
        len++;
    }
    return len;
}

char *ft_itoa(int n)
{
    int len = num_len(n);
    char *str = (char *)malloc((len + 1) * sizeof(char));
    long nb = n;
    int sign = 1;

    if (str == NULL)
        return NULL;
    str[len] = '\0';
    if (nb < 0)
    {
        sign = -1;
        nb = -nb;
    }
    while (len > 0)
    {
        len--;
        str[len] = (nb % 10) + '0';
        nb = nb / 10;
    }
    if (sign == -1)
        str[0] = '-';
    return str;
}

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int main(void)
{
    int number = -2147483648;
    char *result = ft_itoa(number);

    if (result)
    {
        ft_putstr(result);
        write(1, "\n", 1);
        free(result);
    }
    return 0;
}
