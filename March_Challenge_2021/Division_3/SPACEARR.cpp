// Problem Name: Space Arrays
// Problem Code: SPACEARR
# cook your dish here
t=int(input())
for i in range(t):
  n=int(input())
  temp=(n*(n+1))/2;
  a=list(map(int,input().split()))
  a.sort()
  j=1
  for item in a:
    if item>j:
      print("Second")
      break
    j+=1
  else:
    cnt=sum(a);
    cnt=temp-cnt;
    if(cnt<=0 or cnt%2==0):
      print("Second")
    else:
      print("First")
