#include <stdio.h>
 
int main(){
  int matriz[3][3];
  int L, C;
 
  for(int L = 0; L < 3; L++){
    for(int C = 0; C < 3; C++){
    printf("Digite %d valor: ", L * 3 + C + 1);
    scanf("%d",&matriz[L][C]);
    }
    printf("\n");
  }

  	



  printf(" %d | %d | %d \n", matriz[0][0], matriz[0][1], matriz[0][2]);
  printf(" %d | %d | %d \n", matriz[1][0], matriz[1][1], matriz[1][2]);
  printf(" %d | %d | %d \n", matriz[2][0], matriz[2][1], matriz[2][2]);
return 0;
}