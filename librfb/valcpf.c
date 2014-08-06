#include <stdio.h>
#include <stdlib.h>

#include "rfb.h"

int
main(int argc, char *argv[])
{
  int i;
  int8 n = 37925826606;

  printf("%llu (%d bytes)\n", n, sizeof(n));

  printf("válido? %d\n", cpf_valido(n));
  printf("válido? %d\n", cpf_valido(37925826605));

  for (i = 1; i < argc; i++)
    printf("%s\n", argv[i]);

  return 0;
}
