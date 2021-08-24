#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main() {
  int menu;

  string username, password;
  string adminuser, adminpass;
  string memberuser, memberpass;
  bool check_login_admin, check_login_member;



  // adminuser = "admin";
  // adminpass = "admin123";
  // memberuser = "member";
  // memberpass = "member123";

  cout << "Anda Ingin Login Sebagai : \n" << endl;
  cout << "1.Admin [1]" << endl;
  cout << "2.Member [2]" << endl;

  cout << "\nMasukan Pilihan : ";
  cin >> menu;

  switch (menu) {
    case 1:
      system("cls");

      adminuser = "admin";
      adminpass = "admin123";

      cout << "---------- LOGIN ADMIN ----------\n" << endl;

      cout << "Username : ";
      cin >> username;

      cout << "Password : ";
      cin >> password;

      check_login_admin = (username == adminuser) && (password == adminpass);

      if (check_login_admin) {
        system("cls");
        cout << "--------------------------------------\n" << endl;
        cout << "Anda Berhasil Login Sebagai Admin\n" << endl;
        cout << "--------------------------------------\n" << endl;
      } else {
        cout << "\nMaaf, Login Gagal Tolong Masukan User dan Pass Anda Dengan Benar !" << endl;
      }

      break;

    case 2:
      system("cls");

      memberuser = "member";
      memberpass = "member123";

      cout << "---------- LOGIN MEMBER ----------\n" << endl;

      cout << "Username : ";
      cin >> username;

      cout << "Password : ";
      cin >> password;

      check_login_member = (username == memberuser) && (password == memberpass);

      if (check_login_member) {
        system("cls");
        cout << "--------------------------------------\n" << endl;
        cout << "Anda Berhasil Login Sebagai Member\n" << endl;
        cout << "--------------------------------------\n" << endl;
      } else {
        cout << "\nMaaf, Login Gagal Tolong Masukan User dan Pass Anda Dengan Benar !" << endl;
      }

      break;

    default:
    system("cls");
      cout << "Tolong Masukan Pilihan yang Tersedia" << endl;
  }

  getch();
  return 0;
}
