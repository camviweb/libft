[header]

/* #include "libft.h" */
#include <stddef.h>

void  *ft_memcpy(void  *dest, const void  *src, size_t size)
{
  size_t  i;
  /* char  *savdst;
  char  *savsrc; 
  
  savsrc = (char *)src;
  savdst = dst; */
  i = 0;
  while (i < size)
  {
    dest[i] = src[i]; //savdst[i] = savsrc[i]
    i++;
  }
  return (dest); //??
}
