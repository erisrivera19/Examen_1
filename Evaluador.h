#ifndef EVALUADOR_H
#define EVALUADOR_H

#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
#include <list>          // std::list
#include <queue>          // std::list
#include <algorithm>
using namespace std;


void evaluar();

list<int>::iterator getUltimo(list<int> mi_lista);
bool sonPares(set<int> mi_set);
set<int> convertirASet(queue<int> mi_pila);
list<int> obtenerNumeros(multimap<string,int> agenda, string nombre);

#endif // EVALUADOR_H
