#include <stdio.h>
int main(){
	int a[30],n,i,j,count=0,arr[90];
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}

	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				arr[count++]=a[i];
			}
		}
	}
	for(i=0;i<count;i++)
	{
		printf("%d",arr[i]);
	}
}
