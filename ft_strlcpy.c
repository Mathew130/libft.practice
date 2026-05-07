#include<stdio.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{   
    size_t i = 0;
    size_t srcl = 0;

    while(src[srcl])
    {
        srcl++;
    }
    if(size == 0)
    {
        return (srcl);
    }
    while(i < size - 1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (srcl);
}
int main()
{
    char src[] = "hello world";
    char dest[6];

    size_t l = ft_strlcpy(dest, src, 6);

    printf("dest = %s\n",dest);
    printf("srcl =  %zu\n", l);
}