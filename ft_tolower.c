#include<stdio.h>

char ft_tolower(char c)
{
    if(c >= 'A' && c <= 'Z')
    {
        return(c + 32);
    }
    return(c);
}
int main()
{
    char c = 'A';
    char j;
    j = ft_tolower(c);
    printf("%c\n",j);

}