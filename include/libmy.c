/*
** libmy.c for  in /Users/taing_k/Desktop/myprintF/taing_k/include
** 
** Made by TAING Kevin
** Login   <taing_k@etna-alternance.net>
** 
** Started on  Mon Apr  4 11:22:27 2016 TAING Kevin
** Last update Fri Apr  8 09:08:36 2016 TAING Kevin
*/

#include "libmy.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void 	my_putstr(char *str)
{
  int	j;

  j = 0;
  while (str[j] != '\0')
    {
      my_putchar(str[j]);
      str++;
    }
}

int	my_strlen(char *str)
{
  int	a;

  a = 0;
  while (*str != '\0')
    {
      str = str + 1;
      a = a + 1;
    }
  return (a);
}

void	my_aff_tab(char str[])
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a = a + 1;
    }
}

char	*my_strncpy(char *dest, char *src, int n)
{
  int	a;

  a = 0;
  n = '\0';
  if (src[a] < n)
    {
      return (0);
    }
  while (dest[a] <= n && src[a] != '\0')
    {
      dest[a] = src[a];
      a++;
    }
  dest[a] = '\0';
  return (dest);
}
