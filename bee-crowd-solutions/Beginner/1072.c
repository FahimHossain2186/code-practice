#include <stdio.h>

int main() {
    int n, x, in = 0, out = 0;

    scanf("%d", &n);  // Read the number of test cases

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);  // Read each integer
        if (x >= 10 && x <= 20) {
            in++;
        } else {
            out++;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
