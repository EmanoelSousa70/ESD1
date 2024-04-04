#include <stdio.h>
#include <stdlib.h> // Incluindo as bibliotecas necessárias

// Definindo as estruturas 'Ponto' e 'Circulo'
typedef struct ponto {
    int x;
    int y;
} Ponto;

typedef struct circulo {
    Ponto p;
    int raio;
} Circulo;

int main() {
    srand(time(NULL)); // Semente para gerar números aleatórios

    // 1. Criando variável 'p1' do tipo 'Ponto' e solicitando valores ao usuário
    Ponto p1;
    printf("Digite o valor de x para p1: ");
    scanf("%d", &p1.x);
    printf("Digite o valor de y para p1: ");
    scanf("%d", &p1.y);

    // 2. Criando variável 'c1' do tipo 'Circulo' e solicitando valores ao usuário
    Circulo c1;
    printf("Digite o valor de x para o centro de c1: ");
    scanf("%d", &c1.p.x);
    printf("Digite o valor de y para o centro de c1: ");
    scanf("%d", &c1.p.y);
    printf("Digite o valor do raio para c1: ");
    scanf("%d", &c1.raio);

    // 3. Criando variável 'c2' do tipo 'Circulo' alocada dinamicamente e solicitando valores ao usuário
    Circulo *c2 = (Circulo *)malloc(sizeof(Circulo));
    printf("Digite o valor de x para o centro de c2: ");
    scanf("%d", &(c2->p.x));
    printf("Digite o valor de y para o centro de c2: ");
    scanf("%d", &(c2->p.y));
    printf("Digite o valor do raio para c2: ");
    scanf("%d", &(c2->raio));

    // 4. Definindo a função 'mostraCirculo' para mostrar os valores de um círculo
    void mostraCirculo(Circulo *c) {
        printf("Centro: (%d, %d), Raio: %d\n", c->p.x, c->p.y, c->raio);
    }

    // 5. Definindo a função 'atribuiAleatorio' para atribuir valores aleatórios a um círculo
    void atribuiAleatorio(Circulo *c) {
        c->p.x = rand() % 100;
        c->p.y = rand() % 100;
        c->raio = rand() % 100;
    }
    
    // Chamando a função 'atribuiAleatorio' para c1 e c2
    atribuiAleatorio(&c1);
    atribuiAleatorio(c2);

    // 6. Criando uma variável 'c3' do tipo 'Circulo' e alterando os campos com um ponteiro
    Circulo *c3 = &c1;
    c3->p.x = 10; // Exemplo de alteração
    printf("Valores de c1 após alteração:\n");
    mostraCirculo(&c1);
    printf("Valores de c3:\n");
    mostraCirculo(c3);

    // 7. Criando um vetor de 10 elementos do tipo 'Circulo' e atribuindo valores aleatórios
    Circulo vet[10];

    // Definindo a função 'atribuiAleatorioVetor' para atribuir valores aleatórios a um vetor de círculos
    void atribuiAleatorioVetor(Circulo *c, int n) {
        for (int i = 0; i < n; i++) {
            c[i].p.x = rand() % 100;
            c[i].p.y = rand() % 100;
            c[i].raio = rand() % 100;
        }
    }

    // Chamando a função 'atribuiAleatorioVetor' para o vetor vet
    atribuiAleatorioVetor(vet, 10);

    // 8. Definindo a função 'mostraCirculoVetor' para mostrar os valores de um vetor de círculos
    void mostraCirculoVetor(Circulo *c, int n) {
        for (int i = 0; i < n; i++) {
            printf("Círculo %d: Centro: (%d, %d), Raio: %d\n", i+1, c[i].p.x, c[i].p.y, c[i].raio);
        }
    }

    // Chamando a função 'mostraCirculoVetor' para o vetor vet
    printf("Valores do vetor vet:\n");
    mostraCirculoVetor(vet, 10);

    // Liberando memória alocada dinamicamente
    free(c2);

    return 0;