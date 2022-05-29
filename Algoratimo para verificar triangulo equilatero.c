#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int a, b, c;
    printf("\nVamos ver se o triângulo é equilátero\n");
    printf("\nQual o tamanho dos lados?\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a == b && b == c){
        printf("Triângulo equilátero\n");
    }else{
        printf("Não é equilátero.\n");
    }   
    system("pause");
    system("cls");
}    