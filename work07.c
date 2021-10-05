#include <stdio.h>

int print_array(int array[], int length) {
    int i;
    printf("[ ");
    for (i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("]\n");

    return 0;
}

double average(int array[], int length) {
    int i;
    int sum = 0;
    for (i = 0; i < length; i++) {
        sum += array[i];
    }
    double average = sum/(1.0 * length);

    return average;
}

int copy(int a1[], int a2[], int length) {
    int i;
    for (i = 0; i < length; i++) {
        a2[i] = a1[i];
    }

    return 0;
}

int main() {
    int a[] = {1, 2, 3, 4};
    int a2[] = {3, 4, 56, 7};

    print_array(a, 4);
    double av = average(a, 4);
    printf("%f\n", av);

    print_array(a2, 4);
    av = average(a2, 4);
    printf("%f\n", av);

    copy(a, a2, 4);
    print_array(a, 4);
    print_array(a2, 4);

    return 0;
}
