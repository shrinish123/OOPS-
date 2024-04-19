#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define ii pair<int,int> 
#define dbg(x) cout << #x << " = " << x << endl
#define F first
#define S second
#define all(a) a.begin(),a.end()

class A{
    public:
    int a;
};

class Data{
    public:
    int a,b,c;

    int setA(int ga){
        a = ga;
    }
};


void solve(){
    A objb;
    const A obja = objb;  // cannot modify object after this and should be intialised during declaration itself
   
    A *objptr = &objb;
    cout << obja.a << " " << objptr -> a << endl;
    
    // pointer to object
    Data d1;
    Data* d1ptr = &d1;
    cout << d1ptr->a << " " << d1.b << endl;

    // pointer to data members of a class 
    int Data::*aptr;
    aptr = &Data::a;
    

    int Data::*bptr = &Data::b; // pointer to data member b of class Data
    cout << d1.*bptr << endl;  // using the ptr on a obj to access the data mermber of the obj 

    d1ptr->*bptr = 10;
    cout << d1.b << endl;

    // pointers to member functions of class
    int (Data::*fnptr)(int) = Data::setA;

    Data dobj = *d1ptr;
   
    (d1.*fnptr)(5);     
    (dobj.*fnptr)(5);

    cout << d1ptr->*aptr << endl;
}


// Const member Functions -> const methods 
// const objects cannot be modified 
// const method -> constrained that it cannot change any value of obj
// Hence const obj can only access const methods 
// But const function -> called on both const, non-const of objects 

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("error.txt", "w", stderr);
     freopen("output.txt", "w", stdout);
     #endif
    solve();
}