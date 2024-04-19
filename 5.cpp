#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define ii pair<int,int> 
#define dbg(x) cout << #x << " = " << x << endl
#define F first
#define S second
#define all(a) a.begin(),a.end()

class Test{
    public:
   int x,y;

   Test(int x, int y){
    this->x = x;
    this->y = y;
   }

   Test* setX(int x){
    this->x  = x;
    return this;
   }
   
   void print(){
    cout << (*this).x << " " << (*this).y << endl;
   }

};

void solve(){
    Test p1 = Test(2,3);
    p1.print();

    Test* p1ptr = p1.setX(4);
    cout << p1ptr->x << endl;

}


// this pointer 
// to access the own object
// used to chaining 
// 




signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("error.txt", "w", stderr);
     freopen("output.txt", "w", stdout);
     #endif
    solve();
}