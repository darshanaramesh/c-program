#include <stdio.h>
int main(){
	int a[90];
	int i,j,n;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	for(i=0; i<n; i++){
		if(a[i]<min){
			min=a[i];
		}
		else if(a[i]>max){
			max=a[i];
		}
	}
	printf("%d \n %d",min,max);
}
