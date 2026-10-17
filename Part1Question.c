/* Question: Digit product
 * Return the product of the decimal digits. The single digit 0 has product 0. Domain: 0 <= n <= 999999999.
 * Complete only solve; write the answer to global result.
 * Use 10-20 nonblank code lines, excluding brace-only lines.
 */
#include <stdio.h>

long result;

void solve(long n)
{
    /* TODO: implement solve here. */
}

int main(void)
{
    int passed;
    passed = 0;
    result = -999999L;
    solve(0L);
    if (result == 0L) {
        passed = passed + 1;
        printf("Test 1: PASS\n");
    } else {
        printf("Test 1: FAIL (expected %ld, got %ld)\n", 0L, result);
    }
    result = -999999L;
    solve(7L);
    if (result == 7L) {
        passed = passed + 1;
        printf("Test 2: PASS\n");
    } else {
        printf("Test 2: FAIL (expected %ld, got %ld)\n", 7L, result);
    }
    result = -999999L;
    solve(234L);
    if (result == 24L) {
        passed = passed + 1;
        printf("Test 3: PASS\n");
    } else {
        printf("Test 3: FAIL (expected %ld, got %ld)\n", 24L, result);
    }
    result = -999999L;
    solve(105L);
    if (result == 0L) {
        passed = passed + 1;
        printf("Test 4: PASS\n");
    } else {
        printf("Test 4: FAIL (expected %ld, got %ld)\n", 0L, result);
    }
    result = -999999L;
    solve(1111L);
    if (result == 1L) {
        passed = passed + 1;
        printf("Test 5: PASS\n");
    } else {
        printf("Test 5: FAIL (expected %ld, got %ld)\n", 1L, result);
    }
    printf("Passed %d of 5 test cases (%d%%)\n", passed, passed * 20);
    return passed == 5 ? 0 : 1;
}
