/*
** main.c for  in /Users/taing_k/Desktop/myprintF/taing_k
** 
** Made by TAING Kevin
** Login   <taing_k@etna-alternance.net>
** 
** Started on  Mon Apr  4 11:21:58 2016 TAING Kevin
** Last update Fri Apr  8 08:58:15 2016 TAING Kevin
*/

#include "include/libmy.h"
#include "include/function.h"

int	main(void)
{
  my_printf("1 - une chaine\n");
  my_printf("2 - %s\n", "une autre chaine");
  my_printf("3 - %i\n", 42);
  my_printf("4 - %s %d %s%c", "avec", 4, "parametres", '\n');
  my_printf("1 - %o\n", 42);
  my_printf("2 - %u\n", (unsigned int)4200000000);
  my_printf("3 - %x\n", 42);
  my_printf("4 - %X\n", 42);
  my_printf("5 - %d%%\n", 42);
  return (0);
}
