#include<stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1 = (const unsigned char*)s1;
    const unsigned char *p2 = (const unsigned char*)s2;
    
    size_t i = 0;
    while(i < n)
    {
       if(p1[i] != p2[i])
       return(p1[i] - p2[i]);
       i++;
    }
    return(0);
}

int main()
{
    char *s1 = "hello";
    char *s2 = "hellloo";

    printf("%d\n", ft_memcmp(s1, s2, 5));
}