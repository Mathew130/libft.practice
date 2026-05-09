#include<stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
      size_t dstl = 0;
      size_t srcl = 0;
      size_t        i;
      
       dstl = 0;
       srcl = 0;
          i = 0;
          
     while(dst[dstl])
     dstl++;
     while(src[srcl])
     srcl++;
     if(size <= dstl)
     return(size + srcl);
     
     while(src[i] && (dstl + i < size - 1))
     {
        dst[dstl + i] = src[i];
        i++;
     }
     return(dstl + srcl);
}
int main()
{
      char dst[20] = "hello";
      char src[]   = "world"; 
      ft_strlcat(dst, src, sizeof(dst));
      printf("%s\n", dst);      
}