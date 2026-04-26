#include<stdio.h>

int ft_isdigit(int i)
{
    if(i>= '0' && i<='9')
    {
        return 1;
    }
    return 0;
}
int main()
{   int i;
    i = '5';
    int j;

    j = ft_isdigit(i);
    if(j==1)
    {
        printf("%c is a digit\n",i);
    }
    else
    {
        printf("%c is not a digit\n",i);
    }
}    