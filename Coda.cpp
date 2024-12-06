#include <iostream>
#include "ListaPuntatori.cpp"

template <typename T>
class Coda {
	
	private : 
	
	ListaPuntatori<T> array;
    
    int capienza = 0;
	
public :
	
	void enqueue (T elemento){
		array.inslista(elemento, array.lunghezza() + 1);
		capienza++;
	} //enqueue
	
	T dequeue(){
		if(capienza > 0){
			
		T elemento = array.leggilista(1)
    	array.canclista(1);
		
		return elemento; 
		}
		else {
    		 std::cout << "Coda Vuota." << std::endl;
		}
		
	} //dequeue
	
	T front(){
		return array.leggilista(1);
	} //front
	
	bool isEmpty(){
		if (array.listavuota()==True){
		
		return True; 
	}//IF
	 else {
	 	return False;
	 	
	 } //else
	 
	  int size (){
    	return array.lunghezza();
	}
	
}

}//FINE CODA
