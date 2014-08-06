/*-------------------------------------------------------------------------
 *
 * rfb.h
 *	  Suporte a funções de cadastros da RFB no PostgreSQL
 *
 * Author: Rodrigo Hjort <rodrigo.hjort@gmail.com>
 *
 *-------------------------------------------------------------------------
 */

#ifndef RFB_H
#define RFB_H

#include "fmgr.h"

extern Datum cpf_valido(PG_FUNCTION_ARGS);

#endif   /* RFB_H */
