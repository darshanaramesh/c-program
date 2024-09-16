#include <stdio.h>
int main(){
	int a[50],pos[50],odd[70];
	int i,j=0,k=0,sum=0,p=1,n;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	if(a[i]<0){
		printf("invalid input");
	}
	for(i=0; i<n; i++){
		if(a[i]>0){
		printf("%d",a[i]);
		}	
 	}
 	return 0;
}
