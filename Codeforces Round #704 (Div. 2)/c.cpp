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

int d[200001][2];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    string t,s;
    cin>>t;
    cin>>s;
    int idx=0;
    for(int i=0;i<t.length()&&idx<m;i++){
        if(s[idx]==t[i]){
            d[idx][0]=i;
            idx++;
        }
    }
    idx=m-1;
    for(int i=t.length()-1;i>=0&&idx>=0;i--){
        if(s[idx]==t[i]){
            d[idx][1]=i;
            idx--;
        }
    }
    int maxVal=0;
    for(int i=1;i<m;i++){
        maxVal = max(maxVal , abs(d[i][1]-d[i-1][0]));
    }
    cout<<maxVal;
}