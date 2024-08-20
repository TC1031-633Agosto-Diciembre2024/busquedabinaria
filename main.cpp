#include <iostream>
using namespace std;

int* busquedaBinaria(int* arr, int size, int valor) {
    int* inicio=arr;
    int* fin= arr + size -1;
    while(inicio <= fin) {
        int* medio= inicio + (fin-inicio)/2;
        if(*medio==valor) {
            return medio;
        }else if(*medio<valor) {
            inicio=medio+1;
        }else {
            fin=medio-1;
        }
    }
    return nullptr;
}


int main() {
    int arr[]={2,3,5,7,8,10,13,15,27};
    cout<<"Dame el número a buscar: "<<endl;
    int buscar;
    cin>>buscar;
    int* resultado=busquedaBinaria(arr,9,buscar);
    if(resultado!=nullptr) {
        cout<<"El elemento "<<buscar<<" está en la pos: "<<resultado-arr<<endl;
    }else {
        cout<<"No encontré el elemento"<<endl;
    }
    return 0;
}
