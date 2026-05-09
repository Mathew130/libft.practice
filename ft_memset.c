#include<stdio.h>

void *ft_memset(void *str, int c, size_t n)
{
    unsigned char *p;
    size_t         i;
    
    p = (unsigned char *)str;
    i = 0;
    while(i < n)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return(str);
}
int main()
{
    char str[10] = "hello";

    ft_memset(str, 'S', 3);
    printf("%s\n",str);
}