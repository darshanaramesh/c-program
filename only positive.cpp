#include <stdio.h>
int main(){
	int a[90],i,j,n,count=0;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[i]==a[j]){
				count++;
			}
	}
}
	printf("%d",count);
}
