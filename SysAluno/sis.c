#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para usar a função de busca por nome

// Definição das estruturas
typedef struct {
    char logradouro[250];
    int numero;
    char bairro[120];
    char cidade[120];
    char uf[3];
    char cep[11];
} Endereco;

typedef struct {
    int matricula;
    char nome[120];
    int idade;
    float renda;
    Endereco *endereco;
} Aluno;

// Funções
Aluno* novoAluno();
void pedirDados(Aluno *aluno);
void listarAlunos(Aluno *alunos, int qtdAlunos);
void pedirEndereco(Aluno *aluno);
void atualizarAluno(Aluno *alunos, int qtdAlunos);
void removerAluno(Aluno **alunos, int *qtdAlunos);
void buscarAlunoPorMatricula(Aluno *alunos, int qtdAlunos);
void buscarAlunoPorNome(Aluno *alunos, int qtdAlunos);

// Função principal
int main() {
    Aluno *alunos = (Aluno *)malloc(10 * sizeof(Aluno)); // Alocação inicial para 10 alunos
    int qtd_alunos = 0; // Quantidade de alunos cadastrados

    char menu[] = ">>> SysAlunos <<<\n1 - Add Aluno\n2 - Listar Alunos\n3 - Atualizar Aluno\n4 - Remover Aluno\n5 - Buscar por Matricula\n6 - Buscar por Nome\n\n0 - Sair\n>>> ";
    int opcao;
    do {
        printf("%s", menu);
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // Adicionar Aluno
                if (qtd_alunos >= 10) { // Verifica se precisa realocar mais espaço
                    alunos = (Aluno *)realloc(alunos, (qtd_alunos + 10) * sizeof(Aluno));
                }
                Aluno *aluno = novoAluno();
                pedirDados(aluno);
                alunos[qtd_alunos] = *aluno;
                qtd_alunos++;
                break;
            case 2: // Listar Alunos
                listarAlunos(alunos, qtd_alunos);
                break;
            case 3: // Atualizar Aluno
                atualizarAluno(alunos, qtd_alunos);
                break;
            case 4: // Remover Aluno
                removerAluno(&alunos, &qtd_alunos);
                break;
            case 5: // Buscar por Matrícula
                buscarAlunoPorMatricula(alunos, qtd_alunos);
                break;
            case 6: // Buscar por parte do Nome
                buscarAlunoPorNome(alunos, qtd_alunos);
                break;
            case 0: // Sair
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    free(alunos); // Libera a memória alocada
    return 0;
}

// Função para criar um novo aluno
Aluno* novoAluno() {
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    aluno->endereco = (Endereco *)malloc(sizeof(Endereco)); // Aloca memória para o endereço do aluno
    return aluno;
}

// Função para pedir os dados de um aluno
void pedirDados(Aluno *aluno) {
    printf("Matrícula: ");
    scanf("%d", &aluno->matricula);
    printf("Nome: ");
    scanf(" %120[^\n]", aluno->nome);
    pedirEndereco(aluno); // Pede o endereço do aluno
}

// Função para pedir o endereço do aluno
void pedirEndereco(Aluno *aluno) {
    printf(" Endereço:\n ");
    printf("Logradouro: ");
    scanf(" %250[^\n]", aluno->endereco->logradouro);
}

// Função para listar todos os alunos cadastrados
void listarAlunos(Aluno *alunos, int qtdAlunos) {
    printf("Alunos Cadastrados:\n");
    for (int i = 0; i < qtdAlunos; i++) {
        printf("%d - %s\n", alunos[i].matricula, alunos[i].nome);
        printf("\tLogradouro: %s\n", alunos[i].endereco->logradouro);
    }
    printf("------------------\n");
}

// Função para atualizar os dados de um aluno
void atualizarAluno(Aluno *alunos, int qtdAlunos) {
    int matricula;
    printf("Digite a matrícula do aluno a ser atualizado: ");
    scanf("%d", &matricula);

    for (int i = 0; i < qtdAlunos; i++) {
        if (alunos[i].matricula == matricula) {
            printf("Atualizando dados do aluno %s:\n", alunos[i].nome);
            pedirDados(&alunos[i]);
            printf("Aluno atualizado com sucesso!\n");
            return;
        }
    }
    printf("Aluno não encontrado!\n");
}

// Função para remover um aluno
void removerAluno(Aluno **alunos, int *qtdAlunos) {
    int matricula;
    printf("Digite a matrícula do aluno a ser removido: ");
    scanf("%d", &matricula);

    for (int i = 0; i < *qtdAlunos; i++) {
        if ((*alunos)[i].matricula == matricula) {
            for (int j = i; j < *qtdAlunos - 1; j++) {
                (*alunos)[j] = (*alunos)[j + 1]; // Move os alunos para "fechar o buraco"
            }
            (*qtdAlunos)--; // Diminui a quantidade de alunos
            printf("Aluno removido com sucesso!\n");
            return;
        }
    }
    printf("Aluno não encontrado!\n");
}

// Função para buscar um aluno por matrícula
void buscarAlunoPorMatricula(Aluno *alunos, int qtdAlunos) {
    int matricula;
    printf("Digite a matrícula do aluno: ");
    scanf("%d", &matricula);

    for (int i = 0; i < qtdAlunos; i++) {
        if (alunos[i].matricula == matricula) {
            printf("Aluno encontrado: %s\n", alunos[i].nome);
            return;
        }
    }
    printf("Aluno não encontrado!\n");
}

// Função para buscar alunos por parte do nome
void buscarAlunoPorNome(Aluno *alunos, int qtdAlunos) {
    char nome[120];
    printf("Digite parte do nome do aluno: ");
    scanf(" %120[^\n]", nome);

    for (int i = 0; i < qtdAlunos; i++) {
        if (strstr(alunos[i].nome, nome)) { // Verifica se o nome contém a substring
            printf("Aluno encontrado: %s\n", alunos[i].nome);
        }
    }
}
