#include<stdio.h>
char *ft_strchr(char *s, int c)
{   
    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            return(&s[i]);
            
        }
        i++;
        
    }
    return(NULL);
}
int main ()
{
    char *s = "hello world";
    char *p;

    p = ft_strchr(s, 'w');
    if(p)
    {
        printf("%s\n", p);
    }
    else
    {
        printf("not found\n");
    }
}