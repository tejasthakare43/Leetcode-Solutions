#include<stdio.h>
void sumtwonum(int arr[],int n,int targetnumber){
    int check=0;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==targetnumber){
            printf("Indexes of number that sum up equal to given number:%d %d",i,j);
            check=1;
        }
    }
}
if(check!=1){
    printf("Numbers are not present in the array that sum up equal to given number:");
}


}

int main(){
    int arr[]={43,15,63,58};
    int n=4;
    int target=78;
    sumtwonum(arr,n,target);
    return 0;
}