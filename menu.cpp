#include <iostream>
#include <conio.h>
using namespace std;

int data[100];
int n;

void tukar(int *a, int *b) {
  int t = *a;
  *a = *b; 
  *b = t; 
}

void info(){
  system ("cls");
  cout<<"Indonesia Hebat, Poliban Juara";
  getch();
}

void dMenu(){
system("cls");
cout<<"MENU"<<"\n";       
cout<<"1. Menu Input Array"<<"\n";            
cout<<"2. Menu Tampilkan Array"<<"\n";            
cout<<"3. Menu Sorting Array"<<"\n";           
cout<<"4. Menu Informasi"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Pilih Menu :";        

}

void mInputArray() {
  system("cls");
  cout << "Masukkan jumlah elemen (maks 100): ";
  cin >> n;
  if (n > 100) n = 100;

  for (int i = 0; i < n; i++) {
      cout << "Masukkan elemen ke-" << i + 1 << ": ";
      cin >> data[i];
  }

  cout << "Data berhasil disimpan.\n";
  cin.get(); cin.get();
}


void mTampilkanArray() {
  system("cls");
  if (n == 0) {
      cout << "Array kosong.\n";
  } else {
      cout << "Isi array: ";
      for (int i = 0; i < n; i++) {
          cout << data[i] << " ";
      }
      cout << endl;
  }
  cin.get(); cin.get();
}


int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1': 
    mInputArray();
    break;
   case '2':
    mTampilkanArray();
    break;  
   case '3':
    ();
    /* code */
    break;  
   case '4':
    info();
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}