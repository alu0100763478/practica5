#include <iostream>
#include <cstdlib>
#include <cstddef>

#include "DNI.hpp"

using namespace std;

template <class T>
class Burbuja
{
	public:
		Burbuja(){};
		~Burbuja(){};
		void sort(T* ,int,bool, int&);
};

template <class T>
void Burbuja<T>::sort(T* v, int sz, bool modo, int& contador)
{
    
    if( modo == true){
        std::cout << "Mi vector: " << std::endl;
        for(int k=0;k<sz;k++)
        		cout<<v[k]<<" ";
        std::cout << std::endl;		
    }    

    for (int i = 0; i < sz; i++)
    { 
        for (int j = sz-1; j >= i; j--)
        {
            if (v[j] < v[j-1])
            {
                T x = v[j-1] ;
                v[j-1] = v[j] ;
                v[j] = x ;
                
                std::cout << "aqui" << std::endl;
            }
            contador++;
            if( modo == true){
                cout<<"\nComparando: "<<v[j]<<" " <<" con "<<v[j-1] << std::endl;
                for(int k=0;k<sz;k++)
    		        cout<<v[k]<<" ";
                std::cout << std::endl;	
            }
        }
    }    

    if( modo == true){
        std::cout << "Mi vector resultado: " << std::endl;
        for(int k=0;k<sz;k++)
        		cout<<v[k]<<" ";
        std::cout << std::endl;
    }    
}