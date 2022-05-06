//Difficult C Program on advanced concepts.
#include <stdio.h>
#define lim 100000 
#define MAX 100000 
void mergeSort(int arr[],long int low,long int mid,long int high);
void partition(int arr[],long int low,long int high);
int main() 
{ 
int A[lim]={0},i,t,N,Ans,lar,sum; 
scanf("%d",&t); 
while(t--) 
{ 
sum=Ans=0; 
scanf("%d",&N); 
for(i=0;i<N;i++) 
{ 
scanf("%d",&A[i]); 
} 
partition(A,0,N-1); 
lar=A[N-1]; 
for(i=0;i<N;i++) 
{ 
sum=sum + A[i]; 
} 
for(i=0;i<N;i++) 
{ 
 Ans=Ans+(sum -A[i]*(N-i)); 
 sum=sum-A[i]; 
}
Ans=Ans%1000000007; 
lar=lar%1000000007; 
Ans=(Ans*lar)%1000000007; 
printf("%d\n",Ans); 
} 
return 0; 
} 
void partition(int arr[],long int low,long int high)
{  
int mid; 
 if(low<high)
 { 
 mid=(low+high)/2; 
 partition(arr,low,mid); 
 partition(arr,mid+1,high); 
 mergeSort(arr,low,mid,high); 
 } 
} 
void mergeSort(int arr[],long int low,long int mid,long int high)
{  
int i=low,m=mid+1,k,l=low,temp[MAX]; 
 while((l<=mid)&&(m<=high))
 { 
 if(arr[l]<=arr[m])
 { 
 temp[i]=arr[l]; 
 l++; 
 } 
 else
 { 
 temp[i]=arr[m]; 
 m++; 
 } 
 i++; 
 }
 if(l>mid)
 { 
 for(k=m;k<=high;k++)
 { 
 temp[i]=arr[k]; 
 i++; 
 } 
 } 
 else
 { 
 for(k=l;k<=mid;k++)
 { 
 temp[i]=arr[k]; 
 i++; 
 } 
 } 
 for(k=low;k<=high;k++)
 { 
 arr[k]=temp[k]; 
 } 
}
