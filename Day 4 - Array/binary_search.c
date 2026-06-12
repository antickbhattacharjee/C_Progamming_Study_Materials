#include<stdio.h>
int main(){
	int a[8]={2,5,7,9,11,35,68,97}, i,n,key,found=0,mid=(sizeof(a))/2, low=0, high=(sizeof(a))-1;
	
	printf("enter elements to search:");
	scanf("%d", &key);
    while(low<=high){
        if(a[mid]==key){
            found=1;
            break;
        }
        else if(a[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid=(low+high)/2;
    }
    if(found){
        printf("Element found");
    }
    else{
        printf("Element not found");
    }
}