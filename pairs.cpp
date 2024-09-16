#include <stdio.h>
int main(){
	int a[90];
	int i,j,n,sum;;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&sum);
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[i]+a[j]==sum){
				printf("(%d,%d)",a[i],a[j]);
			}
		}
	}
}
