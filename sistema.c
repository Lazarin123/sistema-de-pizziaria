#include <stdio.h>

int main() {
    int tamanho;

    printf("(1)-Pequena (2)-Media (3)-Grande\n");
    printf("Qual tamanho deseja? \n");
    scanf("%d", &tamanho);

    int modelosabor;
    printf("(1)-Inteira (2)-Meia a Meia\n");
    printf("Qual eh o modelo? \n");
    scanf("%d", &modelosabor);

    if (modelosabor == 1)
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
        int sabor1;
        printf("(1)-Mussarela\n");
        printf("(2)-Calabresa\n");
        printf("(3)-Portuguesa\n");
        printf("(4)-Franco C/ Catupry\n");
        printf("(5)-Peperoni\n");
        printf("Escolha o seu primeiro Sabor: \n");
        scanf("%d", &sabor1);

        int sabor2;
        printf("(1)-Mussarela\n");
        printf("(2)-Calabresa\n");
        printf("(3)-Portuguesa\n");
        printf("(4)-Franco C/ Catupry\n");
        printf("(5)-Peperoni\n");
        printf("Escolha o seu Segundo Sabor: \n");
        scanf("%d", &sabor2);
    }

    int borda;
    printf("(1)-Sim (2)-Nao\n");
    printf("Deseja adicionar borda de Catupry? \n");
    scanf("%d", &borda);


}