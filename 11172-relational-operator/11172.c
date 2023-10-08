#include<stdio.h>
int main(){
  int cases, n1, n2;
  scanf("%d",&cases);
  while(cases--){
    scanf("%d %d", &n1, &n2);
    if (n1 > n2) printf(">\n");
    else if (n1 < n2) printf("<\n");
    else printf("=\n");
  }
}
