#include "main.h"



/**
* reset_to_98 - makes a pointer to an int as parameter and
*updates the value it points to 98.
* @n: Pointer as a parameter to update.
*In this implementation, the function takes a pointer to an integer
*n as a parameter. The '*' operator is used to dereference (manipulate value
*that is stored in the memory address they point to) the
*pointer and access the value it points to. The value
*is then updated to 98 by assigning it
*to the dereferenced pointer.
*/



void reset_to_98(int *n)
{
*n = 98;
}
