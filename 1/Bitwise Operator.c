#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int and = 0, or = 0, xor = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int res_and = i & j;
            int res_or = i | j;
            int res_xor = i ^ j;

            if (res_and < k && res_and > and)
                and = res_and;

            if (res_or < k && res_or > or)
                or = res_or;

            if (res_xor < k && res_xor > xor)
                xor = res_xor;
        }
    }

    printf("%d\n%d\n%d\n", and, or, xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
