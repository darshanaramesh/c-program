#include <stdio.h>
int main(){
	int a[60],freq[50];
	int i,j,n,count;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
		freq[i]=-1;
	}
	
	for(i=0; i<n; i++){
		count=1;
		for(j=i+1; j<n; j++){
			if(a[i]==a[j]){
				count++;
				freq[j]=0;
			}
			if(freq[i]!=0)
			{
				freq[i]=count;
			}
		}
		}
		for(i=0; i<n; i++){
			if(freq[i]!=0)
			{
				printf("\n%d %d",a[i],freq[i]);
			}
	}
	return 0;
}

