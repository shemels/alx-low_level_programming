#include <stdio.h>
/**
 * main - entry point
 *
 * return: always 0
 * Description: success or correct
 */
int main(void)

{
char lower_case;
char upper_case;

for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
{
putchar(lower_case\n);
}
for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
{
putchar(upper_case);
}

return (0);

}





