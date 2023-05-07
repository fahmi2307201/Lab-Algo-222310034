#include <iostream>
#include <cstring>
using namespace std;

class mahasiswa {
  public:
  virtual void status (){
    cout <<"  " <<endl;
  }
  virtual void nama (){
    cout <<"  " <<endl;
  }
  virtual void umur (){
    cout <<"  " <<endl;
  }
  virtual void jurusan (){
    cout <<"  " <<endl;
  }
  virtual void fakultas (){
    cout <<"  " <<endl;
  }
};

class Fahmi : public mahasiswa  {
public :
void status (){
  cout <<"Mahasiswa aktif "<<endl;
 }
void nama (){
  cout<<"Muhamad Fahmi F"<<endl;
 }
void umur (){
  cout<<"21 Tahun"<<endl;
 }
void jurusan (){
  cout<<"Teknologi Informasi"<<endl;
 }
void fakultas (){
  cout<<"Informatika"<<endl;
 }
};

class Hikmal : public mahasiswa  {
public :
void status (){
  cout <<"Mahasiswa nonaktif "<<endl;
 }
void nama (){
  cout<<"Hikmal"<<endl;
 }
void umur (){
  cout<<"18 Tahun"<<endl;
 }
void jurusan (){
  cout<<"Tata Boga"<<endl;
 }
void fakultas (){
  cout<<"Teknik"<<endl;
 }
};

int main (){
  mahasiswa *data1 = new Fahmi ();
  mahasiswa *data2 = new Hikmal ();

  cout <<"========POLIMORPHISM======="<<endl;
  cout <<"===Tugas Muhamad Fahmi F==="<<endl;
  cout <<"\nData Mahasiswa 1: "<<endl;
  cout <<"Status Mahasiswa : "; data1  ->  status ();
  cout <<"Nama Mahasiswa : "; data1  ->  nama ();
  cout <<"Umur : "; data1  ->  umur ();
  cout <<"Jurusan : ";data1  ->  jurusan ();
  cout <<"Fakultas : ";data1  ->  fakultas ();

  cout <<"\n\nData Mahasiswa 2: "<<endl;
  cout <<"Status Mahasiswa : ";data2  ->  status ();
  cout <<"Nama Mahasiswa : ";data2  ->  nama ();
  cout <<"Umur : ";data2  ->  umur ();
  cout <<"Jurusan : ";data2  ->  jurusan ();
  cout <<"Fakultas : ";data2  ->  fakultas ();
  return 0;
}
