#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int a, b, c;
    printf("\nVamos ver se o tri�ngulo � equil�tero\n");
    printf("\nQual o tamanho dos lados?\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a == b && b == c){
        printf("Tri�ngulo equil�tero\n");
    }else{
        printf("N�o � equil�tero.\n");
    }   
    system("pause");
    system("cls");
}    