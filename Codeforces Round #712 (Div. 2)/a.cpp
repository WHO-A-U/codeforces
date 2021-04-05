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
        string s;
        cin>>s;
        bool flag=false;
        for(int i=0;i<s.length();i++){
            if(s[i]!='a'){
                flag=true;
            }
        }
        if(!flag){
            cout<<"NO\n";
            continue;
        }
        int idx=0;
        for(;idx<s.length();idx++){
            if('a'!=s[s.length()-1-idx]){
                break;
            }
        }
        cout<<"YES\n";
        for(int i=0;i<idx;i++){
            cout<<s[i];
        }
        cout<<"a";
        for(int i=idx;i<s.length();i++){
            cout<<s[i];
        }
        cout<<"\n";
    }
}