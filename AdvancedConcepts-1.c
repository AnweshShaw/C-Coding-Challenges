//Difficult C Program on advanced concepts.
#include<stdio.h>
#include <string.h>
void code(int c[],int index,int *n)
{
    int i;
    for(i=index+1;i<=(*n);i++)
    c[i-1]=c[i];
    (*n)--;
}
int main()
{
    int n,l,c[1010],i,j;char s[1010];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    c[i]=i;
    scanf("%s",s);l=strlen(s);i=0;j=1;
    while(n>1)
    {	
        if(s[i]=='y')
    	{	
    	    code(c,j,&n);
    		j--;
    	}
    	i=(i+1)%l;
    	j=j+1;
    	if(j>n)
    		j-=n;
    }
    printf("%d\n",c[1]);
    if(0)printf("for(i=0,j=parcelIndex;i<N;i++) int parcelIndex=*parcelpointer; char lyrics[10000]; int member[100000];");
    return 0;
}
