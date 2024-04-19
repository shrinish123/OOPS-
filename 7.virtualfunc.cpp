#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define ii pair<int,int> 
#define dbg(x) cout << #x << " = " << x << endl
#define F first
#define S second
#define all(a) a.begin(),a.end()


class Base{
    public:
    int x;

    virtual void print(){
        cout << x << endl;
    }
};

class Derived : public Base {
   public:
   int y;

   void print(){
    cout << x << " " << y << endl;
   }
};

class Base1{
    public:
    int x;

    virtual void print(){
      cout << x << endl;
    }
};

class Derived1 : public Base1 {
    public:
    int y;

    void print() override { 
     cout << x << " " << y << endl;
    }
};

void solve(){
      
      // normal 
      Derived* d = new Derived;
  
      // but can also do this , where pointer type is of base class when returned is a derived class pointer 
      Base* d2 = new Derived();

      // Also something like this works 
      Derived dd;
      Base &b = dd; 


      // Virtual Functions 
      Base* d1 = new Derived();
      d1->print();
      
     
      Base* dd1 = new Derived();
      dd1->print();

      
}


// Virtual Functions 
// A base class type reference or pointer can refer to a derived class object
// Virtual function -> Runtime polymorphism 
// Function overloading -> Compile Time polymorphism 
// Basically it decides during runtime which one to execute 



signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("error.txt", "w", stderr);
     freopen("output.txt", "w", stdout);
     #endif
    solve();
}