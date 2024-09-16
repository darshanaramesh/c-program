#include <stdio.h>
int main(){
	int i,j,n;
	int a[90][90],b[90][90],c[90][90];
	scanf("%d",&n);
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<n; i++){
		
		for(j=0; j<n; j++){
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	for(i=0; i<n; i++){
		printf("\n");
		for(j=0; j<n; j++){
			printf("%d",c[i][j]);
		}
		
	}
}
