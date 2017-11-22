#include <stdio.h>

int main() {

  int a[5];
  int vetor_zeros[5] = {0, 0, 0, 0, 0};
  int n;
  int zeros = 0;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=1; i<(n+1); i++) {
	for (int b=0; b<5; b++){
		if (i%a[b]==0){
			printf("%d",b);
}
		else {
			vetor_zeros[b]=1;
		      }
  }
  	for (int b=0;b<5;b++) {
	zeros = zeros + vetor_zeros[b];
		     }
  		if(zeros==5) {
	printf("-");
		}
		printf ("\n");
  	for (int b=0;b<5;b++) {
	vetor_zeros[b] = 0;
		     }
  zeros = 0;
}
  return 0;
}
