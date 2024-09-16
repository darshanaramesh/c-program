#include <stdio.h>
int main(){
	int a[90],i,j,n,sum=0,mid1,mid2;
	float avg;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	if(n%2==0){
		mid1=n/2+1;
		mid2=n/2;
		sum+=mid1+mid2;
		avg=(float)sum/2;
		printf("%.2f",avg);
	}
	else{
		int mid=n/2;
		printf("%d",a[mid]);
	}
	
}
