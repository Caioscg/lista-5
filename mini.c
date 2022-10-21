#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct polynomio {
	char id[1000];       // string com o nome do polinômio
	int p;          // grau do polinômio
	double coef[1000];   // vetor de coeficientes do polinômio
} Poly;

Poly soma(Poly p1, Poly p2, int n1, int n2);

Poly sub(Poly p1, Poly p2, int n1, int n2);

void separa_conta(char *s1, char *s2, char *s3, int indiceOp, int tamanho);

int main() {

    Poly *poly, polyResultado;
    int k, i=0, c, t, n, pot, maiorExp=0, qntOp, iOp;
    char Enter;
    char auxCoef[100], opT[200];
    char op, poly1[100], poly2[100];
    int verifyPrint=0;
    scanf("%d%*c", &n);
    poly=(Poly *)malloc(n*sizeof(Poly));
    while(i<n) {       
        scanf("%[^:]%*c", poly[i].id);
        while(1) {
            scanf("%c", &Enter);
            if(Enter=='\n') break;
            scanf("%[^x]%*c%*c%d", auxCoef, &pot);
            poly[i].coef[pot]=atof(auxCoef);
            if(Enter=='-') poly[i].coef[pot]=-poly[i].coef[pot];
            memset(auxCoef, 0, 100);
            if(pot>maiorExp) maiorExp=pot;
        }
        poly[i].p=maiorExp;
        maiorExp=0;
        i++;
    }
    i=0;
    scanf("%d%*c", &qntOp);
    while(i<qntOp) {
        for(k=0; opT[k]!='\n'; k++) {
            scanf("%c", &opT[k]);
            if(opT[k]=='\n') {
                opT[k]='\0';
                break;
            }
            if(opT[k]=='-' || opT[k]=='+') {
                op=opT[k];
                iOp=k;
            }
        }
        separa_conta(poly1, poly2, opT, iOp, (k-1));
        for(k=0; k<n; k++) {
            if(strcmp(poly[k].id, poly1)==0) break;
        }
        for(t=0; t<n; t++) {
            if(strcmp(poly[t].id, poly2)==0) break;
        }
        if(op=='+') polyResultado=soma(poly[k], poly[t], poly[k].p, poly[t].p);
        if(op=='-') polyResultado=sub(poly[k], poly[t], poly[k].p, poly[t].p);
        if(poly[k].p>poly[t].p) {
            for(c=0; c<=poly[k].p; c++) {
                if(polyResultado.coef[c]!=0) {
                    if(polyResultado.coef[c]>0 && verifyPrint>0) printf("+");
                    printf("%.2lfx^%d", polyResultado.coef[c], c);
                    verifyPrint++;
                }
            }
        } else {
            for(c=0; c<=poly[t].p; c++) {
                if(polyResultado.coef[c]!=0) {
                    if(polyResultado.coef[c]>0 && verifyPrint>0) printf("+");
                    printf("%.2lfx^%d", polyResultado.coef[c], c);
                    verifyPrint++;
                }
            }
        }
        printf("\n");
        verifyPrint=0;
        memset(poly1, '\0', 100);
        memset(poly2, '\0', 100);
        memset(opT, '\0', 200);
        i++;
    }
    
    return 0;
}

Poly soma(Poly p1, Poly p2, int n1, int n2) {
    int i;
    Poly p3;
    if(n1>n2) {
        for(i=0; i<=n1; i++) {
            p3.coef[i]=p1.coef[i]+p2.coef[i];
        }
    } else {
        for(i=0; i<=n2; i++) {
            p3.coef[i]=p1.coef[i]+p2.coef[i];
        }
    }
    return p3;
}

Poly sub(Poly p1, Poly p2, int n1, int n2) {
    int i;
    Poly p3;
    if(n1>n2) {
        for(i=0; i<=n1; i++) {
            p3.coef[i]=p1.coef[i]-p2.coef[i];
        }
    } else {
        for(i=0; i<=n2; i++) {
            p3.coef[i]=p1.coef[i]-p2.coef[i];
        }
    }
    return p3;
}

void separa_conta(char *s1, char *s2, char *s3, int indiceOp, int tamanho) {
    int i=0, c=0;
    while (i<=tamanho) {
        if(i<indiceOp && s3[i]!=' ') s1[i]=s3[i];
        else if(i>indiceOp && s3[i]!=' ') {
            s2[c]=s3[i];
            c++;
        }
        i++;
    }
}