#include<stdio.h>

void *ft_memcpy(void *dest,  const void *src, size_t n)
{   
     unsigned char *d = (unsigned char*)dest;
    const unsigned char *s = (const unsigned char*)src;

     size_t i = 0;
     while(i < n)
     {
        d[i] = s[i];
        i++;
     }
     return(dest);
}
int main()
{
   char *src = "hello";
   char dest[6];
   
    ft_memcpy(dest, src, 6);
    printf("dest = %s\n", dest);
}