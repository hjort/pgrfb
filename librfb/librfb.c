#include <stdio.h>
#include <stdlib.h>

#include "rfb.h"

#define int8	unsigned long long int

// verifica se um número de CPF é válido
int
cpf_valido(int8 n)
{
  int dv, d10, d11;
  int v1, v2, i, d;
  int8 r;

  // extrair dígitos verificadores
  dv = n % 100;
  d10 = dv / 10;
  d11 = dv % 10;

  // calcular penúltimo dígito
  v1 = 0;
  r = n / 100;
  i = 9;
  do {
    d = r % 10;
    r /= 10;
    v1 += i-- * d;
  } while (r > 0 && i > 0);
  v1 = (v1 % 11) % 10;
  if (v1 != d10)
    return 0;

  // calcular último dígito
  v2 = 0;
  r = n / 100;
  i = 8;
  do {
    d = r % 10;
    r /= 10;
    v2 += i-- * d;
  } while (r > 0 && i > 0);
  v2 += 9 * v1;
  v2 = (v2 % 11) % 10;
  if (v2 != d11)
    return 0;

  return 1;
}

// adiciona dígitos verificadores ao número de CPF
int8
incluir_dv_cpf(int8 n)
{
  int v1, v2, i, d;
  int8 r;

  // calcular penúltimo dígito
  v1 = 0;
  r = n;
  i = 9;
  do {
    d = r % 10;
    r /= 10;
    v1 += i-- * d;
  } while (r > 0 && i > 0);
  v1 = (v1 % 11) % 10;

  // calcular último dígito
  v2 = 0;
  r = n;
  i = 8;
  do {
    d = r % 10;
    r /= 10;
    v2 += i-- * d;
  } while (r > 0 && i > 0);
  v2 += 9 * v1;
  v2 = (v2 % 11) % 10;

  // retornar CPF com dígitos
  return 100 * n + 10 * v1 + v2;
}
