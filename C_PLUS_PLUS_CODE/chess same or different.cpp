#include<bits/stdc++.h>
using namespace std;
#define I_am_first 1
#define never_give_up puts("I never give up !!! ")
#define until_zero 0
#define ll long long
#define fastUI ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb(a) push_back(a);
#define pf(a) push_front(a);
#define ret return
#define ff first
#define ss second
#define all(s) s.begin(),s.end()
#define scan1(a)     scanf("%lld",&a);
#define scan2(a,b)   scanf("%lld %lld",&a,&b);
#define scan3(a,b,c) scanf("%lld %lld %lld", &a,&b,&c);
#define pii pair<int,int>
#define pll pair<long,long>
#define YES puts("YES");
#define NO  puts("NO");
#define PI acos(-1)
#define mod 1e9+7
const int N=2e5+5;

bool dp[9][9];

void solve(){
	string a,b;
	cin>>a>>b;
	if(dp[int(a[0])-96][a[1]-'0']==dp[int(b[0])-96][b[1]-'0'])cout<<"SAME\n";
	else cout<<"DIFFERENT\n";
}
signed main(){
//	fastUI
	int t_case=1;
	cin>>t_case;

	bool f=0;
	for(int i=1;i<=8;i++){
		f=!f;
		for(int j=1;j<=8;j++){
			dp[i][j]=f;
			f=!f;
		}
	}
	while(t_case--){
		solve();
	}
	return 0;
}









