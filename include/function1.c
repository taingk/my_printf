/*
** function1.c for  in /Users/taing_k/Desktop/myprintF/taing_k/include
** 
** Made by TAING Kevin
** Login   <taing_k@etna-alternance.net>
** 
** Started on  Tue Apr  5 12:55:15 2016 TAING Kevin
** Last update Fri Apr  8 09:05:40 2016 TAING Kevin
*/

#include "libmy.h"
#include "function.h"

void	my_printf_s(va_list list)
{
  my_putstr(va_arg(list, char*));
}

void	my_printf_i(va_list list)
{
  my_put_nbr(va_arg(list, int));
}

void	my_printf_d(va_list list)
{
  my_put_nbr(va_arg(list, int));
}

void	my_printf_c(va_list list)
{
  my_putchar(va_arg(list, int));
}
