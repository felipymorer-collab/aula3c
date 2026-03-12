#include <stdio.h>
int main() {
    float nota;
    
    printf("digite a nota do aluno ");
scanf("%f", &nota);

if( nota >= 6.0 ) {
printf("ele foi aprovado");
}
if( nota < 6.0 ) {
printf("ele foi reprovado");
}
return 0;
}