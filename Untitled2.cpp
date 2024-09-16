#include <stdio.h>
int main(){
	int a[50],n,i,j=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int ra;
	scanf("%d",&ra);
	for(i=n-ra; i<n; i++){
		printf("%d",a[i]);
	}
	for(i=0; i<n-ra;i++){
		printf("%d",a[i]);
		
	}
	return 0;
}
