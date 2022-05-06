//Difficult C Program on advanced concepts.
#include <stdio.h>
#include<stdlib.h> 
int cmpfunc (const void * a, const void * b) 
{ 
 return ( *(int*)a - *(int*)b ); 
} 
int i,j; 
int main() 
{ 
 int t; 
 scanf("%d", &t); 
 while(t--) 
 { 
 int n; 
 scanf("%d",&n); 
 long long a[n], b[n]; 
 for(j=0;j<n;j++) 
 scanf("%lld ", &a[j]);
 for ( i = 0; i < n; i++) 
 scanf("%lld", &b[i]); 
 qsort(a,n,sizeof(long long),cmpfunc); 
 qsort(b,n,sizeof(long long),cmpfunc); 
 long long sum = 0; 
 for (i = 0; i < n; i++) 
 { 
 if (a[i] > b[i]) 
 sum += b[i]; 
 else 
 sum += a[i]; 
 } 
 printf("%lld\n", sum); 
 } 
 return 0; 
}
