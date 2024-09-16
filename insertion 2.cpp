#include <stdio.h>
int main(){
	int a[90];
	int i,j,n,k;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
		
	}
	scanf("%d",&k);
	a[n]=k;
	for(j=0; j<=n; j++){
		printf("%d",a[j]);
	}
	
	
}
