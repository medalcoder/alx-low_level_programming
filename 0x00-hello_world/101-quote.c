#include <unistd.h>
#include <string.h>
#include <errno.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */
int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = strlen(message);
    ssize_t bytes_written = write(STDERR_FILENO, message, len);

    if (bytes_written != len)
    {
        int error = (bytes_written == -1) ? errno : EIO;
        perror("Write error");
        return error;
    }

    return (1);
}
