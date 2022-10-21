#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
typedef struct {
    double u, x, y, z;
} vetor;
 
int main () {
 
    int n, i=0, k=0, c=0, j=0, N;
    scanf("%d", &n);
    double A[n];
    vetor v[n];
    N=n;
    while (k<n) {
        scanf("%lf%lf%lf%lf", &v[k].u, &v[k].x, &v[k].y, &v[k].z);           
        A[k]=sqrt(pow(v[k].u, 2)+pow(v[k].x, 2)+pow(v[k].y, 2)+pow(v[k].z, 2));
        k++;
    }
    while (c<n) {
        for (k=0; k<n; k++) {
            if (A[c]<=A[k]) j++;
        }
        if (j==N) {
            printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", v[c].u, v[c].x, v[c].y, v[c].z, A[c]);
            N--;
            c=0;
        }
        else c++;
        j=0;
    }
 
    return 0;
}