/*
** libmy2.c for  in /Users/taing_k/Desktop/myprintF/taing_k/include
** 
** Made by TAING Kevin
** Login   <taing_k@etna-alternance.net>
** 
** Started on  Mon Apr  4 11:22:37 2016 TAING Kevin
** Last update Fri Apr  8 09:09:43 2016 TAING Kevin
*/

#include "libmy.h"

void	my_put_nbr(int n)
{
  int	t;

  t = 0;
  if (n < '\0')
    {
      my_putchar('-');
      if (n == -2147483648)
	{
	  n = n + 1;
	}
      n = n * -1;
    }
  if (n >= 10)
    my_put_nbr(n / 10);
  if (t == 1)
    my_putchar(n % 10 + '1');
  else
    my_putchar(n % 10 + '0');
}

void	my_put_nbrU(unsigned int n)
{
  unsigned int	t;

  t = 0;
  n = n * 1;
  if (n >= 10)
    my_put_nbrU(n / 10);
  if (t == 1)
    my_putchar(n % 10 + '1');
  else
    my_putchar(n % 10 + '0');
}

int	my_strcmp(char *s1, char *s2)
{
  int	w;
 
  w = 0;
  while (s1[w] != '\0' || s2[w] != '\0')
    {
      if (s1[w] < s2[w])
	return (-1);
      if (s1[w] == s2[w])
	w = w + 1;
      if (s1[w] > s2[w])
	return (1);
    }
  return (0);
}
