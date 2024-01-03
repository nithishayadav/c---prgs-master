#include<bits/stdc++.h>
using namespace std;

int main(){
    //write a program that takes an input of age and prints if u re an adult or not
    /*
    int age;
    cout<<"enter your age";
    cin>>age;
    if (age>=18){
        cout<<"you are an adult";
    }
    else{
        cout<<"you are not an adult";
    }
    */

   int marks;
   cout<<"enter your marks";
   cin>>marks;

   if(marks<25){
    cout<<"your marks are "<<marks<<" ,and you got F grade";
   }
   else if( marks<=44){
    cout<<"your marks are "<<marks<<" ,and you got E grade";
   }
   else if( marks<=49){
    cout<<"your marks are "<<marks<<" ,and you got D grade";
   }
   else if( marks<=59){
    cout<<"your marks are "<<marks<<" ,and you got C grade";
   }
   else if( marks<=79){
    cout<<"your marks are "<<marks<<" ,and you got B grade";
   }
   else if( marks<=100){
    cout<<"your marks are "<<marks<<" ,and you got A grade";
   }

    return 0;
}