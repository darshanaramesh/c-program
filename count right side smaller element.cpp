#include <stdio.h>
int main(){
	int i,j,k,count=0;
	int n;
	int a[90],b[90];
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				count++;
				break;
			}
		}
	}
	printf("%d",count);
}
