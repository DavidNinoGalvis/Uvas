#include<queue>
#include<stdio.h>
#include<iostream>
#include<stack>

void vaciarPila(std::stack<int> &pila){
  while(!pila.empty()){
    pila.pop();
  }
}

void vaciarCola(std::queue<int> &cola){
  while(!cola.empty()){
    cola.pop();
  }
}

void vaciarColaPrioridad(std::priority_queue<int> &colaPrioridad){
  while(!colaPrioridad.empty()){
    colaPrioridad.pop();
  }
}

void solve(){
  int cases, operation, element, temp;
  bool fPila = true, fCola = true, fPrioridad = true;
  std::stack<int> pila;
  std::priority_queue<int> colaPrioridad;
  std::queue<int> cola;
  while(scanf("%d", &cases) != EOF){
    vaciarPila(pila);
    vaciarCola(cola);
    vaciarColaPrioridad(colaPrioridad);
    while(cases--){
      scanf("%d", &operation);
      scanf("%d", &element);
      if(operation == 1){
        pila.push(element);
        cola.push(element);
        colaPrioridad.push(element);
      }
      if (operation == 2){
        if(fPila){
          temp = pila.top();
          pila.pop();
          if (temp != element) fPila = false;
        }
        if(fCola){
          temp = cola.front();
          cola.pop();
          if (temp != element) fCola = false; 
        }
        if (fPrioridad){
          temp = colaPrioridad.top();
          colaPrioridad.pop();
          if (temp != element) fPrioridad = false;
        } 
      }
      if(fCola && fPrioridad) printf("not sure\n");
      if(fCola) printf("queue\n");
      if(fPrioridad) printf("priority queue\n");
      if(fPila) printf("stack\n");
      if(!fCola && !fPrioridad && !fPila) printf("impossible\n");
    }
  }
}

int main(){
  solve();
  return 0;
}
