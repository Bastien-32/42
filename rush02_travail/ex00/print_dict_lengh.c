#include <unistd.h>
#include <fcntl.h>

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

int main(void)
{
    int     fd;
    char    buffer[700];
    ssize_t bytes_read;

    fd = open("numbers.dict", O_RDONLY);
    bytes_read = read_file(fd, buffer, sizeof(buffer));
    write(1, buffer, bytes_read);
	write(1, "Number of bytes read: ", 23);
    ft_putnbr(bytes_read);
    write(1, "\n", 1);
    close(fd);
    return (0);
}
