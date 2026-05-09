#include<stdio.h>

char *ft_strnstr(const char *h, const char *n, size_t l)
{
    size_t i;
    size_t j;

    if(n[0] == '\0')
    return((char *)h);

    i = 0;
    while(h[i] && i < l)
    {
        j = 0;
        while(h[i+j] == n[j] && (i + j) < l && h[i + j])
        {
            j++;
        }
        if(n[j] == '\0')
          return((char *)&h[i]);
        i++;
    }
    return(NULL);
}
int main()
{
    char *str;

    str = ft_strnstr("hello world", "world", 11);
    if(str)
    {
         printf("%s\n", str);
    }
    else
    {
    printf("not found");
    }
    return(0);

}