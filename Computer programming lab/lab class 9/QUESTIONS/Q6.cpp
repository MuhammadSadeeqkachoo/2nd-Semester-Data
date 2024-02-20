#include<iostream>
using namespace std;

   int addition(int x,int y){
   return x+y;}

   int muliplication(int x,int y){
   return x*y;}

   int division(int x,int y){
   return x/y;}

   int subtraction(int x,int y){
   return x-y;}

   int calculator(int p,int q,int(*r)(int,int)){
       int res;
       res=(*r)(p,q);
       return res;}

    int main(){
        int x=calculator(4,5,addition);
        cout<<"x = "<<x;
        return 0;}




