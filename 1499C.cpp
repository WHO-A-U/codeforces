#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
#define ft first
#define sd second
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vb = vector<bool>;
using vs = vector<string>;
using vd = vector<double>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
using vvi = vector<vi>;
using vvb = vector<vb>;
using vvll = vector<vll>;
using vvpii = vector<vpii>;
using vvpll = vector<vpll>;
using vvs = vector<vs>;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t,n;
   cin>>t;
   while(t--){
       cin>>n;
        ll minVal[2],x;
        cin>>minVal[0]>>minVal[1];
        ll sum = minVal[0] + minVal[1];
        ll ans = minVal[0]*n + minVal[1]*n;
        int cnt[2]={1,1};
        for(int i=2;i<n;i++){
            cin>>x;
            if(minVal[i&1]>x){
                minVal[i&1]=x;
            }
            sum+=x;
            cnt[i&1]++;
            ans = min(ans , sum+(n-cnt[0])*minVal[0] + (n-cnt[1])*minVal[1]);
        }
        cout<<ans<<"\n";
   }
}