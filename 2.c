#include <stdio.h>


unsigned rightrot(unsigned x, unsigned n);

int main()
{
    printf("%u\n", rightrot(5000, 3));
    return 0;
}

/*rightrot:  rotates x to the right by n bit positions */
unsigned rightrot(unsigned x, unsigned n)
{
    while (n > 0) {
        if(x & 1)   /* rightmost bit of x is 1 */
            x = (x >> 1) | ~(~0U >> 1);
        else        /* rightmost bit of x is 0 */
            x = x >> 1;
        --n;
    }
    return x;
}