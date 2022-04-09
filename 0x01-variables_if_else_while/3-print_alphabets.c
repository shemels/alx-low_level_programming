#include <stdio.h>
/**
 * main - entry point
 * Description: returns nothing
 * return: always 0
 * Description: success or right
 */

int main(void)

{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;
else if (alphabet == 'e')
continue;

putchar(alphabet);
}

putchar('\n');

return (0);

}





