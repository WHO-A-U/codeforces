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

int d[100001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        memset(d,0,sizeof(d));
        vi num(n);
        vi ans;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            num[i]=x;
            d[x]=i;
        }
        for(int i=n;i>=1;i--){
            if(d[i]>=0){
                for(int j=d[i];j<n;j++){
                    if(d[num[j]]<0)
                        break;
                    ans.push_back(num[j]);
                    d[num[j]]=-1;
                }
            }
        }
        for(auto y : ans){
            cout<<y<<" ";
        }
        cout<<"\n";
    }
}