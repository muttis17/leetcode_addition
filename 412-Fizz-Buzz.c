/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    char** ans = (char**)malloc(n * sizeof(char*));
    for (int i = 1; i <= n; i++) {
        ans[i - 1] = (char*)malloc(10 * sizeof(char));
        if (i % 3 == 0 && i % 5 == 0) {
            sprintf(ans[i - 1], "FizzBuzz");
        } else if (i % 3 == 0) {
            sprintf(ans[i - 1], "Fizz");
        } else if (i % 5 == 0) {
            sprintf(ans[i - 1], "Buzz");
        } else {
            sprintf(ans[i - 1], "%d", i);
        }
    }
    return ans;
}