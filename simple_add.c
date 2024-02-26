#include <stdio.h>

void vecAdd(float* A_h, float* B_h, float* C_h, int n) {
    for (int i=0; i < n; ++i) {
        C_h[i] = A_h[i] + B_h[i];
    }
}

void printArr(float* Vec, int size) {
    for (int i = 0; i < size ; ++i) {
        printf("%.2f ", Vec[i]);
    }
    printf("%s", "\n");
}

void fillVec(float* Vec, int size, float x) {
    // printf("%lu\n",sizeof(Vec)/sizeof(Vec[1]));
    for (int i = 0; i < size ; ++i) {
        Vec[i] = x;
    }
}

int main() {

    int n = 4;

    float A_h[n];
    float B_h[n];
    float C_h[n];
    
    fillVec(A_h, n, 1.);
    fillVec(B_h, n, 2.);
    printArr(A_h, n);
    printArr(B_h, n);
    printArr(C_h, n);

    vecAdd(A_h, B_h, C_h, n);
    printArr(C_h, n);

}