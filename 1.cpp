#include<bits/stdc++.h>
using namespace std;

class MyClass{
   public:
   int num;
   string s;

   void print(){
     cout << num << " " << s << endl;
   }
   //declare it first
   void test();

};

// another way to define methods 
void MyClass :: test(){
    cout << "Hello" << endl;
}

class Box{
   public:
   static int boxcount;

   static int getCount(){
    return boxcount;
   }

   static int setCount(int cnt){
    boxcount = cnt;
   }

};

// always intialize static members outside of class as memory not in class
int Box::boxcount = 0;

void solve(){
    MyClass obj;
    obj.num = 5;
    obj.s = "fe";

    // another way to create object 
    MyClass* obj2 = new MyClass();

    MyClass test = *obj2;

    cout << test.num << endl;

    obj2->num = 5;
    obj2->print();

    obj.print();
    obj.test();

    MyClass obj4 = obj;
    obj4.print();
   
    MyClass obj3{obj};
    obj3.print();

    cout << Box::boxcount << endl;

    Box box1;
    box1.boxcount++;
    

    cout << Box::boxcount << endl;

    Box::setCount(5);

    Box::boxcount++;

    cout << Box::getCount() << endl;
}

// Access Specifiers 
// 1. public :  outside the class
// 2. private : cannot be accessed or viewed outside the class 
// 3. protected : can be accessed from inherited classes 
// default -> private

// Default Copying 
// 1. Date d1 = my_birthday
// 2. Date d2{my_birthday}

// Static Members of a Class 
// when member is static it is global to class 
// so no matter no of objects there will be  of one copy of the 
// static members 
// can be accessed using class too.
// static members are initalized to 0
// Static Members cannot be INTIALIZSED inside a class but 
// need to initalise them outside as CLASS does not have any
// memory
// Even private members can be static but as they are private
// you can only read and update them using static class members 

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
    solve();
}