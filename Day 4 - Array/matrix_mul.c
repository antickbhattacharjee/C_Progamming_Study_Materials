#include<stdio.h>

int main(){
    int data[2][3][3]={
		{
			{5,4,3},
			{2,1,0},
			{6,4,3}	
		},
		{
			{1,2,3},
			{4,5,6},
			{7,8,9}	
		}
	};
    int result[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                result[i][j]+=data[0][i][k]*data[1][k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}