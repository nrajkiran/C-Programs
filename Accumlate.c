#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *accum(const char *source)
{
  int i = 0, j = 0;
  int src_len = strlen(source);
  int dest_len = 0;
  char *dest = NULL, *temp = NULL;
  for (i = 0; i < src_len; i++)
  {
    dest_len = dest_len + i;
  }
  printf("Src_len = %d, Dest_len = %d\n", src_len, dest_len);
  dest = malloc(src_len + dest_len + src_len);
  memset(dest, '\0', src_len + dest_len + src_len);
  temp = dest;
  i = 0;
  while(*source != '\0')
  {
    *temp = (unsigned char)toupper((unsigned char)*source);
    for(j=0; j<i; j++)
    {
      temp++;
      *temp = (unsigned char)tolower((unsigned char)*source);
    }
    i++;
    source++;
    if (*source != '\0')
    {
      temp++;
      *temp = '-';
    }
    temp++;
  }
  return(dest);
}