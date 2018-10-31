#ifndef MACROS
#define MACROS

//function like macro
#define ADD(ONE, TWO) (ONE + TWO)

//object like macro
#define PI 3.14159265

//macro arguments
#define foo(x) x, "x"

//stringizing
#define WARN_IF(EXP) \
do { if (EXP) \
        fprintf (stderr, "Warning: " #EXP "\n"); } \
while (0)

#endif