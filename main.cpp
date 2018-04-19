#include <iostream>
#include <cstdlib>
#include <cstddef>

#include "algoritmosOrdenacion.hpp"


int main ()
{
    
    std::cout << "----------------------------" << std::endl;
    std::cout << "   PRÁCTICA 5: ORDENACIÓN" << std::endl;
    std::cout << "----------------------------" << std::endl;


	std::cout << "Modo a ejecutar: " << std::endl;
	std::cout << "1. Modo demostración." << std::endl;
	std::cout << "2. Modo estadística." << std::endl;
	int modo;
	cin >> modo;
	
	std::cout << "Tamaño de la secuencia a ordenar: ";
	int n;
	std::cin >> n;
	

	
	if(modo == 1){

		std::cout << "Algoritmo a ejecutar: " << std::endl;
		std::cout << "1. Inserción." << std::endl;
		std::cout << "2. Método de la burbuja." << std::endl;
		std::cout << "3. HeapSort." << std::endl;
		std::cout << "4. QuickSort." << std::endl;
		std::cout << "5. Incrementos Decrecientes (ShellSort)." << std::endl;
	
		char algoritmo;
		std::cin >> algoritmo;

		Algoritmos demostracion;
		demostracion.modoDemostracion(algoritmo,n);

	}
	
	if(modo == 2){
	
		std::cout << "Número de pruebas a realizar: ";
		
		int nPruebas;
		std::cin >> nPruebas;
		
		std::cout << std::endl;
		
		Algoritmos estadistica;
		estadistica.modoEstadistica(nPruebas,n);
		
	}
}