// code begins here

void solve(){
    // never forget sorting input
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
}

void preprocess() {

}

signed main() {
    #ifdef ONLINE_JUDGE
    ios_base::sync_with_stdio(0);cin.tie(0);
    #else
    //freopen("input","r",stdin);
    #endif
    std::cout << std::fixed; std::cout.precision(7);
    int test=1;
    cin>>test;
    preprocess();
    for(int t = 1; t <= test; t++)_t = t,solve();
}
