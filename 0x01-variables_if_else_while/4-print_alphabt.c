#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabett;

for (alphabett = 'a'; alphabett <= 'z'; alphabett++)
{
if (alphabett == 'q')
continue;

else if (alphabett == 'e')
continue;

putchar(alphabett);
}

putchar('\n');

return (0);

}
