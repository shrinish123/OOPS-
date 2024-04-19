#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define ii pair<int,int> 
#define dbg(x) cout << #x << " = " << x << endl
#define F first
#define S second
#define all(a) a.begin(),a.end()

class Point{
   public : 
   int x,y;

   Point(){            // Default constructor 
       x = 0; y = 0;
   }

   Point(int x1, int y1){  // Parametrised constructor 
    x = x1; y = y1;
   }

   void print(){
    cout << x << " " << y << endl;
   }
};

class Employee{
   public:
   int salary;
   string name;

   Employee() : salary(0){  // Intializer List way to make constructor 
     name = "test";
   }

   Employee(string nam, int sal) : name(nam) , salary(sal){

   }

   void print(){
    cout << salary << " " << name << endl;
   }

};

class Test{
   public:
   int* ptr;

   Test(){
    ptr = new int();
   }

   void setptr(int a){
      *ptr = a;
   }

   Test(Test &t){   // copy constructor for deep copy
        int val =  *(t.ptr);
        ptr = new int(val);
    }
   
    ~Test(){
     cout << "Destructor is called";
    }
    
};

// *** always intilasizer list as its more efficient *** 
// When we use normal constructor -> it calls default constructor and then parameterized constructor
// In intilizer list only parameterized gets called 


void solve(){
    Point p1 = Point();
    Point p2 = Point(2,4);
    Point* p3ptr = new Point();
    p3ptr->x = 4; 
    (*p3ptr).y = 5;
    (p3ptr->print)();

    Employee* E1 = new Employee();
    (E1->print)();

    // THis 
    // Test t1;
    // t1 = t2;
    // and this 
    // Test t1(t2);
    // are diffrent as copy constructor is called only here
    // and in first assignment operator is used;

}

// Constructors 
// always called by compliler if not defined 
// 3 types : default,parametrized,copy constructor 


// ** Copy Constructor **
// Copy constructor does a shallow copy,where copies one by one 
// So pointers are copied,addresses are copied and new meomry is 
// not created 
// We neeed to hence create a deep copy 

// ** Destructors **  
// 1 destructor only 
// called when the object goes out of scope 
// Mutiple objects in same scope destructors called in reverse order
// Default destructors do not remove dynamic memory
// so write destructors when there is dynamic memory allocation



signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("error.txt", "w", stderr);
     freopen("output.txt", "w", stdout);
     #endif
    solve();
}