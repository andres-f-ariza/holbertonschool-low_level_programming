/**
* _islower - checks for lowercase character.
* The given code is a C function named _islower that
*takes an integer parameter @c and returns an integer value.
*The purpose of this function is to determine whether a given
*character is a lowercase letter. It does so by checking whether
*the ASCII value of the character c is between 97 (the ASCII value of 'a')
*and 122 (the ASCII value of 'z'). If the character is a lowercase letter,
*the function returns 1, otherwise it returns 0.
*Note that the function assumes that the input parameter c is an ASCII
*value of a character. If the input is not an ASCII value or is not a
*character, the behavior of this function is undefined. Also, the function
*name starts with an underscore, which is generally reserved for system-define
*symbols, so using this function name in user-defined code may not
*be a good practice.
*@c: To prove
*Return: 1 if lowercase, 0 otherwise
*/
int _islower(int c)
{
if (c > 96 && c < 123)
{
return (1);
}
else
{
return (0);
}
}
