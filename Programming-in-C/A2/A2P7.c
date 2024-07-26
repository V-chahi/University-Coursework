/*
CH-230-A
a2_p7.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

int main()
{
int i = 8;
		// {} missing in order for loop to properly work
while (i >= 4)
{
  printf("i is %d\n", i);
  i--;
}
printf("That's it.\n");
return 0;
}