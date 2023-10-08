#include<stdio.h>
#include<cmath>

void solve(){
  int cases, i;
  long long int n, ans;
  scanf("%d", &cases);
  while(cases--){
    scanf("%lld", &n);
    ans = (sqrt(2 * n + 0.25) - 0.5);
    printf("%lld\n", ans);
  }
}

int main(){
  solve();
  return 0;
}
