//Difficult C Program on advanced concepts.
#include <stdio.h>
int max(int a,int b){return a<=b ? b : a;} 
int min(int a,int b){return a<=b ? a : b;} 
int main() 
{ 
int t; 
scanf("%d",&t); 
while(t--) 
{ 
int n,q; 
scanf("%d %d",&n,&q); 
long a[n]; 
int mc=1,temp=1; 
int i=0; 
int mco[n]; 
for(i=0;i<n;i++) mco[i]=0; 
mco[0]=1; 
for (i=0;i<n;i++)
{ 
scanf("%ld",&a[i]); 
if(i){ 
if(a[i]==a[i-1]){ 
mc=max(mc,++temp); 
mco[i]=mco[i-1]; 
} 
else{ 
temp=1; 
mco[i]=mco[i-1]+1; 
} 
} 
} 
int li[n]; 
li[n-1]=n-1; 
for(i=n-2;i>=0;i--) 
{ 
if(a[i]==a[i+1]) li[i]=li[i+1]; 
else li[i]=i; 
} 
for(i=0;i<q;i++) 
{ 
int l,r,k; 
scanf("%d %d %d",&l,&r,&k);
if(mc<k) 
{ 
printf("0\n"); 
continue; 
} 
if(k==1 ) 
{ 
printf("%d\n",mco[r-1]-mco[l-1]+1); continue; 
} 
if(mc==1 && k==1) 
{ 
printf("%d\n",r-l+1); 
continue; 
} 
if(mc==n) 
{ 
printf("1\n"); 
continue; 
} 
int temp; 
int ans=0; 
l-=1,r-=1; 
int j=l; 
while(j<=r) 
{ 
temp=min(li[j],r);
if(temp-j+1>=k ) 
ans++; 
j=li[j]+1; 
} 
printf("%d\n",ans); 
} 
} 
return 0; 
}
