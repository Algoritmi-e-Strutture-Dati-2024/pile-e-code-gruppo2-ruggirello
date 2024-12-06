#include <iostream>
#include "ListaPuntatori.cpp"
// Definizione della classe Lista come template
template <typename T>
class Pila {
    private:
  	ListaPuntatori<T> array;          // Array  per memorizzare
    int capieza = 0;      // Capacità massima (si puo definire)

 
 public:
 
       
    //costrutto per aggiungere un elemento a capo della pila
    void push(T elemento) {
        array.inslista(elemento,1);
        capienza++;
        
    }
    
    T pop(){
    	if(capienza > 0){
			T elemento = array.leggilista(1);
    		array.canclista(1);
		
			return elemento; 
		}//if
    	else {
    		 std::cout << "Pila Vuota." << std::endl;
		}
    	
    	
	} //pop
	
	T top(){
		return array.leggilista(1);
		 
	} //top
	
	bool isEmpty(){
		if (array.listavuota()==True){
		
		return true; 
	}//IF
	 else {
	 	return false;
	 	
	 } //else
		
	} //isEmpty
	
    int size (){
    	return array.lunghezza();
	}
} //CHIUSURA della PILA
