#include"libft.h"

char  *ft_substr(char const *s, unsigned int start, size_t l)
{ 
    size_t  i;
    char *new;
    size_t slength;
    unsigned int alloc;
  
  i = 0;
  if(!s)
  {
    return(NULL);
  }
  slength = ft_strlen((s));
  if(start >= ft_strlen(s))
  {
     new = malloc(1);
     if(!new)
     return(NULL);
     new[0] = '\0';
     return(new);
  }
  alloc = l;
  if(slength - start < l)
  alloc = slength - start;
  new = malloc(alloc + 1);
  if(!new)
  return(NULL);
	while (i < alloc)
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}
