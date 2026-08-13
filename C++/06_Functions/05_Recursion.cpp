/*
 * LESSON: Recursion - my first lesson on a function that calls itself.
 * Idea: solve a big problem by solving a smaller version of the SAME
 * problem. factorial(n) = n * factorial(n-1).
 *
 * Every recursion needs TWO things:
 *   1. BASE CASE  - a situation where the answer is known directly and
 *                   the function returns WITHOUT calling itself. This
 *                   stops the chain (without it I get infinite recursion
 *                   and the program crashes).
 *   2. RECURSIVE CASE - the function calls itself with a smaller input,
 *                   getting closer to the base case every time.
 *
 * HOW THE CALL STACK WORKS: each call is "paused" on a stack while the
 * next call runs. factorial(5) calls factorial(4), which calls
 * factorial(3)... down to factorial(0)=1. Then the calls UNWIND from
 * the bottom up, multiplying the results: 1*1*2*3*4*5 = 120.
 */

#include <iostream>
using namespace std;

int factorial(int n)
{
    // BASE CASE: 0! and 1! are both 1 by definition.
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        // RECURSIVE CASE: n! = n * (n-1)!.
        // n*=factorial(n-1) multiplies n by the factorial of n-1
        // (n *= x means n = n * x). This self-call is the recursion.
        return n*=factorial(n-1);
    }

    // Unreachable here (both branches above return), kept for clarity.
    return 0;
}

int main()
{
    // Trace: factorial(5) = 5 * factorial(4)
    //      = 5 * 4 * factorial(3) = ... = 5*4*3*2*1 = 120.
    cout << factorial(5) << endl;
}