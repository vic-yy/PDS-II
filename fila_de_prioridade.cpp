#include "fila_de_prioridade.h"


#include <iostream>
#include <list>
#include <string>
#include <vector>

using std::string;
using std::vector;

using std::cout;

void FilaDePrioridade::Adicionar(Pessoa p)
{
  auto it = lista_.begin();
  while (it->prioridade >= p.prioridade)
  {
    it++;
    if(it == lista_.end())
    break;
  }
  lista_.insert(it, p);

  for (auto i: lista_){
    cout<< i.nome << " ";
    
  }
  cout << "\n";
};

string FilaDePrioridade::RemoverMaiorPrioridade()
{
  string nome = lista_.front().nome;
  lista_.pop_front();
  return nome;
}

void FilaDePrioridade::Remover(string nome)
{
  auto it = lista_.begin();
  for (it; it != lista_.end(); it++)
    if (it->nome == nome)
    {
      lista_.erase(it);
      break;
    }
}

int FilaDePrioridade::tamanho()
{
  int tam = lista_.size();
  return tam;
}

vector<string> FilaDePrioridade::listar()
{
  auto it = lista_.begin();

  vector<string> v;
  for (it; it!= lista_.end(); it++){
    v.push_back(it->nome);
  }
  return v;
}