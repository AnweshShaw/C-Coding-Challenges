//Difficult C Program on advanced concepts.
#include <stdio.h>
int min(int a,int b) 
{ 
 return(a<b?a:b); 
} 
int main(void)
{ 
int T,i,M,N,j,k,max,d,x,y; 
scanf("%d",&T); 
for(i=1;i<=T;i++) 
{ 
 scanf("%d%d",&M,&N); 
 int W[M][N]; 
 for(j=0;j<M;j++) 
 { 
 for(k=0;k<N;k++) 
 scanf("%d",&W[j][k]); 
 } 
 max=-1000000000; 
 for(d=1;d<=min(M-1,N-1);d++)
 { 
 for(j=0;j<=M-1-d;j++) 
 { 
 for(k=0;k<=N-1-d;k++) 
 { 
 int sum=0; 
 for(x=j,y=k;x<=j+d;x++,y++) 
 sum+=W[x][y]; 
 for(x=j,y=k+d;x<=j+d;x++,y--) 
 { 
 if(d%2==0 && x==(j+d/2))continue; 
 else sum+=W[x][y]; 
 } 
 if(sum>max)max=sum; 
 } 
 } 
 } 
 printf("%d\n",max); 
} 
return 0; 
}
