#include <stdio.h>
#include <math.h>
int main(){
	int a[90],b[10]={0};
	int i,j,k=0,n;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
		
		if(b[i]==0){
		
		for(j=i+1; j<n; j++){
			if(a[i]==a[j]){
				a[j]=pow(a[j],2);
				b[j]=1;
			}
			}
		}
	}	
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}	
}
