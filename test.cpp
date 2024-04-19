#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
#define ii pair<int,int> 
#define F first
#define S second
#define all(a) a.begin(),a.end()


void test(int b){
   
   cout << b*2 << endl;
}

void solve(){
    


    // ** 2 ways to declare a pointer ** 
    // int a = 10;

    // ** 1st way **
    // int * ptr;
    // ptr = &a;
    // cout << *ptr << endl;

    // ** 2nd way **
    // int *ptr = &a;
    // cout << *ptr << endl;

    // *** 2 ways fo a function pointer function ** 
    
    // 1st way 
    void (*fnptr)(int) = test; 
    (*fnptr)(6);

    // 2nd way 
    void (*testpointer)(int);
    testpointer  = test; 
    (*testpointer)(5);

    
}




signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
    // int _t;cin>>_t;while(_t--)
    solve();
    // cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
}