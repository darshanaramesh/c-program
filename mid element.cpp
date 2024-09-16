#include <stdio.h>
int main() 
{
    int length;
    printf("Enter array size : ");
    scanf("%d",&length);
    float arr[length];
    for(int i=0;i<length;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(int i=0;i<length;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if(length%2==0)
    {
        printf("%.2f",(arr[length/2]+arr[(length/2)-1])/2);
    }
    else
    {
        printf("%.2f",arr[(length-1)/2]);
    }
}
