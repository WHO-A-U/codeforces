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
    int a,b,k;
    cin>>a>>b>>k;
    if(a==0&&k==0){
        cout<<"Yes\n";
        for(int i=0;i<2;i++){
            for(int j=0;j<b;j++){
                cout<<"1";
            }
            cout<<"\n";
        }
        return 0;
    }
    if(a+b-2<k||(b==1&&k!=0)||(a==0&&k!=0)){
        cout<<"No";
        return 0;
    }

    vector<char> x,y;
    for(int i=0;i<b;i++){
        x.push_back('1');
        y.push_back('1');
    }
    for(int j=0;j<a;j++){
        x.push_back('0');
        y.push_back('0');
    }
    if(k!=0){
        int i=1;
        int j=b;
        while(j-i!=k){
            if(j-i>k){
                i++;
            }else{
                j++;
            }
        }
        auto f = y[i];
        y[i]=y[j];
        y[j]=f;
    }
    if(y[0]=='0'){
        cout<<"No";
        return 0;
    }
    cout<<"Yes\n";
    for(auto c : x){
        cout<<c;
    }
    cout<<"\n";
    for(auto c : y){
        cout<<c;
    }

    
}