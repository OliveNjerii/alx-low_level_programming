#ifndef _3_CALC_H_
#define _3_CALC_H_

#include <stddef.h>

/* Data structure to hold operator and function */
typedef struct op
{
    char *op;
    int (*f)(int, int);
} op_t;

/* Function prototypes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* _3_CALC_H_ */

