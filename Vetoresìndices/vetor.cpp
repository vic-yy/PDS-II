#include "vetor.h"
#include <iostream>

Vetor::Vetor(int inicio, int fim){
    int n = fim - inicio + 1;
    string *elementos_ = new string[n];

    
}


void Vetor::atribuir(int i, std::string valor){
    if (i < 0)
    i = abs();
    else if (i > 0)
    i = i + abs(inicio_) + 1;

    *(elementos_+i) = valor


}

string Vetor::valor(int i) const{
    i = sizeof(vetor)/sizeof(vetor[0]);
return i;
}
    
Vetor::~Vetor(){
delete [] elementos_;
}
