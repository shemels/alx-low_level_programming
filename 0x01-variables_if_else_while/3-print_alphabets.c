#include <stdio.h>
/**
 * main - Entry point
 * Eeturn: Always 0
 * Description: always returns 0( success or right)
 */

int main(void)

{
char lower_case;
char upper_case;
 
for (lowe_case = 'a'; lower_case <= 'z'; lower_case++)
{
putchar(lower_case);
}
for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
{
putchar(upper_case);
}
 
putchar('\n');

return (0);

}





