/*
** function1.c for  in /Users/taing_k/Desktop/myprintF/taing_k/include
** 
** Made by TAING Kevin
** Login   <taing_k@etna-alternance.net>
** 
** Started on  Mon Apr  4 11:22:17 2016 TAING Kevin
** Last update Fri Apr  8 09:12:06 2016 TAING Kevin
*/

#include "libmy.h"
#include "function.h"

void	ptr(va_list list, char c)
{
  void	(*ptr[9])(va_list);
  char*	taille;
  int	i;

  taille = "sidcouxX%";
  ptr[0] = &my_printf_s;
  ptr[1] = &my_printf_i;
  ptr[2] = &my_printf_d;
  ptr[3] = &my_printf_c;
  ptr[4] = &my_printf_o;
  ptr[5] = &my_printf_u;
  ptr[6] = &my_printf_x;
  ptr[7] = &my_printf_X;
  ptr[8] = &my_printf_modulo;
  for (i = 0; taille[i] != '\0'; i++)
    {
      if (c == taille[i])
	(*ptr[i])(list);
    }
}

int	my_printf(char* str, ...)
{
  va_list	list;
  int	i;

  va_start(list, str);
  for (i = 0; i < my_strlen(str); i++)
    {
      if (str[i] == '%')
	{
	  i++;
	  ptr(list, str[i]);
	}
      else
	my_putchar(str[i]);
    }
  va_end(list);
  return (0);
}

void	my_printf_o(va_list list)
{
  octal(va_arg(list, unsigned int));
}

void	octal(int n)
{
  if (n != 0)
    {
      octal(n / 8);
      my_put_nbrU(n % 8);
    }
}
