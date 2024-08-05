#include <iostream>
using namespace std;

void vasos(float &v1, float &v2);

int main() {
    float v1, v2;
    cout << "ingrese cantidad de jugo Manzana: " << endl;
    cin>>v1;
    cout << "ingrese cantidad de jugo Naranja: " << endl;
    cin>>v2;
    cout<<"NARANJA:"<<v2<<endl;
    cout<<"MANZANA:"<<v1<<endl;

    vasos(v1,v2);
    cout<<"NARANJA:"<<v2<<endl;
    cout<<"MANZANA:"<<v1<<endl;
    return 0;
}

void vasos(float &v1, float &v2){
    float a= v1;
    v1=v2;
    v2=a;
}
