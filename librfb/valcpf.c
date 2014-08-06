#include <stdio.h>
#include <stdlib.h>

#include "rfb.h"

int
main(int argc, char *argv[])
{
  int8 n = 0;
  int v = 0;

  if (argc == 2)
  {
    n = atoll(argv[1]);
    v = cpf_valido(n);
    printf("CPF %llu => %sválido\n", n, v ? "" : "in");
    return v;
  }

  printf("Sintaxe: %s <CPF>\n", argv[0]);
  return 2;
}

