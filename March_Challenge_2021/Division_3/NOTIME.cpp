// Problem Name: No Time to Wait
// Problem Code: NOTIME
#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int cases,h,r;
  cin>>cases>>h>>r;
  int arr[cases];
  for(int i=0;i<cases;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<cases;i++)
  {
    int sum=0;
    sum=arr[i]+r;
    if(sum>=h)
    {
      cout<<"YES"<<endl;
      return 0;
    }
  }
  cout<<"NO";
	return 0;
}
