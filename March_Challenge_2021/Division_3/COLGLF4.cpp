// Problem Name: College Life 4
// Problem Code: COLGLF4
#include<bits/stdc++.h>
#define pb push_back
#define int long long
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define vi vector<int>
#define FOR(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define fi first
#define se second
using namespace std;
int minn(int n,int e,int h,int a,int b,int c,int z)
{
  int A=(e-z)/2;
  int B=(h-z)/3;
  int L=n-z;
  int ans=1e18;
  if(A>=L && B>=L)
  {
    if(L>=0)
    ans=min({ans,a*(L),b*(L)});
  }
  else
  {
    if(B>=L)
    {
      if(L>=0)
      ans=min({ans,b*L});
      if(A>=0 && L-A>=0)
      ans=min(ans,a*A+b*(L-A));
    }
    else if(A>=L)
    {
      if(L>=0)
      ans=min({ans,a*L});
      if(B>=0 && L-B>=0)
      ans=min(ans,b*B+a*(L-B));
    }
    else
    {
      if(A>=0 && L-A>=0 && L-A<=B)
      ans=min(ans,a*A+b*(L-A));
      if(B>=0 && L-B>=0 && L-B<=A)
      ans=min(ans,b*B+a*(L-B));
    }
  }
  // cout<<z<<" "<<A<<" "<<B<<" "<<L<<" "<<ans<<endl;
  return ans;
}
void solve()
{
  int n,e,h,a,b,c;
  cin>>n>>e>>h>>a>>b>>c;
  int cost=1e18;
  for(int i=0;i<=n;i++)
  {
    if(i<=e && i<=h)
    cost=min(cost,minn(n,e,h,a,b,c,i)+c*i);
    // cout<<cost<<endl;
  }
  if(cost==1e18)
  cost=-1;
  cout<<cost<<endl;
}
int32_t main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int t=1;
  cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}
