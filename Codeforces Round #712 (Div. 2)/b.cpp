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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int cnt[2]={0,0};
        for(int i=0;i<n;i++){
            cnt[a[i]-'0']++;
        }
        int flip=0;
        bool ans=true;
        for(int i=n-1;i>=0;i--){
            char c=a[i];
            if(flip==1){
                c = ('0'+('1'-a[i]));
            }
            if(c==b[i]){
                cnt[a[i]-'0']--;
                continue;
            }else{
                if(cnt[0]!=cnt[1]){
                    ans=false;
                    break;
                }else{
                    flip=1-flip;
                    cnt[a[i]-'0']--;
                }
            }
        }
        if(ans){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}