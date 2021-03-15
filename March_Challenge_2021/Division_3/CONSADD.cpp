// Problem Name: Consecutive Adding
// Problem Code: CONSADD
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define ff first
#define ss second
#define pb push_back
#define pii pair <ll , ll>
#define vi vector <ll>
#define mii map <ll , ll>
#define mod 1000000007
#define inf (ll) (9e18)
#define sp(x , y) fixed << setprecision(y) << x
#define mk(arr , n , type) type *arr = new type[n];
#define mar(arr , n , type) type arr[n];
#define w(x) ll x; cin >> x; while(x--)
#define f(i,n) for(ll i = 0 ; i < n ; i++)
#define all(p) p.begin() , p.end()
#define ub(a , b) upper_bound(all(a) , b)
#define lb(a , b) lower_bound(all(a) , b)
#define d(x) cerr << #x << " = " << x << endl;
#define fast_io ios_base::sync_with_stdio(false);
cin.tie(NULL);

int main() {
fast_io;

w(t)
{
 ll r,c,x;
 cin>>r>>c>>x;
 ll a[r+1][c+1]={0};
 ll b[r+1][c+1]={0};
 ll sa=0,sb=0;

 f(i,r)
 {
     f(j,c)
     {
         cin>>a[i][j];

     }
 }

 f(i,r)
 {
     f(j,c)
     {
         cin>>b[i][j];

     }
 }

 f(i,r)
 {
     f(j,c)
     {
         if((a[i][j]-b[i][j])!=0)
         { ll s=a[i][j]-b[i][j];

         if(i+x<=r)
              {
                 for(ll k=i;k<i+x;k++)
                 { a[k][j]-=s;

                 }
             }

             else  if(j+x<=c)
             {
                 for(ll k=j;k<j+x;k++)
                 { a[i][k]-=s;
                 }
             }


         }
     }
 }
 sa=0;
 f(i,r)
 {
     f(j,c)
     {
        // cout<<a[i][j]<<" "<<b[i][j]<<" ";
        if(a[i][j]!=b[i][j])
{sa=1;
break;}
     }
     //cout<<"\n";
 }

 //cout<<sa<<"\n";
 if(sa==0)
 {
     cout<<"YES\n";
 }
 else cout<<"NO\n";
}

}
