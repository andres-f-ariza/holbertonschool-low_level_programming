#include <unistd.h>
#include <string.h>
#include <errno.h>
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t bytes_written = write(STDERR_FILENO, "Error: ", strlen("Error: "));
if (bytes_written < 0) {
return 1;
}
bytes_written = write(STDERR_FILENO, message, strlen(message));
if (bytes_written < 0) {
return 1;
}
return 1;
}

