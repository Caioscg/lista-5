#include <stdio.h>
#include <math.h>
 
typedef struct {
  double u, x, y, z;
} ponto;
 
int main () {
 
  int n, i=0;
  double D;
  scanf("%d", &n);
  ponto A[n];
  scanf("%lf%lf%lf%lf", &A[i].u, &A[i].x, &A[i].y, &A[i].z);
  i++;
  while (i<n) {
    scanf("%lf%lf%lf%lf", &A[i].u, &A[i].x, &A[i].y, &A[i].z);
    D=sqrt(pow(A[i-1].u-A[i].u, 2)+pow(A[i-1].x-A[i].x, 2)+pow(A[i-1].y-A[i].y, 2)+pow(A[i-1].z-A[i].z, 2));
    printf("%.2lf\n", D);
    i++;
  }
 
 
  return 0;
}