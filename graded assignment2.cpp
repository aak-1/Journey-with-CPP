#include<iostream>
#include<cmath>
using namespace std;
float age,fem, fph, fin;

void blue(float a,float b,float c){
    float ind=a+b+c;
    cout<<"The biorhythm index is "<<ind;
}

float cycle (float d) {
    fem = sin(age*28*6.2831);
    fph = sin(age*23*6.2831);
    fin = sin(age*33*6.2831);
    cout<<"Emotional index is "<<fem<<endl;
    cout<<"Physical index is "<<fph<<endl;
    cout<<"Intellectual index is "<<fin<<endl;
}

int main(){
    cout<<"Enter age in days ";
    cin>>age;
    cycle(age);
    blue (fem,fph,fin);
}




