#include <stdio.h>
#include <stdlib.h>
 
typedef struct {
    int n, d;
} fracao;
 
int main () {
 
    int i=0, t=0, n, m, c=0, k=0, tam=0;
    char e;
    fracao f[50];
    scanf("%d", &n);
    while (i<n) {
        i++;
        while (e!='\n') {
            scanf("%d/%d%c", &f[tam].n, &f[tam].d, &e);
            tam++;
        }
        printf("Caso de teste %d\n", i);
        for (c=0; c<tam; c++) {
            for (t=c+1; t<tam; t++) {
                if (((double)f[c].n/f[c].d)==((double)f[t].n/f[t].d)) {
                    printf("%d/%d equivalente a %d/%d\n", f[c].n, f[c].d, f[t].n, f[t].d);
                    k++;
                }
            }
        }
        if (k==0) printf("Nao ha fracoes equivalentes na sequencia\n");
        k=0; c=0; t=0; e=' '; tam=0;
    }
 
    return 0;
}