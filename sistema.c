#include <stdio.h>

int main() {
    int tamanho;

    printf("(1)-Pequena (2)-Média (3)-Grande");
    printf("Qual tamanho deseja? \n");
    scanf("%d", &tamanho);

    char qtdsabor;
    printf("(1)-Inteira (2)-Meia a Meia");
    printf("Qual é o modelo? ");
    scanf("%c", &qtdsabor);

    if (qtdsabor == 1)
    {
        int sabor;
        printf("(1)-Mussarela\n");
        printf("(2)-Calabresa\n");
        printf("(3)-Portuguesa\n");
        printf("(4)-Franco C/ Catupry\n");
        printf("(5)-Peperoni\n");
        printf("Escolha seu Sabor: \n");
        scanf("%d", &sabor);
    } else {
        int sabor;
        printf("(1)-Mussarela\n");
        printf("(2)-Calabresa\n");
        printf("(3)-Portuguesa\n");
        printf("(4)-Franco C/ Catupry\n");
        printf("(5)-Peperoni\n");
        printf("Escolha seu Sabor: \n");
        scanf("%d", &sabor);
    }
    

}