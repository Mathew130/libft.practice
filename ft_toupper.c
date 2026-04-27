#include<stdio.h>

char ft_toupper(char c)
{
    if(c >= 'a' && c <= 'z')
    {
        return(c - 32);
    }
    return(c);
}
int main()
{
    char c = 'a';
    char j;
    j = ft_toupper(c);
    printf("%c\n",j);
    
}