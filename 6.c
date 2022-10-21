#include <stdio.h>
 
typedef struct {
  int dia, mes, ano, mat;
  char name[200];
} data;
 
int ComparaDataNasc (data aluno1, data aluno2);
 
int main () {
 
  int i=0, n, r, j=0, k=0; 
 
  scanf("%d%*c", &n);
  data aluno[n], aux[n];
  while (i<n) {
    scanf("%d%*c %d%*c %d%*c %d%*c %[^\n]%*c", &aluno[i].mat, &aluno[i].dia, &aluno[i].mes, &aluno[i].ano, aluno[i].name);
    i++;
  } i=0;
  while (i<n) {
    while (j<n) {
      if (j!=i) {
        r=ComparaDataNasc (aluno[i], aluno[j]);
        k=k+r;
      }  
      j++;
    }
    aux[n-1-k]=aluno[i];
    j=0;
    i++;
    k=0;
  }
  for (i=0; i<n; i++) {
    printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", aux[i].mat, aux[i].name, aux[i].dia, aux[i].mes, aux[i].ano);
  }
 
  return 0;
}
 
int ComparaDataNasc (data aluno1, data aluno2) {
  
  if (aluno1.ano>aluno2.ano) return 1;
  else if (aluno1.ano<aluno2.ano) return 0;
  else {
    if (aluno1.mes>aluno2.mes) return 1;
    else if (aluno1.mes<aluno2.mes) return 0;
    else {
      if (aluno1.dia>aluno2.dia) return 1;
      else if (aluno1.dia<aluno2.dia) return 0;
    }
  }
}