#include <stdio.h>
/**
 * main - entry point
 *
 * return: always 0
 * Description: prints the lower case alphabets in reverse
 */

int main(void)

{
char alphabet;

for (alphabet = 122; alphabet >= 97; alphabet--)
{
putchar(alphabet);
}

putchar('\n');

return (0);

}
