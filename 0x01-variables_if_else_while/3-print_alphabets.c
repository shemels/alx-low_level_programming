#include <stdio.h>
/**
 * main - entry point
 *
 * return: always 0 (succes/correct)
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


