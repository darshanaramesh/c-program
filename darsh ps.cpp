#include <stdio.h>
int main(){
	int a[90],b[90],sum=0,count=0;
	int i,j,k,n,n2;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n2);
	for(i=0; i<n; i++){
		scanf("%d",&b[i]);
	}
	for(i=0; i<n; i++){
		sum+=a[i];
	}
	printf("%d",sum);
	for(i=0; i<n2; i++){
		for(j=i+1; j<n2; j++){
			if(a[i]+b[j]==sum){
				count++;
			}
		}
	}
	printf("\n%d",count);
}
