#include <stdio.h>
int main(){
	int a[90];
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int temp;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%d",a[i]);
	}
	printf("\n%d",a[1]);	
}
