#ifndef RFB_H
#define RFB_H

#define int8	unsigned long long int

// verifica se um número de CPF é válido
int cpf_valido(int8 n);

// adiciona dígitos verificadores ao número de CPF
int8 incluir_dv_cpf(int8 n);

#endif /* RFB_H */

