#include "lista.h"
#include <stdio.h>


int main() {
    Lista *minha_lista = nova_lista(); // Cria uma nova lista vazia

    // Insere valores no início da lista
    inserir_inicio(minha_lista, 11);
    inserir_inicio(minha_lista, 25);
    inserir_inicio(minha_lista, 10);

    // Insere valor no final da lista
    inserir_final(minha_lista, 12);

    // Lista todos os elementos
    printf("Lista após inserções:\n");
    listar(minha_lista);

    // Remove o valor do final da lista
    remover_final(minha_lista);

    // Lista tudo  após a remoção
    printf("Lista após remoção do final:\n");
    listar(minha_lista);

    // libera a memória antes de sair
    while (!esta_vazia(minha_lista)) {
        remover_inicio(minha_lista);
    }
    return 0;
}