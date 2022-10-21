#include <stdio.h>
#include <stdlib.h>
 
typedef struct {
    int n, d;
} fracao;
 
int main () {
 
    int i=0, t=0, n, m, c=0, k=0;
    fracao f[50];
    scanf("%d", &n);
    while (i<n) {
        scanf("%d", &m);
        i++;
        while (t<m) {
            scanf("%d/%d", &f[t].n, &f[t].d);
            t++;
        }
        printf("Caso de teste %d\n", i);
        for (c=0; c<m; c++) {
            for (t=c+1; t<m; t++) {
                if (((double)f[c].n/f[c].d)==((double)f[t].n/f[t].d)) {
                    printf("%d/%d equivalente a %d/%d\n", f[c].n, f[c].d, f[t].n, f[t].d);
                    k++;
                }
            }
        }
        if (k==0) printf("Nao ha fracoes equivalentes na sequencia\n");
        k=0; c=0; t=0;
    }
 
    return 0;
}