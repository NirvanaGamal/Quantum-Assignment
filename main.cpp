#include "toy.h"
int main()
{
   
    short A[TK_K * TK_K * TK_N], t[TK_K * TK_N]; //public key
    short s[TK_K * TK_N]; //private key
    toy_gen(A, t, s);
   
    for (int msg = 0; msg < 16; ++msg)
    {
        short u[TK_K * TK_N], v[TK_N]; //ciphertext
        toy_enc(A, t, msg, u, v);
        short m2 = toy_dec(s, u, v);
        printf("plain text: %2d dycrepted: %2d     plaintext in bin:", msg, m2);
        print_bin(msg, TK_N);
        printf("  dycrypted text in bin: ");
        print_bin(m2, TK_N);
        printf("  difference:");
        print_bin(msg ^ m2, TK_N);
        printf("\n");
    }

    return 0;
}