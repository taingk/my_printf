/*
** function2.c for  in /Users/taing_k/Desktop/myprintF/taing_k/include
** 
** Made by TAING Kevin
** Login   <taing_k@etna-alternance.net>
** 
** Started on  Tue Apr  5 12:55:22 2016 TAING Kevin
** Last update Fri Apr  8 09:14:57 2016 TAING Kevin
*/

#include "libmy.h"
#include "function.h"

void	my_printf_u(va_list list)
{
  my_put_nbrU(va_arg(list, unsigned int));
}

void	my_printf_x(va_list list)
{
  hex(va_arg(list, unsigned int), "0123456789abcdef");
}

void	my_printf_X(va_list list)
{
  hex(va_arg(list, unsigned int), "0123456789ABCDEF");
}

void	my_printf_modulo(va_list list)
{
  (void)	list;

  my_putchar('%');
}

void	hex(int n, char *taille)
{
  int	i;

  for (i = 0; n >= 16; i++)
    n = n - 16;	
  if (i > 0)
    hex(i, taille);
  my_putchar(taille[n]);
}
