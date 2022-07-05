#include "main.h"
#include <ctype.h>
/**
* Description: (int c) is used to check results
*
* Return: int 0
*/
int _islower(int c)
{
char check;

check = tolower(c);
if (c != check || c == 0 || c == 20)
{
return (0);
}
if (c == check)
{
return (1);
}
return (0);
}
