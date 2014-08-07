/*-------------------------------------------------------------------------
 *
 * pgrfb.c
 *	  Suporte a funções de cadastros da RFB no PostgreSQL
 *
 * Author: Rodrigo Hjort <rodrigo.hjort@gmail.com>
 *
 *-------------------------------------------------------------------------
 */

#include "postgres.h"

#include "fmgr.h"
#include "utils/builtins.h"

#include "rfb.h"

PG_MODULE_MAGIC;

PG_FUNCTION_INFO_V1(pg_cpf_valido);
Datum pg_cpf_valido(PG_FUNCTION_ARGS);

PG_FUNCTION_INFO_V1(pg_incluir_dv_cpf);
Datum pg_incluir_dv_cpf(PG_FUNCTION_ARGS);

Datum
pg_cpf_valido(PG_FUNCTION_ARGS)
{
	int8 n = PG_GETARG_INT64(0);
	int v = cpf_valido(n);

	PG_RETURN_BOOL(v == 1);
}

Datum
pg_incluir_dv_cpf(PG_FUNCTION_ARGS)
{
	int8 n = PG_GETARG_INT64(0);
	int8 v = incluir_dv_cpf(n);

	PG_RETURN_INT64(v);
}

