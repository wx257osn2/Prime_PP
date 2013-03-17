#if !(N%2)
#define PRIME
#else
#if !(N%3)
#define PRIME
#else
#if !(N%5)
#define PRIME
#else
#if !(N%7)
#define PRIME
#else
#if PRIMECHECK(N)
#define PRIME STR(N) ", "
#else
#define PRIME
#endif
#endif
#endif
#endif
#endif
