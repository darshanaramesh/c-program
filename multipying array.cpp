#include <stdio.h>
int main(){
	int a[90];
	int i,j,n,k,p;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int b[90];
	for(i=0; i<n; i++){
		int p=1;
		for(j=0; j<n; j++){
			if(i!=j){
				p*=a[j];
			}
		}
		b[i]=p;
	}
	for(i=0; i<n; i++){
		printf("%d ",b[i]);
	}
}
