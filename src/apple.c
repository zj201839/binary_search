#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
    int use = 0;
    int i;
    for(i = 0 ; i < n ; i++){
      if(A[i]%m == 0){
        use += A[i]/m;
    }
    else{
        use = use+A[i]/m+1;
        }
    }
    return use <= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  lb = 0;
  ub = 1000000000;
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  while(ub-lb>1){
    int m = (ub+lb)/2;
  if(p(m)){
    ub = m;
}
else {
    lb = m;
}
}
printf("%d\n",ub);


  return 0;
}
