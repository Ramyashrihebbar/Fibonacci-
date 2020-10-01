// recursive  nd memoized solution
#include<iostream>
using namespace std;


int fibmemoized(int n ,int DP[])
{
 //base codn
 if(n==0 || n==1)
    {return n;}
 //check wether value is their in dp   
    if(DP[n]!=0)
    {
        return DP[n];
    }
   int ans=fibmemoized(n-1,DP)+fibmemoized(n-2,DP);
  //store in DP array
   DP[n]=ans;
   return ans;  
}
int fib(int n)
{
    if(n==0 || n==1)
    {return n;}

    return fib(n-1)+fib(n-2);
}
int main()
{
    int n=10;
    int DP[n+1]; // start from 0 - n
   for(int i=0 ;i<n+1;i++) // initialise as 0
   {
       DP[i]=0;
   }
   cout<<" BY  MEMOIZATION ";
    cout<<fibmemoized(n,DP);
    cout<<" \n BY RECURSION : ";
    cout<<fib(n);
}
