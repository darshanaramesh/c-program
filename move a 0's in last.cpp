#include<stdio.h>
int main(){
	int a[90];
	int i,j=0,n;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
		if(a[i]!=0){
			a[j++]=a[i];
		}
		
	}
	while(j!=n){
		a[j++]=0;
	}
	for(i=0; i<n; i++){
		printf("%d",a[i]);
	}
}
