#include <iostream>
using namespace std;
int factorial(int n);
unsigned long long factorialRecu(int n);
int main() {
    int n, s, q;
    cout << "ingrese un numero: " << endl;
    cin>>n;
    s=factorial(n);
    cout<<"factorial de "<<n<<" es "<<s;

    q=factorialRecu(n);
    cout<<"\n\nfactorial (forma recursiva) de "<<n<<" es "<<q;

    return 0;
}

int factorial(int n){
    unsigned long long f=1;
    for(int i=1;i<=n;++i){
        f*=i;
    }
    return f;
}

//recursividad

unsigned long long factorialRecu(int n){
    if (n==0){
        return 1;
    }else{
        return n*factorialRecu(n-1);
    }
}