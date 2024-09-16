#include <stdio.h>
int main(){
	int a[90];
	int i,j,k,n,count=0;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
		if(a[i]%2==1){
			count++;
		}
	}
	printf("%d",count);
}
