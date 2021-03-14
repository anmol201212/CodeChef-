// Problem Name: Interesting XOR!
// Problem Code: IRSTXOR
#include <iostream>
using namespace std;
#define ll long long int
ll shr(ll a,ll b)
{
  ll anm=0;
  while(b>0)
  {
    if(b&1)
    {
      anm+=a;
    }
    b >>= 1;
    a <<= 1;
  }
  return anm;
}
int jaip(int n)
{
  int xr=0;
  if(n&&!(n&(n-1)))
  {
    return n;
  }
  while(n>0)
  {
    n>>=1;
    xr++;
  }
  return (1 <<xr);
}
int main() {
  int t_cases;
  cin>>t_cases;
  while(t_cases--)
  {
    ll c;
    cin>>c;
    ll d=jaip(c);
    if(c==d)
    {
      d=jaip(c+1);
    }
    ll a=d/2;
    a--;
    ll b=c^a;
    cout<<shr(a,b)<<"\n";
  }

	return 0;
}
