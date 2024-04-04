#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//estrutura Ponto
typedef struct ponto {
    int x;
    int y;
} Ponto;

// estrutura Circulo
typedef struct circulo {
    Ponto p;
    int raio;
} Circulo;

// função para mostrar os valores de um círculo
void mostraCirculo(Circulo *c) {
    printf("Centro: (%d, %d), Raio: %d\n", c->p.x, c->p.y, c->raio);
}

// função para atribuir valores aleatórios a um círculo
void atribuiAleatorio(Circulo *c) {
    c->p.x = rand() % 100; // Valores aleatórios entre 0 e 99
    c->p.y = rand() % 100;
    c->raio = rand() % 100;
}

// função para atribuir valores aleatórios a um vetor de círculos
void atribuiAleatorioVetor(Circulo *c, int n) {
    for (int i = 0; i < n; i++) {
        c[i].p.x = rand() % 100;
        c[i].p.y = rand() % 100;
        c[i].raio = rand() % 100;
    }
}

// função para mostrar os valores de um vetor de círculos
void mostraCirculoVetor(Circulo *c, int n) {
    for (int i = 0; i < n; i++) {
        printf("Círculo %d: Centro (%d, %d), Raio %d\n", i+1, c[i].p.x, c[i].p.y, c[i].raio);
    }
}

int main() {
    srand(time(NULL)); //ligando o gerador de números aleatórios

    // 1. Criando e atribuindo valores para a variável p1 do tipo Ponto
    Ponto p1;
    printf("Digite o valor de x para p1: ");
    scanf("%d", &p1.x);
    printf("Digite o valor de y para p1: ");
    scanf("%d", &p1.y);

    // 2. Criando e atribuindo valores para a variável c1 do tipo Circulo
    Circulo c1;
    printf("Digite o valor de x para o centro de c1: ");
    scanf("%d", &c1.p.x);
    printf("Digite o valor de y para o centro de c1: ");
    scanf("%d", &c1.p.y);
    printf("Digite o valor do raio de c1: ");
    scanf("%d", &c1.raio);

    // 3. Criando e atribuindo valores para a variável c2 do tipo Circulo (alocação dinâmica)
    Circulo *c2 = (Circulo*)malloc(sizeof(Circulo));
    printf("Digite o valor de x para o centro de c2: ");
    scanf("%d", &c2->p.x);
    printf("Digite o valor de y para o centro de c2: ");
    scanf("%d", &c2->p.y);
    printf("Digite o valor do raio de c2: ");
    scanf("%d", &c2->raio);

    // 4. Chamando a função mostraCirculo para mostrar os valores de c1
    printf("\nValores de c1:\n");
    mostraCirculo(&c1);

    // 5. Chamando a função atribuiAleatorio para c1 e c2
    atribuiAleatorio(&c1);
    atribuiAleatorio(c2);

    printf("\nValores de c1 após atribuição aleatória:\n");
    mostraCirculo(&c1);

    printf("\nValores de c2 após atribuição aleatória:\n");
    mostraCirculo(c2);

    // 6. Criando c3 e atribuindo o endereço de c1
    Circulo *c3 = &c1;
    // Alterando os campos de c3
    c3->p.x = 10;
    c3->p.y = 20;
    c3->raio = 30;
           // Mostrando os valores de c1 e c3
    printf("\nValores de c1 após alteração via c3:\n");
    mostraCirculo(&c1);
    printf("\nValores de c3:\n");
    mostraCirculo(c3);

    // 7. Criando um vetor de 10 círculos e atribuindo valores aleatórios
    Circulo vet[10];
    atribuiAleatorioVetor(vet, 10);

    // 8. Mostrando os valores do vetor de círculos
    printf("\nValores do vetor de círculos:\n");
    mostraCirculoVetor(vet, 10);

    // Liberando a memória  para c2
    free(c2);

    return 0;
}