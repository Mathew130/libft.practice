#include"libft.h"

int is_set(const char c, const char *set)
{
  while(*set)
  {
    if(c == *set)
    return(1);
    set++;
  }
  return(0);
}

char *ft_strtrim(const char *s1, char const *set)
{
  size_t start;
  size_t end;
  size_t len;
  char *trimmed;

  start = 0;
  end   = ft_strlen(s1) - 1;
  while(s1[start] && is_set(s1[start], set))
  start++;
  while(s1[end] && is_set(s1[end], set))
  end--;
  if(start > end )
  return(ft_substr(s1, 0, 0);