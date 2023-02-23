/**
* _abs - Returnts absolute value
*@c: to be evaluated
*if conditional statement that evaluates c < 0,
*if true, it will multiply the value by -1, in
*order to obtain it as positive*as an absolute value.
*if false it will return the same value.
*Return: Absolute value of n 
*/

#include "main.h"
int _abs(int c)
{
if (c < 0)
{
return (c * -1);
}
else
{
return (c);
}
}
