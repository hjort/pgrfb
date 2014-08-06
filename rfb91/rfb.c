/*-------------------------------------------------------------------------
 *
 * rfb.h
 *	  Suporte a funções de cadastros da RFB no PostgreSQL
 *
 * Author: Rodrigo Hjort <rodrigo.hjort@gmail.com>
 *
 *-------------------------------------------------------------------------
 */

#include "postgres.h"

#include "fmgr.h"
#include "utils/builtins.h"

#include "../librfb/rfb.h"
#include "rfb.h"

PG_MODULE_MAGIC;

PG_FUNCTION_INFO_V1(pg_cpf_valido);
Datum
pg_cpf_valido(PG_FUNCTION_ARGS)
{
	int8 n = PG_GETARG_INT8(0);
	int v = cpf_valido(n);

	PG_RETURN_BOOL(v == 1);
}

