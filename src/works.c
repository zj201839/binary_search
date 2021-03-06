#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
    int person = 0;
    int i = 0;
    int sum = 0;
    while(i < n){
        while(sum<=m && i <n){
            if(A[i]>m){
               return 0;
            }   
            sum += A[i];
            if(sum<=m){
              i = i+1;
            }    
        }
        sum = 0;
        person += 1;
    }
    return person<=k;
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
