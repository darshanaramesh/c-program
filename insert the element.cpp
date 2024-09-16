#include <stdio.h>
int main(){
	int a[90];
	int i,j,pos,x,n;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	scanf("%d",&pos);
	for(i=n-1; i>=pos; i--){
		a[i+1]=a[i];
	}
	a[pos]=x;
	n++;
	for(i=0; i<n; i++){
		printf("%d",a[i]);
	}
}
