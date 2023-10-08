#include<stdio.h>
#include<limits.h>

int main(){
  int ans;
  int cases;
  int menor = 0, mayor = 0;
  int num;
  int n;
  scanf("%d",&cases);
  while(cases--){
    /* Se Desea visitar 1 <= n <= 20 */
    scanf("%d",&n);
    ans = 0, menor = INT_MAX, mayor = 0;
    num = 0;
    while(n--){
      scanf("%d",&num);
      if (num > mayor) mayor = num;
      if (num < menor) menor = num;
      ans = (mayor - menor) * 2;
    }
    printf("%d\n",ans);
  }
  return 0;
}
