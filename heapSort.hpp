#include <iostream>
#include <cstdlib>
#include <cstddef>

#include "DNI.hpp"

using namespace std;

template <class T>
class HeapSort
{
	public:
		HeapSort(){};
		~HeapSort(){};
		void sort(T* ,int, bool,int&);
		void baja(int,T* ,int, bool, int&);
		int max(T*,int,int,int,int);
};
template <class T>
int HeapSort<T>::max(T* a, int n, int i, int j, int k) {
    int m = i;
    if (j < n && a[j] > a[m]) {
        m = j;
    }
    if (k < n && a[k] > a[m]) {
        m = k;
    }
    return m;
}    

template <class T>
void HeapSort<T>::baja(int i,T* v, int sz, bool modo, int& contador)
{
    if(modo == true){
        std::cout << "Mi vector baja: " << std::endl;
        for(int k=0;k<sz;k++)
        		cout<<v[k]<<" ";
        std::cout << std::endl;	
    }    

    T x = v[i] ;
    
    if(modo == true)
    std::cout << "i: " << i << std::endl;
    
    while (1) {
        int j = max(v, sz, i, 2 * i + 1, 2 * i + 2);
        if (j == i) {
            break;
        }
        T t = v[i];
        v[i] = v[j];
        v[j] = t;
        i = j;
        
        contador++;
        
    } 
    
    if(modo == true){
        std::cout << "Mi vector resultado baja: " << std::endl;
        for(int k=0;k<sz;k++)
        		cout<<v[k]<<" ";
        std::cout << std::endl;	
    }    
    
    contador++;
}

template <class T>
void HeapSort<T>::sort(T* v, int sz, bool modo,int& contador)
{
   if(modo == true){
        std::cout << "Mi vector: " << std::endl;
        for(int k=0;k<sz;k++)
        		cout<<v[k]<<" ";
        std::cout << std::endl;	
   }    

    for (int i = (sz-2)/2; i > 0; i--)
       baja(i, v, sz, modo, contador) ;
        
    for (int i = 0; i < sz; i++) {
        T t = v[sz - i - 1];
        v[sz - i - 1] = v[0];
        v[0] = t;
        baja(0,v, sz - i - 1, modo, contador);
        contador++;
    }
    
    if(modo == true){
        std::cout << "Mi vector resultado: " << std::endl;
        for(int k=0;k<sz;k++)
        		cout<<v[k]<<" ";
        std::cout << std::endl;	
    }    
}