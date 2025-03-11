#include <stdio.h>

int main() {

    int size, count = 0;

    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
 

            if (arr[i] == -1) {
                count++;
            }
    }

    printf("Element -1 occurs %d times\n", count);

    for (int i = 0; i < size; i++) {

        if (arr[i] == -1) continue;

        count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
        printf("Element %d occurs %d times\n", arr[i], count);
    }

    return 0;
}
