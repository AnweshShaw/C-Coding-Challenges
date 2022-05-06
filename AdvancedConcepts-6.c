//Difficult C Program on advanced concepts.
#include<stdio.h>
long long modexp(long long a)
{
               long long ans=1, b=1000000005;
               for(;b>0;)
               {
                              if((b%2)==1)
                              ans=(ans*a)%1000000007;
                              b/=2;
                              a=(a*a)%1000000007;
               }
               return ans;
}
int main()
{
               long long fac[1000001];
               fac[0]=1;fac[1]=1;
               long long i, j, n, m, x, t, k, sum, sum1;
               for(i=2; i<=1000000; i++)
               {
                              fac[i]=(fac[i-1]*i)%1000000007;
               }
               scanf("%lld", &t);
               for(;t--;)
               {
                              sum1=0;
                              scanf("%lld %lld %lld",&n,&m,&k);
                              for(;k--;)
                              {
                                             sum=0;
                                             scanf("%lld %lld %lld", &i, &j, &x);
                                             i--;j--;
                                             sum=fac[i+j];
                                             sum=sum%1000000007;
                                             sum=sum*modexp(fac[i]);
                                             sum=sum%1000000007;
                                             sum=sum*modexp(fac[j]);
                                             sum=sum%1000000007;
                                             i=n-i-1;j=m-j-1;
                                             sum=sum*fac[i+j];
                                             sum=sum%1000000007;
                                             sum=sum*modexp(fac[i]);
                                             sum=sum%1000000007;
                                             sum=sum*modexp(fac[j]);
                                             sum=sum%1000000007;
                                             sum=sum*x;
                                             sum=sum%1000000007;
                                             sum1=sum1+sum;
                                             sum1=sum1%1000000007;
                              }
                              printf("%lld\n", sum1);
               }
return 0;
}
