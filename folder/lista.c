#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

// Criar nova lista

Lista* nova_lista() {
    Lista *lista = (Lista *)malloc(sizeof(Lista));
    lista->inicio = NULL; //inicio da lista vazia
    lista->fim = NULL;  // fim da lista vazia
    return lista; 
}


//colocar valor no incio da lista , e criar o novo No

void inserir_inicio(Lista *lista ,int valor) {
    No *novo = (No *)malloc(sizeof(No));
    novo->valor = valor;  //valor do No
    novo->proximo = lista->inicio; // o No aponta para o inicio da lista
    lista->inicio = novo; //inicio atualiza com o novo No
    if (lista->fim == NULL) {
        lista->fim = novo;   // se a lista tiver vazia, o fim vai ser o novo No
    }
}

// colocar valor no final da lista , com o novo No e add no final da lista

void inserir_final(Lista *lista, int valor) {
    No *novo = (No *)malloc(sizeof(No));
    novo->valor = valor;  //valor do No
    novo->proximo = NULL; // o Novo No vira o ultimo
    if (lista->fim == NULL) { // 
        lista->fim = novo;   // se a lista tiver vazia, o fim vai ser o novo No
    } else {
        lista->fim->proximo = novo; //o antigo fim , aponta pro novo No
        lista->fim = novo; //o fim da lista e atualizado pro novo No
    }
}

//remove o valor inicio da lista

void remover_inicio(Lista * lista) {
    if( lista->inicio !=NULL) {
        No *temp = lista->inicio;
        lista->inicio = lista->inicio->proximo;
        if (lista->inicio == NULL) {
            lista->fim = NULL;
        }
    }
}

//remove o valor final da lista

void remover_final(Lista *lista) {
    if (lista->fim != NULL) {
        if (lista->inicio == lista->fim) { // Se a lista contém apenas um No
            lista->inicio = NULL; // A lista está vazia agora
            lista->fim = NULL;
        } else {
            No *atual = lista->inicio; // Inicia do início da lista
            // Percorre a lista até o penúltimo No
            while (atual->proximo != lista->fim) {
                atual = atual->proximo;
            }
            lista->fim = atual; // Atualiza o fim da lista para o penúltimo No
            lista->fim->proximo = NULL; // O novo fim da lista aponta para NULL
        }
    }
}

// lista todos os valores da lista

void listar(Lista *lista) {
    No *atual = lista->inicio; // inicio da lista
    while (atual !=NULL) {  //enquanto tem NoS
        printf("%d ", atual->valor);   //imprimir o valor do No atual
        atual = atual->proximo;
    }
     printf("\n");
}



 // 1 para lista vazia , se nao '0'
int esta_vazia( Lista *lista) {
    return lista->inicio == NULL; 
}