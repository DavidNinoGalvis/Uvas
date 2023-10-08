#include <stdio.h>
#include <stdlib.h>

void solve(){
  int cases, i, flag = 0, value;
  int ans[3001], ans2[3001];
  while(scanf("%d", &cases) != EOF){
    flag = 0;
    for(i = 0; i < cases; i++){
      scanf("%d", &ans[i]);
      ans2[i] = 0;
    }
    for(i = 0; i < cases-1; i++){
      value = abs(ans[i] - ans[i+1]);
      ans2[value] = 1;
    }
    i = 1;
    while(i < cases && flag == 0){
      if (ans2[i] != 1) flag = 1;
      else i++;
    }
    if (flag == 0) printf("Jolly\n");
    else printf("Not jolly\n");
  }
}


int main(){
   solve();
  return 0;
}
