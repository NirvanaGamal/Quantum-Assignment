#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//part1
//toy Post-Quantum Public-Key Cryptosystem
#define TK_K 3
#define TK_N 4
//toy.c
#define TK_Q 97
#define NEG(X) (TK_Q - (X))
void toy_test();
int toy_dec(const short* s, const short* u, const short* v);
void toy_enc(const short* A, const short* t, int plain, short* u, short* v);
void toy_gen(short* A, short* t, short* s);
static void toy_add(short* dst, const short* v1, const short* v2, int count, int v2_neg);
static void toy_dot(short* dst, const short* v1, const short* v2);
static void toy_mulmv(short* dst, const short* mat, const short* vec);
static void toy_mulmTv(short* dst, const short* mat, const short* vec);
static void toy_polmul_naive(short* dst, const short* a,const short* b, int add_to_dst );
static void toy_fill_small(short* buf, int n);
