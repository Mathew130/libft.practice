 #include<stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
     unsigned char  *d = (unsigned char*)dest;
     const unsigned char*s = (const unsigned char*)src;

      size_t i = 0;
        if(d < s)
        {
           i = 0;
           while(i < n)
           {
             d[i] = s[i];
             i++;
           }
        }
        else
        {
              i = n;
              while(i > 0)
              {
                i--;
                d[i] = s[i];
              }
        }
        return(dest);
     }

// int main()
// {
//    char src[] = "hello";
//    char dest[6];
   
//     ft_memmove(dest, src, 6);
//     printf("dest = %s\n", dest);
// }