#include <stdio.h>
int main(){
	int n[50];
	int i,j,k;
	scanf("%d",&k);
	for(i=0; i<k; i++){
		scanf("%d",&n[i]);
	}
	for(i=k-1; i>=0; i--){
		printf("%d",n[i]);
	}
}
