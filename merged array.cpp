#include <stdio.h>
int main(){
	int n1,n2,n3,i,j,k;
	int a[50],b[50],c[90];
	scanf("%d",&n1);
	for(i=0; i<n1; i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n2);
	for(i=0; i<n2; i++){
		scanf("%d",&b[i]);
	}
	for(i=0; i<n1; i++){
		c[i]=a[i];
	}
	for(j=0; j<n2; j++){
		c[i]=b[j];
		i++;
	}
	n3=n1+n2;
	for(i=0; i<n3; i++){
		for(j=i+1; j<n3; j++){
			if(c[j]<=c[i]){
				k=c[i];
				c[i]=c[j];
				c[j]=k;
				
			}
		}
	}
	for(i=0; i<n3; i++){
		printf("%d ",c[i]);
	}
}
