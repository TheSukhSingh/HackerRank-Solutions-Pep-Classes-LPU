#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    char c;
    float f;
    double d;

    // Read input values
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

    // Print the values
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%.3f\n", f);
    printf("%.9lf\n", d);
    
    return 0;
}