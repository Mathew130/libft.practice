#include<stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
     const unsigned char *p = ( const unsigned char *)s;

    size_t i = 0;
    while(i < n)
    {
        if(p[i] == (unsigned char)c)
        {
            return((void*)&p[i]);
        }
        i++;
    }
    return(NULL);

}
int main()
{
    char *s = "hello";

    char *r = ft_memchr(s, 'l',5);

    if(r)
    {
        printf("Found = %s\n", r);
    }
    else
    {
        printf("not found");
    }
}