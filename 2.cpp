#include <stdio.h>
int thevidiya(){
	int a[40],b[40],c[40];
	int i,j,k,n1,n2,n3;
	scanf("%d",&n1);
	for(i=0; i<n1; i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n2);
	for(i=0; i<n2; i++){
		scanf("%d",&b[i]);
	}
	n3=n1+n2;
	for(i=0; i<n1; i++){
		c[k]=a[i];
		k++;
	}
	for(j=0; j<n2; j++){
		c[k++]=b[j];
	}
	int temp;
	for(i=0; i<n3; i++){
		for(j=i+1; j<n3; j++){
			if(c[i]>c[j]){
				temp=c[j];
				c[j]=c[i];
				c[i]=temp;
			}
		}
	}
	for(i=0; i<n3; i++){
		printf("ommala %d",c[i]);
	}
	return 0;
}
