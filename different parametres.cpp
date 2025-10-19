#include <iostream>
using namespace std;
float sum(float a,int b){
    cout<<"Performing integer sum"<<endl;
    return a+b;
}
float sum(int a,float b){
    cout<<"Performing floating sum"<<endl;
    return a+b;
}

int main() {
    float sum_1=(float)(5,10);
    cout<<"5+10="<<sum_1<<endl;
    float sum_2=(float)sum(5,5.5);
    cout<<"5+10="<<sum_2<<endl;

    return 0;
}
