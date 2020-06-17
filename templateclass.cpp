 #include<iostream>
 using namespace std;
 template<class t>
 class arith{
 private:
     t a;
     t b;
 public:
    arith(t a, t b);
    t add();
    t sub();
 };
 template <class t>
 arith <t> :: arith(t a, t b)
 {
   this ->a = a;
   this ->b = b;
 }
 template <class t>
 t arith <t> :: add()
 {
     t c;
     c = a + b ;
     return c;
 }
 template <class t>
 t arith <t> :: sub()
 {
     t c;
     c = a - b ;
     return c;
 }
 int main()
 {
     arith <int> ar(10,5);
     cout<<ar.add()<<endl;
     arith <float> ar1(1.1,1.1);
     cout<<ar1.sub()<<endl;
     // in bool anything other than 0 is true
     arith <bool> ar2(10,10);
     cout<<ar2.add()<<endl;
     // char implicit type conversion
     arith <char> ar3(23,10);
     cout<<ar3.add()<<endl;
     arith <double> ar4(55,10);
     cout<<ar4.add()<<endl;
 }
