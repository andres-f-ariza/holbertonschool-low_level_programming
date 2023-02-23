/**
*jack_bauer - prints every minute of the day of Jack Bauer, starting
* from 00:00 to 23:59.
*the function jack_bauer uses a nested while loop, two of them for hours
*and two of them for minutes
*the first, H1, goes
*from 0 to 2. the second H2, goes from 0 to 9. the third, goes from 0 to 5
*the fourth goes from 0 to 9.
*Return: Always 0
*/

#include "main.h"
void jack_bauer(void)
{
int H1;
int H2;
int M1;
int M2;
H1 = 0;
H2 = 0;
M1 = 0;
M2 = 0;
while (H1 <= 2)
{
while ((H2 <= 9 && H1 <= 1) || (H2 <= 3 && H1 == 2))
{
while (M1 <= 5)
{
while (M2 <= 9)
{
_putchar(H1 + '0');
_putchar(H2 + '0');
_putchar(':');
_putchar(M1 + '0');
_putchar(M2 + '0');
_putchar('\n');
M2++;
}
M2 = 0;
M1++;
}
M1 = 0;
H2++;
}
H2 = 0;
H1++;
}
}
