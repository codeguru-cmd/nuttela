/* Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for (ll i = 0, _n = (n); i < _n; i++)
#define repr(i,n) for (ll i = n - 1; i >= 0; i--)
#define MAX 1000000
#define mo 1000000007 
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
 
bool prime[MAX + 1]; 
void SieveOfEratosthenes() 
{ 
    memset(prime, true, sizeof(prime)); 
  
    prime[1] = false; 
  
    for (int p = 2; p * p <= MAX; p++) { 
  
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) { 
  
            // Set all multiples of p to non-prime 
            for (int i = p * 2; i <= MAX; i += p) 
                prime[i] = false; 
        } 
    } 
} 
ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
ll modexp(ll x, ll y, ll p)
{
    ll res = 1;   
    x = x % p;  
    while (y > 0)
    {
        if (y & 1)    
            res = (res*x) % p;
        y = y>>1;     
        x = (x*x) % p; 
    }
    return res;
}
class gfg 
{ 
 public : ll gcd(ll a, ll b)  
 {  
    // Everything divides 0  
    if (a == 0 || b == 0)  
        return 0;  
   
    // Base case     
    if (a == b)  
        return a;  
   
    // a is greater  
    if (a > b)  
        return gcd(a-b, b);  
    return gcd(a, b-a);  
 } 
  
   
// Function to return LCM of two numbers  
  ll lcm(ll a, ll b)  
 {  
    return (a*b)/gcd(a, b);  
 }  
} ;
ll mypow(ll b, ll e) {
    ll ans=1; for(;e;b=b*b%mo,e/=2) if(e&1) ans=ans*b%mo; return ans;}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll v[n];
        v[0]=1;
        v[1]=1;
        if(n<=2)
        {
            for(ll i=0;i<n;i++)
            cout<<v[i]<<" ";
            cout<<endl;
        }
        else
        {
            ll fl=0;
            for(ll i=2;i<n;i++)
            {
                if(fl==0)
                {
                    v[i]=v[i-2]+v[i-1];
                    fl=1;
                }
                else if(fl==1)
                {
                    v[i]=v[i-1]/v[i-2];
                    fl=0;
                }
            }
            for(ll i=0;i<n;i++)
            cout<<v[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
