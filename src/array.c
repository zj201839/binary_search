#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  lb = 0;
  ub = n;
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  while(ub-lb>1){
    int m = (ub+lb)/2;
    if(A[m]<=k){
        lb = m;
    }
    else{
        ub = m;
    }
}
 printf("%d\n",ub);       



  return 0;
}
