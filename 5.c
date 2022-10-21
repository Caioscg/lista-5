#include <stdio.h>
 
typedef struct {
    int cod;
    double preco;
    char nome[100];
} facul;
 
typedef struct {
    int cod;
    int parc;
    char nome[500];
} alu;
 
int main () {
 
    int n, i=0, m, k=0;
    facul faculdade[100];
    alu aluno[500];
    scanf("%d%*c", &n);
    while (i<n) {
        scanf("%d%*c %lf%*c %[^\n]%*c", &faculdade[i].cod, &faculdade[i].preco, faculdade[i].nome);
        i++;
    }
    scanf("%d%*c", &m);
    while (k<m) {
        scanf("%[^\n]%*c %d%*c %d%*c", aluno[k].nome, &aluno[k].cod, &aluno[k].parc);
        for (i=0; i<n; i++) {
            if(aluno[k].cod==faculdade[i].cod) 
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n", aluno[k].nome, faculdade[i].nome, aluno[k].parc, faculdade[i].preco, aluno[k].parc*faculdade[i].preco);
        }
        k++;
    }
 
    return 0;
}