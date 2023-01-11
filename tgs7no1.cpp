#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int i;
char namanya[5][20];
int nilai1[5];
int nilai2[5];
int hasilnya[5];

for(i=1;i<=2;i++){
cout<<"Data Ke - "<<i<<endl;
cout<<"Nama Siswa : ";
cin >> namanya[i];
  cout<<"Nilai Ujian Pertengahan : " ; 
  cin>>nilai1[i];
  cout<<"Nilai Final : "; 
  cin>>nilai2[i];
}
  for(i=1;i<=2;i++){
  
  hasilnya[i] = (nilai1[i]+nilai2[i])/2;
  cout<<endl;
    }
  cout<<"------------------------------------------"<<endl;
cout<<"No. Nama Siswa \t\t Nilai \tNilai\tHasil"<<endl;
cout<<" \t\t\t\t\tPertengahan Final   Ujian"<<endl;
cout<<"------------------------------------------"<<endl;
for(i=1;i<=2;i++)
{
cout<<setiosflags(ios::left)<<setw(4)<<i;
cout<<setiosflags(ios::left)<<setw(19)<<namanya[i];
cout<<nilai1[i] <<"     ";
cout<<nilai2[i] <<"      ";
cout<<hasilnya[i] <<"              "<<endl;
}
cout<<"------------------------------------------"<<endl;
getchar();
}