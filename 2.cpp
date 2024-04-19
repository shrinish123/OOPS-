#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
#define ii pair<int,int> 
#define F first
#define S second
#define all(a) a.begin(),a.end()

class Employee;

class Printer{
    public: 
    void printEmployee(Employee &E);
};   

class Employee{
    private:
    int id;
    public:
    string name;

    friend void Printer::printEmployee(Employee &E);
};

void Printer::printEmployee(Employee &E){
    cout << E.id << " " << E.name << endl;
}

void solve(){
   
}

// Friend Class 
// Friend class can access private and protected members of the 
// class 
// Fault of OOP in c++ as accessing private members 
// Friend is not a 2 way property 
// Here only B can access private parts of A and not vice versa

// Friend Function 
// A friend func can be either :
// 1. method of another class
// 2. global function 

// Complete friend functions and declarations 
// THe only way friend functions would work is as follows


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