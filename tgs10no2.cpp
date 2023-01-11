#include<iostream>
using namespace std;
void tambah (int *c, int *d);
int main(){
int a, b;
a = 9;
b = 3;
cout<<"Nilai dari Sebelum Pemanggilan Fungsi";
cout<<"\na = "<<a<<" b = "<<b;
tambah(&a,&b);
cout<<endl;
cout<<"\nNilai dari Setelah Pemanggilan Fungsi";
cout<<"\na = "<<a<<" b = "<<b;
getchar();
}
void tambah(int *c, int *d){
*c+=7;
*d+=3;
cout<<endl;
cout<<"\nNilai di Akhir Fungsi Tambah()";
cout<<"\nc = "<<*c<<" d = "<<*d;
}