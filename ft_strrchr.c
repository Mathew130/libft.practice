#include<stdio.h>
char *ft_strrchr(char *s, int c)
{   
    int i = 0;
    char *l =NULL;
    while(1)
    {
        if(s[i] == c)
        {
           
          l = &s[i];
            
        }
        if(s[i] == '\0')
        {
            break;
        }
        i++;
    }
    return(l);
} 
int main()
{
      char *s = "hello world";
    char *l;

    l = ft_strrchr(s, 'o');
    if(l)
    {
        printf("%s\n", l);
    }
    else
    {
        printf("not found\n");
    }
}           