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

ll gcd(ll a , ll b){
    while(1){
        ll n = a%b;
        if(n==0){
            return b;
        }
        a= b;
        b= n;
    }
}
ll num(ll a){
    ll ret=0;
    while(a!=0){
        ret+=a%10;
        a/=10;
    }
    return ret;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll a;
        cin>>a;
        while(1){
            ll c = gcd(a,num(a));
            if(c!=1){
                cout<<a<<"\n";
                break;
            }else{
                a++;
            }
        }
    }
}