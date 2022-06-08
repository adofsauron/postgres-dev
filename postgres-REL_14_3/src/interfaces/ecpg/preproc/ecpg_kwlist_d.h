/*-------------------------------------------------------------------------
 *
 * ecpg_kwlist_d.h
 *    List of keywords represented as a ScanKeywordList.
 *
 * Portions Copyright (c) 1996-2021, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * NOTES
 *  ******************************
 *  *** DO NOT EDIT THIS FILE! ***
 *  ******************************
 *
 *  It has been GENERATED by src/tools/gen_keywordlist.pl
 *
 *-------------------------------------------------------------------------
 */

#ifndef ECPG_KWLIST_D_H
#define ECPG_KWLIST_D_H

#include "common/kwlookup.h"

static const char ScanECPGKeywords_kw_string[] =
	"allocate\0"
	"autocommit\0"
	"bool\0"
	"break\0"
	"cardinality\0"
	"connect\0"
	"count\0"
	"datetime_interval_code\0"
	"datetime_interval_precision\0"
	"describe\0"
	"descriptor\0"
	"disconnect\0"
	"found\0"
	"free\0"
	"get\0"
	"go\0"
	"goto\0"
	"identified\0"
	"indicator\0"
	"key_member\0"
	"length\0"
	"long\0"
	"nullable\0"
	"octet_length\0"
	"open\0"
	"output\0"
	"reference\0"
	"returned_length\0"
	"returned_octet_length\0"
	"scale\0"
	"section\0"
	"short\0"
	"signed\0"
	"sqlerror\0"
	"sqlprint\0"
	"sqlwarning\0"
	"stop\0"
	"struct\0"
	"unsigned\0"
	"var\0"
	"whenever";

static const uint16 ScanECPGKeywords_kw_offsets[] = {
	0,
	9,
	20,
	25,
	31,
	43,
	51,
	57,
	80,
	108,
	117,
	128,
	139,
	145,
	150,
	154,
	157,
	162,
	173,
	183,
	194,
	201,
	206,
	215,
	228,
	233,
	240,
	250,
	266,
	288,
	294,
	302,
	308,
	315,
	324,
	333,
	344,
	349,
	356,
	365,
	369,
};

#define SCANECPGKEYWORDS_NUM_KEYWORDS 41

static int
ScanECPGKeywords_hash_func(const void *key, size_t keylen)
{
	static const int8 h[83] = {
		-10,   -4,    127,   0,     32,    27,    127,   -10,
		127,   37,    -28,   127,   3,     31,    127,   -17,
		127,   127,   -3,    127,   127,   0,     15,    127,
		127,   34,    127,   127,   127,   24,    41,    3,
		34,    -24,   127,   127,   0,     127,   127,   127,
		16,    0,     33,    127,   127,   127,   14,    127,
		127,   18,    0,     127,   127,   -4,    -20,   21,
		0,     0,     30,    5,     0,     127,   23,    6,
		127,   -14,   127,   127,   54,    0,     -6,    0,
		0,     -2,    36,    12,    0,     -12,   41,    8,
		19,    127,   11
	};

	const unsigned char *k = (const unsigned char *) key;
	uint32		a = 0;
	uint32		b = 1;

	while (keylen--)
	{
		unsigned char c = *k++ | 0x20;

		a = a * 257 + c;
		b = b * 17 + c;
	}
	return h[a % 83] + h[b % 83];
}

static const ScanKeywordList ScanECPGKeywords = {
	ScanECPGKeywords_kw_string,
	ScanECPGKeywords_kw_offsets,
	ScanECPGKeywords_hash_func,
	SCANECPGKEYWORDS_NUM_KEYWORDS,
	27
};

#endif							/* ECPG_KWLIST_D_H */
