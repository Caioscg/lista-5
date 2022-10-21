#include <stdio.h>
 
typedef struct {
    int a1, b1, a2, b2, A, B;
    double R1, R2;
} tRacional;
 
int MDC(int x, int y);
 
int soma(tRacional r1);
 
int sub(tRacional r1);
 
tRacional mult(tRacional r1);
 
tRacional div(tRacional r1);
 
tRacional reduzFracao(tRacional num);
 
int main () {
 
    tRacional termo;
    char s;
 
    while (scanf("%d %d %c %d %d", &termo.a1, &termo.b1, &s, &termo.a2, &termo.b2)!=EOF) {
        if (termo.b1==0 || termo.b2==0) return 0;
        if(s=='+') {
            termo.B=MDC(termo.b1, termo.b2);
            termo.A=soma(termo);
            termo=reduzFracao(termo);
            printf("%d %d\n", termo.A, termo.B);
        }
        if(s=='-') {
            termo.B=MDC(termo.b1, termo.b2);
            termo.A=sub(termo);
            termo=reduzFracao(termo);
            printf("%d %d\n", termo.A, termo.B);
        }
        if(s=='*') {
            termo=mult(termo);
            termo=reduzFracao(termo);
            printf("%d %d\n", termo.A, termo.B);
        }
        if(s=='/') {
            termo=div(termo);
            termo=reduzFracao(termo);
            printf("%d %d\n", termo.A, termo.B);
        }
 
    }
 
    return 0;
}
 
int MDC(int x, int y) {
    int R=x;
    R=x*y;
    return R;
}
 
int soma(tRacional r1) {
    int r2;
 
    r2=(r1.a1*r1.b2)+(r1.a2*r1.b1);
    return r2;
}
 
int sub(tRacional r1) {
    int r2;
 
    r2=(r1.a1*r1.b2)-(r1.a2*r1.b1);
    return r2;
}
 
tRacional mult(tRacional r1) {
    tRacional r2;
 
    r2.A=r1.a1*r1.a2;
    r2.B=r1.b1*r1.b2;
    return r2;
}
 
tRacional div(tRacional r1){
    tRacional r2;
 
    r2.A=r1.a1*r1.b2;
    r2.B=r1.b1*r1.a2;
    return r2;
}
 
tRacional reduzFracao(tRacional num) {
    int k=2;
 
    while(k<300) {
        if (num.A%k==0 && num.B%k==0) {
            num.A=num.A/k;
            num.B=num.B/k;
            k--;
        }
        k++;
    }
    return num;
}