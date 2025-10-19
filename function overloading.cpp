#include <iostream>
using namespace std;
int sum(int a,int b){
    cout<<"Performing integer sum"<<endl;
    return a+b;
}
double sum(int a,int b,int c){
    cout<<"Performing floating sum"<<endl;
    return a+b+c;
}

int main() {
    int sum_1=sum(5,10);
    cout<<"5+10="<<sum_1<<endl;
    double sum_2=sum(5,10,6);
    cout<<"5+10+6="<<sum_2<<endl;

    return 0;
}
