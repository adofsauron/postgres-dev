/*
 * src/include/utils/cash.h
 *
 *
 * cash.h
 * Written by D'Arcy J.M. Cain
 *
 * Functions to allow input and output of money normally but store
 *	and handle it as 64 bit integer.
 */

#ifndef CASH_H
#define CASH_H

#include "fmgr.h"

typedef int64 Cash;

/* Cash is pass-by-reference if and only if int64 is */
#define DatumGetCash(X)		((Cash) DatumGetInt64(X))
#define CashGetDatum(X)		Int64GetDatum(X)
#define PG_GETARG_CASH(n)	DatumGetCash(PG_GETARG_DATUM(n))
#define PG_RETURN_CASH(x)	return CashGetDatum(x)

#endif							/* CASH_H */
