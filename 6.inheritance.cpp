#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define ii pair<int,int> 
#define dbg(x) cout << #x << " = " << x << endl
#define F first
#define S second
#define all(a) a.begin(),a.end()


class Person{
   public:
   string name;

   Person(string name, int id){
    this->name = name;
    this->id = id;
   }

   protected:
   int id;
};

class Student : public Person{
    public:
    int marks;

    Student(string name, int id , int marks) : Person(name,id){
        this->marks = marks;
    }

    // always call the base class constructor using initializer list 
    // as we are doing it above

    void print(){
        cout << name << " " << id << " " << marks << endl;
    }
     
};

class ScienceStudent : public Student{

     public:
     string stream;

     ScienceStudent(string name,int id, int marks, string stream) : Student(name, id, marks){
       this-> stream = stream;
     }
};


// How to Solve diamond Problem

class A{
public:
    int x;
};
class B : virtual public A 
{ };
class C : virtual public A 
{ };
class D : public B, public C 
{ };

/// With virtual it makes a single call to constructor of A when you intialize D 


void solve(){
     
    Person* p1 = new Person("per1",123); 
    Student* s1 = new Student("dsf",1343,34);

    cout << (*s1).name << (*s1).marks <<  endl;

    // ScienceStudent ss1 = ScienceStudent("ed",34,34,"newstream");

    // cout << ss1.name << endl;
    
}


// Inheritance 
// protected access -> members accessible within class and derived class

// Multiple Inheritance 

// Multiple inheritance not allowed due to the Diamond problem 
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