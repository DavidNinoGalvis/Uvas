#include<stdio.h>

void solve(){
  int cases, n, k, p, i, count = 0, ans;
  scanf("%d", &cases);
  while(cases--){
    count++;
    /*k = Jugador, P = Pases, N = Jugadores */
    scanf("%d %d %d", &n, &k, &p);
    ans = (p + k) % n;
    if(ans == 0){
      ans = n;
    }
    printf("Case %d: %d\n",count, ans);
  }
}

int main(){
  solve();
  return 0;
}
