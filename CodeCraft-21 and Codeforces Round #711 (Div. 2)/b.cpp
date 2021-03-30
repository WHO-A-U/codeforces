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

int d[33];
int lo(int n){
    int ret=0;
    while(1){
        if(n==1){
            break;
        }
        ret++;
        n/=2;
    }
    return ret;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,a;
        memset(d,0,sizeof(d));
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a;
            d[lo(a)]++;
        }
        int ans=1;
        int k=m;
        int cnt=n;
        while(1){

            for(int i=32;i>=0;i--){
                while(k-(1<<i)>=0&&d[i]>0){
                        k-=(1<<i);
                        d[i]--;
                        cnt--;
                }
            }
            if(cnt<=0){
                break;
            }
            k=m;
            ans++;
            
        }
        cout<<ans<<"\n";
    }
}