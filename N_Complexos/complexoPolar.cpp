// Copyright 2022 Universidade Federal de Minas Gerais (UFMG)

#include "complexo.h"

#include <cmath>

Complexo::Complexo() {
    mod = 0;
    arg = 0;
}

Complexo::Complexo(double a, double b) {
    mod = sqrt(a*a + b*b);
    arg = atan2(b,a);
}

double Complexo::real() {
    double real = mod*cos(arg);
  return real;
}

double Complexo::imag() {
    double imag = mod*sin(arg);
  return imag;
}

bool Complexo::igual(Complexo x) {
    bool validx_ = false;
    if (x.real() == real() && x.imag() == imag())
    {
        validx_ = true;
    }
  return validx_;
}

void Complexo::Atribuir(Complexo x) {
    *this = x;
}

double Complexo::modulo() {
    double modl = sqrt(mod*sin(arg)*mod*sin(arg) + mod*cos(arg)*mod*cos(arg));
  return modl;
}

Complexo Complexo::conjugado() {
  Complexo c(0,0);
  c.mod = mod;
  c.arg = -arg;
  return c;
}

Complexo Complexo::simetrico() {
  Complexo c (0,0);
  c.mod = mod;
  c.arg = cos(arg);
  return c;
}

Complexo Complexo::inverso() {
  Complexo c (0,0);
  c.mod = 1/mod;
  c.arg = cos(-arg);
  return c;
}

Complexo Complexo::somar(Complexo y) {
  Complexo c(real() + y.real(), imag()+ y.imag());
  return c;
}

Complexo Complexo::subtrair(Complexo y) {
  Complexo s(real() + y.real(), imag()+ y.imag());;
  return s;
}

Complexo Complexo::multiplicar(Complexo y) {
  Complexo p (real()*y.real(), imag()*y.imag());
  return p;
}

Complexo Complexo::dividir(Complexo y) {
  Complexo d;
  // d.real_ = (real()*y.real() + imag()*y.imag())/y.real()*y.real() + y.imag()*y.imag();
  // d.imag_ = imag()*y.imag( ) - real()*y.imag()/y.real()*y.real() + y.imag()*y.imag(); 
  return d;
}