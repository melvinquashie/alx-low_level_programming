#include <stdlib.h>
#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

while (*(s1 + len1) != '\0')
len1++;
while (*(s2 + len2) != '\0')
len2++;

if (n < len2)
s3 = malloc(sizeof(char) * (len1 + n + 1));
else
s3 = malloc(sizeof(char) * (len1 + len2 + 1));

if (s3 == NULL)
return (NULL);

while (i < len1)
s3[i] = s1[i];
i++;

while (n < len2 && i < (len1 + n))
s3[i++] = s2[j++];
while (n >= len2 && i < (len1 + len2))
s3[i++] = s2[j++];

s3[i] = '\0';
return (s3);
}
