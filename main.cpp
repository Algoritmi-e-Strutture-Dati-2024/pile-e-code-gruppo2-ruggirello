#include <iostream>
#include "ListaPuntatori.cpp"
#include "Coda.cpp"
#include "Pila.cpp"


int main(){

Pila<int> pila1;
Coda<int> coda1;


//inserimento operazioni
//  operazioni sulla Pila
    std::cout << "Operazioni sulla Pila:" << std::endl;
    pila1.push(10);
    pila1.push(20);
    pila1.push(30);
    std::cout << "Top della pila: " << pila1.top() << std::endl;  // stampare 30
    std::cout << "Pop dalla pila: " << pila1.pop() << std::endl;  // rimuovere e stampare 30
    std::cout << "Top della pila dopo pop: " << pila1.top() << std::endl;  //  stampare 20
    std::cout << "Dimensione della pila: " << pila1.size() << std::endl;  //  essere 2
    std::cout << "La pila è vuota? " << (pila1.isEmpty() ? "Sì" : "No") << std::endl;

    // operazioni sulla Coda
    std::cout << "\nOperazioni sulla Coda:" << std::endl;
    coda1.enqueue(5);
    coda1.enqueue(15);
    coda1.enqueue(25);
    std::cout << "Front della coda: " << coda1.front() << std::endl;  // Dovrebbe stampare 5
    std::cout << "Dequeue dalla coda: " << coda1.dequeue() << std::endl;  // Dovrebbe rimuovere e stampare 5
    std::cout << "Front della coda dopo dequeue: " << coda1.front() << std::endl;  // Dovrebbe stampare 15
    std::cout << "Dimensione della coda: " << coda1.size() << std::endl;  // Dovrebbe essere 2
    std::cout << "La coda è vuota? " << (coda1.isEmpty() ? "Sì" : "No") << std::endl;

    return 0;
}
