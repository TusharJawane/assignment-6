#include<stdio.h>
int main(){
    int arr1[20][7];
    int r;
    printf("Enter number of cities: ");
    scanf("%d",&r);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("Temperature of city %d Day %d: ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    float avg=0;
    float sum=0;    
    
    for (int i = 0; i < r; i++)
    {
        avg=0;
        sum=0;
        for (int j = 0; j < 7; j++)
        {
            sum=sum+arr1[i][j];
        }
        avg=sum/7;
        printf("Average temperature of city %d is: %0.2f\n",i+1,avg);
        
    }
    
    
    
    
}