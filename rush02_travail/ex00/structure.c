#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define MAX_LINES 50
#define MAX_LENGTH 128

typedef struct s_number_rep
{
    char numb[MAX_LENGTH];
    char alpha[MAX_LENGTH];
}               t_number_rep;

int open_file(const char *filename)
{
    int fd;

    fd = open(filename, O_RDONLY);
    if (fd < 0)
    {
        write(2, "Error opening file\n", 19);
        return (-1);
    }
    return (fd);
}

void ft_putnbr(int nb)
{
    char c;

    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    c = (nb % 10) + '0';
    write(1, &c, 1);
}

ssize_t read_file(int fd, char *buffer, size_t size)
{
    ssize_t bytes_read;

    bytes_read = read(fd, buffer, size - 1);
    if (bytes_read < 0)
    {
        write(2, "Error reading file\n", 19);
        close(fd);
        return (-1);
    }
    buffer[bytes_read] = '\0';
    return (bytes_read);
}

void parse_line(char *line, t_number_rep *rep)
{
    int i = 0;
    int j = 0;

    while (line[i] != ':' && line[i] != '\0')
    {
        rep->numb[j++] = line[i++];
    }
    rep->numb[j] = '\0';
    while (line[i] == ':' || line[i] == ' ')
        i++;
    j = 0;
    while (line[i] != '\0' && line[i] != '\n')
    {
        rep->alpha[j++] = line[i++];
    }
    rep->alpha[j] = '\0';
}

int read_files(int fd, t_number_rep *reps, int max_lines)
{
    char buffer[MAX_LENGTH];
    ssize_t bytes_read;
    int line_count = 0;
    int start = 0;
    int end;

    while ((bytes_read = read(fd, buffer, sizeof(buffer) - 1)) > 0 && line_count < max_lines)
    {
        buffer[bytes_read] = '\0';  // Assurez-vous que buffer est une chaîne de caractères valide
        start = 0;
        while (start < bytes_read && line_count < max_lines)
        {
            end = start;
            while (end < bytes_read && buffer[end] != '\n')
                end++;
            if (end < bytes_read)
            {
                buffer[end] = '\0';
                parse_line(buffer + start, &reps[line_count]);
                line_count++;
                start = end + 1;
            }
        }
    }
    return line_count;
}

int main(void)
{
    int fd;
    t_number_rep reps[MAX_LINES];
    int bytes_read;

    fd = open("numbers.dict", O_RDONLY);
    bytes_read = read_files(fd, reps, MAX_LINES);
    close(fd);
    write(1, "Number of lines read: ", 23);
    ft_putnbr(bytes_read);
    write(1, "\n", 1);
    return (0);
}
