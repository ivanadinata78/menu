#include <iostream>
#include <conio.h>
using namespace std;

int arr[100];
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
      cin >> arr[i];
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
          cout << arr[i] << " ";
      }
      cout << endl;
  }
  cin.get(); cin.get();
}


void sortArray() {
  system("cls");
  if (n == 0) {
      cout << "Array kosong. Tidak dapat diurutkan.\n";
      cin.get(); cin.get();
      return;
  }

  char mode;
  cout << "Pilih metode pengurutan:\n";
  cout << "a. Ascending\n";
  cout << "b. Descending\n";
  cout << "Pilihan Anda: ";
  cin >> mode;

  if (mode == 'a' || mode == 'A') {
      // Exchange Sort Ascending
      for (int i = 0; i < n - 1; i++) {
          for (int j = i + 1; j < n; j++) {
              if (arr[i] > arr[j]) {
                  tukar(&arr[i], &arr[j]);
              }
          }
      }
      cout << "Array berhasil diurutkan ASCENDING.\n";

  } else if (mode == 'b' || mode == 'B') {
      // Exchange Sort Descending
      for (int i = 0; i < n - 1; i++) {
          for (int j = i + 1; j < n; j++) {
              if (arr[i] < arr[j]) {
                  tukar(&arr[i], &arr[j]);
              }
          }
      }
      cout << "Array berhasil diurutkan DESCENDING.\n";

  } else {
      cout << "Pilihan tidak valid.\n";
      cin.get(); cin.get();
      return;
  }

  //Cetak isi array yang sudah sorting
  cout << "Isi array setelah sorting:\n";
  for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
  }
  cout << endl;

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
    sortArray();
    break;  
   case '4':
    info();
    
    break;  
  case '5':
    
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