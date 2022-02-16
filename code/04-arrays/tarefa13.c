#include <stdio.h>
#include <math.h>
#define MAX_N 100

double avg(int vec[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += vec[i];
    }

    return (double) sum / n;
} 

double var(int vec[], int n, int mean) {
    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum += (double) pow(vec[i] - mean, 2);
    }

    return (double) sum / n;
}

int main(int argc, char *argv[]) {

    int n;

    scanf("%d", &n);
    int vec[MAX_N];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
    }

    double mean = avg(vec, n);
    double variance = var(vec, n, mean);

    printf("%f \n", mean);
    printf("%f \n", variance);

	return 0;
}