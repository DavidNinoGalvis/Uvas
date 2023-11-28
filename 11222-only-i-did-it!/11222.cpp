/*
 * Complejidad De la implementación:
 *
*/
#include<iostream>
#include<vector>
using namespace std;

void limpiarArreglo(bool arr[10001]){
  int i;
  for (i = 0;i < 10001){
    arr[i] = false;
  }
}

void solve(){
  int i = 0, j = 0, cases, problems, position;
  bool person1[10001], person2[10001], person3[10001];
  int count1, count2, count3;
  cin >> cases;
  while(i < cases){
    limpiarArreglo(person1);
    limpiarArreglo(person2);
    limpiarArreglo(person3);
    count1 = 0;
    count2 = 0;
    count3 = 0;
    cin >> problems;
    for(j = 0; j < problems; j++){
      cin >> position;
      person1[position] = true;
    }
    cin >> problems;
    for(j = 0; j < problems; j++){
      cin >> position;
      person2[position] = true;
    }
    cin >> problems;
    for(j = 0; j < problems; j++){
      cin >> position;
      person3[position] = true;
    }
    for(j = 0; j < 10001; j++){
      if(person1[i] == true && person2[i] == false && person3[i] == false) count1++;
      if(person1[i] == false && person2[i] == true && person3[i] == false) count2++;
      if(person1[i] == false && person2[i] == false && person3[i] == true) count3++;
    }
    i++;
  }
}

int main(){
  solve();
  return 0;
}
