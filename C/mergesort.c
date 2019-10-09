#include <stdio.h>
#include <stdlib.h>

#define INF 0x3f3f3f3f

int checkParity(int n){
  return (n%2)? n/2+1 : n/2;
}

void mergesort(int **v, int n){
  int i, *u1 = NULL, *u2 = NULL, n1;
  int ini1, ini2;

  if(n==1) return;

  n1 = checkParity(n);

  u1 = (int*) malloc((n/2)*sizeof(int));
  u2 = (int*) malloc((n1)*sizeof(int));

  for(i = 0; i<n/2 ;i++) u1[i] = (*v)[i];
  for(i = n/2; i<n ; i++) u2[i - n/2] = (*v)[i];


  mergesort(&u1, n/2);
  mergesort(&u2, n1);


  u1[n/2] = INF;
  u2[n1] = INF;

  ini1=0;
  ini2=0;


  for(i=0; i<n ; i++){
    if(u1[ini1]<u2[ini2]){
      (*v)[i]=u1[ini1];
      ini1++;
    }
    else{
      (*v)[i]=u2[ini2];
      ini2++;
    }
  }
  free(u1);
  free(u2);
  return;
}

int main(){
  int *v, n, i;

  scanf("%d", &n);

  v = (int*) malloc(n*sizeof(int));

  for(i=0; i<n; i++) scanf("%d", &v[i]);

  mergesort(&v, n);
  printf("Welcome to HacktoberFest!\n");
  for(i =0; i<n; i++) printf("%d ", v[i]);
  printf("\n");
  return 0;
}
