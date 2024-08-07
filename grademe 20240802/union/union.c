#include <unistd.h>

int has_char(char *str, char c, int max_index)
{
    int i = 0;
    while (i < max_index)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void ft_union(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    
    // Afficher les caractères uniques de s1
    while (s1[i] != '\0')
    {
        if (!has_char(s1, s1[i], i))
            write(1, &s1[i], 1);
        i++;
    }
    
    // Afficher les caractères uniques de s2
    while (s2[j] != '\0')
    {
        if (!has_char(s1, s2[j], i) && !has_char(s2, s2[j], j))
            write(1, &s2[j], 1);
        j++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        ft_union(argv[1], argv[2]);
    }
    else
    {
        write(1, "\n", 1);
    }
    return (0);
}
