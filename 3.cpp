#include <stdio.h>
int main(){
	int arr[100],i,j=0,n;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++){
		if(arr[i]!=0){
			arr[j++]=arr[i];
		}
	}
	while(j<n){
		arr[j]=0;
		j++;
	}
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
