#include <stdio.h> //Biblioteca principal

int main() { //Função principal que compila o código

    float num1; //Atributo/Váriavel número decimal
    float num2;

    int escolha; //Atributo/Variável número inteiro

    printf("Escolha uma operação:\n");
    printf("1. Somar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");

    printf("Digite a opção: "); //Printar na tela
    scanf("%d", &escolha); //Ler entrada do teclado - Tipo do dado, váriavel

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    if (escolha == 1) { //Soma  
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
    }
    else if (escolha == 2) { //Subtrair
        printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
    }
    else if (escolha == 3) { //Multiplicação
        printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
    }
    else { //Divisão
        if (num2 != 0) //!= significa "diferente"
        {
            printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
        } 
            else {
            printf("Opção inválida");
        }
    }
    return 0;
}   