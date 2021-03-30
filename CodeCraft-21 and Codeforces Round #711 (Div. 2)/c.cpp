#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
#define ft first
#define sd second
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
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

ll d[1003][1003][2];
int n, k;
ll go(int life , int wall,int dir){
    
    if(wall<1 || wall>n){
        return 1;
    }
    ll &ret = d[life][wall][dir];
    if(ret!=-1){
        return ret;
    }
    ret=0;
    
    if(dir==0){
        ret+=go(life , wall+1 , dir);
        ret%=MOD;
        if(life>1)
            ret+=go(life-1,wall-1,1-dir);
        ret%=MOD;
    }else{
        ret+=go(life,wall-1,dir);
        ret%=MOD;
        if(life>1)
            ret+=go(life-1 , wall+1,1-dir);
        ret%=MOD;
    }
    return ret;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        memset(d,-1,sizeof(d));
        cin>>n>>k;
        cout<<(go(k,1,0))%MOD<<"\n";
    }
}