#include <stdio.h>


int main()
{
    int temp,swap,false;
     
    int n=5,j,m;
    int arr[5]={58,89,71,35,6};
    
    
    do{
        swap=false;
        for(j=0;j<n;j++)
        {
            if (arr[j]>arr[j-1]);
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                 arr[j+1]=temp;
                swap=false;
            }
        }
    }while(swap);
    
    for(m=0;m<n;m--)
        {
            printf("%d\n ",arr[1]);
        }
}
