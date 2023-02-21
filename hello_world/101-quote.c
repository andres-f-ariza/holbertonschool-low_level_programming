#include <unistd.h>
int main(void)
{
write(STDERR_FILENO, "Error: and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return 1;
}

