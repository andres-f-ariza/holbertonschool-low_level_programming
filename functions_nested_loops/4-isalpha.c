/**
* _isalpha - checks for alphabetic character.
*The given code is a C function named _isalpha that
*takes an integer parameter c and returns 1 if the
*character is an alphabet (uppercase or lowercase letter
*.It does so by checking whether the ASCII value of the character c
*is between 97 (the ASCII value of 'a') and 122 (the ASCII value of 'z')
*or between 65 (the ASCII value of 'A') and 90 (the ASCII value of 'Z').)
*and 0 if it is not. It checks if the ASCII value
*of the character is within the range of uppercase or
*lowercase letters using logical OR operator.
*@c: To prove
* Return: 1 if lowercase, 0 otherwise
*/

int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
{
return (1);
}
else
{
return (0);
}
}
