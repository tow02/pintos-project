#define f (1<<14)

#define INT_TO_FIXED_POINT(n) (n*f)
#define FIXED_POINT_TO_INT_ZERO(x) (x/f)
#define FIXED_POINT_TO_INT_NEAREST(x) (x >= 0 ? (x+f/2)/f  \
                                      : (x-f/2)/f)
#define ADD_FIX(x, y) (x + y)
#define SUBTRACT_FIX(x, y) (x - y)
#define ADD_MIX(x, n) (x+(n*f))
#define SUBTRACT_MIX(x, n) (x-(n*f))
#define MULTIPLY_FIX(x, y) (((int64_t) x) * y / f)
#define MULTIPLY_MIX(x, n) (x*n)
#define DIVIDE_FIX(x, y) (((int64_t) x) * f / y)
#define DIVIDE_MIX(x, n) (x/n)
