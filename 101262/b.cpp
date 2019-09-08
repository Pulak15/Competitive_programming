#include <bits/stdc++.h>
#define m ((ll)1e9+7)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define pi acos(-1)
typedef long long ll;
using namespace std;

int main() {
	// your code goes here
	 ios_base::sync_with_stdio(false); cin.tie(NULL);
	 int n,k;string a;
	 cin>>n>>k>>a;
	 if(k>a.size())
	 cout<<"WRONGANSWER"<<endl;
	 else
	 {
	      int h[26]={0};
	      for(int i=0;i<n;i++)
	      h[a[i]-97]++;
	      char c;int f=0,v;
	      for(int i=0;i<26;i++)
	      if(h[i]<=k)
	      {
	          c=(char)(i+97);
	          f=1;v=h[i];
	          break;
	      }
	      if(f==1)
	      {
	          int cnt = v;
	          for(int i=0;i<n;i++){
	              if(cnt >=k||a[i]==c) cout<<c;
	              else {
	                  cout<<a[i];
	                  cnt++;
	              }
	          }
	      }
	      else
	      cout<<"WRONGANSWER"<<endl;
	 }
	return 0;
}
