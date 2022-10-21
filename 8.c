#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
typedef struct {
    int cod;
    double preco;
    char *nome;
} facul;
 
typedef struct {
    int cod;
    int parc;
    char *nome;
} alu;
 
int main () {
 
    int n, i=0, m, k=0, tam=0;
    facul *faculdade;
    alu *aluno;
    scanf("%d%*c", &n);
    faculdade=(facul *)calloc(n, sizeof(facul));
    while (i<n) {
        faculdade[i].nome=(char *)malloc(1000*sizeof(char));
        scanf("%d%*c %lf%*c %[^\n]%*c", &faculdade[i].cod, &faculdade[i].preco, faculdade[i].nome);
        tam=strlen(faculdade[i].nome);
        faculdade[i].nome=(char *)realloc(faculdade[i].nome, (tam+1));
        i++;
    }
    i=0;
    scanf("%d%*c", &m);
    aluno=(alu *)calloc(m, sizeof(alu));
    while (k<m) {
        aluno[k].nome=(char *)malloc(1000*sizeof(char));
        scanf("%[^\n]%*c %d%*c %d%*c", aluno[k].nome, &aluno[k].cod, &aluno[k].parc);
        tam=strlen(aluno[k].nome);
        aluno[k].nome=(char *)realloc(aluno[k].nome, (tam+1));
        k++;
    }
    for(k=0;k<m;k++) {
        for (i=0; i<n; i++) {
            if(aluno[k].cod==faculdade[i].cod) 
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n", aluno[k].nome, faculdade[i].nome, aluno[k].parc, faculdade[i].preco, aluno[k].parc*faculdade[i].preco);
        }
    }
    for(k=0; k<m; k++) free(aluno[k].nome);
    for(i=0; i<n; i++) free(faculdade[i].nome);
 
    return 0;
}