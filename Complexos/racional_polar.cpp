#include "racional.h"

#include <cmath>
#include <iostream>

int euclides_r(int  m, int n)
   {

     if (n==0) return m;
     return euclides_r (n, m % n);
   }

void Racional::Normalizar() {

int mdc = euclides_r (numerador_, denominador_);
numerador_/=mdc;
denominador_/=mdc;
}

Racional::Racional() {
numerador_ = 0;
denominador_ = 1;
}

Racional::Racional(int n)  {
numerador_ = n;
denominador_ = 1;
}

Racional::Racional(int n, int d) {
if (d!=0){
numerador_ = n;
denominador_ = d;

if(n<0 && d<0 || n>0 && d<0){
    numerador_ *= -1;
    denominador_ *= -1;
}
}
}

int Racional::numerador() const {

  return numerador_;
}

int Racional::denominador() const {
  return denominador_;
}

Racional Racional::simetrico() const {
  Racional racSimetrico;
  racSimetrico.denominador_ = denominador_;
  racSimetrico.numerador_ = (-1)*numerador_;
  racSimetrico.Normalizar();
  return racSimetrico;
}

Racional Racional::somar(Racional k) const {
  Racional rac1;
  int denominador = denominador_*k.denominador();
  int numerador = numerador_*k.denominador() + k.numerador_*denominador_;
  rac1.numerador_ = numerador;
  rac1.denominador_ = denominador;
  rac1.Normalizar();

  return rac1;
}

Racional Racional::subtrair(Racional k) const {
  Racional racSub;
  racSub.denominador_ = denominador_*k.denominador();
  racSub.numerador_ = numerador_*k.denominador() - k.numerador_*denominador_;
  racSub.Normalizar();
  return racSub;
}

Racional Racional::multiplicar(Racional k) const {
  Racional racMult;
  racMult.denominador_ = denominador_ * k.denominador();
  racMult.numerador_ = numerador_ * k.numerador();
  racMult.Normalizar();
  return racMult;
}

Racional Racional::dividir(Racional k) const {
  Racional racDiv;
  racDiv.numerador_ = numerador_ * k.denominador();
  racDiv.denominador_ = denominador_ * k.numerador();
  racDiv.Normalizar();
  return racDiv;
}
