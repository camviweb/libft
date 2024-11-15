[header]

/* #include "libft.h" */

void  *ft_memmove(void  *dst, const void  *src, size_t size)
{
  size_t  i;
  const void *temp;

  i = 0;
  temp = src;
  while (i < size)
  {
    dst[i] = temp[i];
    i++;
  }
  return (dst);
}
