#ifndef LISTA_H
#define LISTA_H

typedef struct No {
    int valor;              
    struct No *proximo;  
} No;

typedef struct {
    No *inicio; 
    No *fim;    
} Lista;


Lista* nova_lista();                   
void inserir_inicio(Lista *lista, int valor);  
void inserir_final(Lista *lista, int valor);   
void remover_inicio(Lista *lista);           
void remover_final(Lista *lista);
void listar(Lista *lista);            
int esta_vazia(Lista *lista);              

#endif 