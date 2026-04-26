#include<stdio.h>

int ft_isalpha(char c)
{
    if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
    {
        return(1);
    }
    return(0);
}    

int main()
{
    char c;
         c = 'a';
    int j;
    j = ft_isalpha(c);
    if(j == 1)
    {
        printf("%c is an Alphabet\n", c);
    }
    else
    {
        printf("%c is not an Alphabet\n", c);
    }

}    
