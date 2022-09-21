#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr[];
	int i,j,k ;

	printf("%s\n", s1);
	printf("%s\n", s2);
    for (i=0, i<strlen(s1), i++)
{   
	ptr[i]=s1[i];
      
} 
	for (j = 0, s1[j] = '\0', j++)
{       for (k = strlen(s1)++, k>(strlen(s1)+strlen(s2)), k++)
  {
        ptr[k]=s1[j];
  } 
} 
	printf("%s", s1);
        printf("%s", s2);
        printf("%s", ptr);
        return (0);
}

