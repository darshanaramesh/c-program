#include <stdio.h>
int main(){
	int a[90];
	int i,j,d,n;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&d);
	for(i=d; i<n-1; i++){
		a[i]=a[i+1];
	}
	for(i=0; i<n-1; i++){
		printf("%d ",a[i]);
	}
}
