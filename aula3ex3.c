#include <stdio.h>
int main() {
    float nota;
    
    printf("digite a nota do aluno ");
scanf("%f", &nota);

if( nota >= 9.0 ) {
printf("ele tirou A");
}
if( nota >= 8.0 ) {
printf("ele tirou B");
}
if( nota >= 7.0 ) {
printf("ele tirou C");
}
if( nota >= 6.0 ) {
printf("ele tirou D");
}
if( nota < 6.0 ) {
printf("ele tirou E");
}
return 0;
}