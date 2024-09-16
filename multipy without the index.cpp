#include <stdio.h>
int main(){
	int a[89],b[90];
	int i,j,k,p,n;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	int sum=0;
	for(i=0; i<n; i++){
		if(sum+a[i]>=k){
			sum+=a[i];
			printf("%d \n",a[i]);
			break;
		}
	}
}
