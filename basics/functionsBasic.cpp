// 1. declare and call a function named add, sub, mul, div
// 2. write a function to print the mutliplicative table of a give number 
 // hint: loop, multiply. void type


// work: 1. study and learn more about typecasting
// 2. learn how to use iomanip header file and print three digits only after the decimal point
#include<iostream>
#include<iomanip>//oops
//iomanip 
using namespace std;

int add(int a , int b){
    int sum = a+b;
    return sum;
}
int mul(int a , int b){
    int mulsum = a*b;
    return mulsum;
}
int sub(int a , int b){
    int subsum = a-b;
    return subsum;
}
float divide(int a , int b){
    float dividesum = float(a)/float(b); //this is called typecasting
    return dividesum;
}
void table(int num){
    for(int i=1;i<=10;i++){
 cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
}
int main(){

    int a = 10;
    int b = 5;

   int ans = add(a,b);
    cout<<ans<<endl;
   int ans1 = mul(a,b);
    cout<<ans1<<endl;
    int ans2 = sub(a,b);
    cout<<ans2<<endl;
    float ans3 = divide(a,b);
    cout<<fixed<<setprecision(3)<<ans3<<endl;
//    int num;
//    cout<<"enter a number to print table:";
//    cin>>num;
//     table(num);

    return 0;
}