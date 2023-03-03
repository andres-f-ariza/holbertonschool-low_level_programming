#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
*main - generates random valid passwords for the program 101-crackme.
*@
*Return:password
*/
#define PASSWORD_LENGTH 6
/**
Define the length of the password to be generated
*/



int main(void)
{

int main(void)
{
char password[PASSWORD_LENGTH + 1] = {0};
/**
*Declare a char array to store the password
*and initialize it with null terminators
*/

char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

/**
*Define the set of characters that can be used
*to generate the password
*/

srand(time(NULL));

/**
*Seed the random number generator with the current time.
*To generate a sequence of random numbers, a random number
*generator needs to be initialized with a "seed" value.
*The seed value is used as the starting point for the random number
*generator's algorithm to generate a sequence of numbers.
*One common way to generate a seed value for a random number
*generator is to use the current time. This is because the
*current time is always changing, so it's unlikely that the
*same seed value will be used twice.
*/

for (int i = 0; i < PASSWORD_LENGTH; i++)
{
  /**
   *Generate the password one character at a time
   */

int index = rand() % (sizeof(charset) - 1);

/**
*Generate a random index between 0 and the
*length of charset - 1
*The rand() function generates a random integer between 0 and
*RAND_MAX, where RAND_MAX is a constant defined in the library.
*To get a random index between 0 and the length of
*charset - 1, we need to do the following steps:
*Calculate the length of charset using the sizeof() operator.
*Subtract 1 from the length of charset because array indices are 0-based.
*(This means that the first element of an array is at
*index 0, the second element is at index 1, and so on.)
*Use the modulo operator (%) to generate a random integer
*between 0 and the length of charset - 1.
*/

password[i] = charset[index];

/**
*Assign the character at the random index to the current
*index of the password array.
*Here, password[i] represents the current index of the password array, and
*charset[index] represents the character at the random index in the charset array.
*So, what this code does is generate a random index within the bounds of
*charset, and then use that index to select a random character from charset
*to add to the password at the current index. This process is repeated
*PASSWORD_LENGTH times to generate a complete password. The resulting password
*is a string of PASSWORD_LENGTH characters randomly selected from the charset array.
*/
}
printf("Random Password: %s\n", password);

/**
*Print the generated password
*/


return 0;

}

