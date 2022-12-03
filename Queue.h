#ifndef QUEUE_ARRAY
#define QUEUE_ARRAY
#include <iostream>
typedef int Item;

class Queue {
private: 
    Item *array; // ponteiro para vetor de Item
    int m_size; // Qtd de elementos na Fila
    int capacity; // Capacidade total da Fila
    int first; // Indice do primeiro elemento
public:
    Queue(int capacity); // Construtor
    ~Queue(); // Destrutor
    void push_back(const Item& data); // Adiciona na fila
    void pop_front(); // Remove da fila
    bool empty(); // A fila esta vazia?
    bool full(); // A fila esta cheia?
    int size(); // tamanho da fila
    Item& front(); // Valor do elemento na cabeca
    Item& back(); // valor do elemento na cauda
    
};

#endif
