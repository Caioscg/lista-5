#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct {
    double preco;
    char fruta[50];
} lista;
 
typedef struct {
    int num;
    char fruta[50];
} qnt;
 
int main () {
 
    int n, i=0, m, p, k=0, c=0;
    double VALOR=0;
    lista L[50];
    qnt quantidade[50];
    scanf("%d", &n);
    while (i<n) {
        scanf("%d", &m);
        i++;
        while (k<m) {
            scanf("%s %lf", L[k].fruta, &L[k].preco);
            k++;
        }
        scanf("%d", &p);
        while (c<p) {
            scanf("%s %d", quantidade[c].fruta, &quantidade[c].num);
            c++;
        }
        for (k=0; k<m; k++) {
            for (c=0; c<p; c++) {
                if (strcmp(L[k].fruta, quantidade[c].fruta)==0) 
                    VALOR=VALOR+(L[k].preco*quantidade[c].num);
            }
        }
        printf("R$ %.2lf\n", VALOR);
        k=0; c=0, VALOR=0;
    }
 
    return 0;
}