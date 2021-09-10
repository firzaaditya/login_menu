#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main() {

  int menu;
  int limits_login = 3;
  int check_limits = 1;

  int menu1 = 1;
  int menu2 = 2;
  int salahinput = 1; // nilai awal salah input
  int batasinput = -1; // batas akhir nilai input

  string username, password;
  string adminuser, adminpass;
  string memberuser, memberpass;

  bool syarat_loop_login_admin;
  bool syarat_loop_login_member;
  bool check_menu_list;
  bool check_login_admin, check_login_member;

  // adminuser = "admin";
  // adminpass = "admin123";
  // memberuser = "member";
  // memberpass = "member123";

  // cout << "Anda Ingin Login Sebagai : \n" << endl;
  // cout << "1.Admin [1]" << endl;
  // cout << "2.Member [2]" << endl;
  //
  // cout << "\nMasukan Pilihan : ";
  // cin >> menu;

  do {
    system("cls");
    // cout << "Note: Pilihan yang anda input tidak Tersedia !\n" << endl;

    cout << "Anda Ingin Login Sebagai : \n" << endl;
    cout << "1.Admin [1]" << endl;
    cout << "2.Member [2]" << endl;

    cout << "\nMasukan Pilihan : ";
    cin >> menu;

    check_menu_list = (menu == menu1) || (menu == menu2);
    /*
      maksud dari [boolean] dengan operator logika [ or ] adalah jika inputan variable [menu] sama dengan
      [menu1] atau [menu2] akan menghasilkan nilai [true] dimana pada [if statement] di bawah jika [if statement]
      terpenuhi dia akan menjalankan funsi [break] yg gunanya dia akan keluar dari looping , dan sifat dari operator
      logika [ or ] adalah jika salah 1 nya menghasilkan [true] dia akan menghasilkan [true] jadi jika inputan variable
      [menu] itu adalah sama dengan [menu1] atau [menu2] dia akan menghasilkan nilai [true] dan nilai variable [menu]
      akan sesuai dengan apa yang di inputkan yaitu nilai [menu1] atau [menu2]
    */

    if (check_menu_list) {
      break; // keluar dari looping
    } else {
      continue; // melanjutkan looping
      /*
        ini akan melakukan looping lagi , dimana jika input pada [menu] tidak sama dengan [menu1]
        atau [menu2] maka [if statement] akan menjalankan statement [else] karena pernyataan [if statement]
        tidak ada yang terpenuhi , dan isi dari statement [else] adalah [continue] yg berfungsi melanjutkan
        looping atau melakukan looping kembali , maka jika input [menu] tidak sama dengan [menu1] atau [menu2]
        dia akan melakukan input ulang terus menerus
      */
    }

  } while (salahinput > batasinput);
  /*
    ini akan mengulang terus menerus karena nilai [salahinput] lebih besar dari [batasinput] yang mana nilai
    [salahinput] adalah 1 dan nilai [batasinput] adalah -1 , dan itu menghasilkan nilai true pada perulangan
    jadi dia akan melakukan looping terus menerus tanpa henti
  */

  switch (menu) {
    case 1:
      adminuser = "admin";
      adminpass = "admin123";

      do {
        system("cls");
        cout << "---------- LOGIN ADMIN ----------\n" << endl;

        cout << "Username : ";
        cin >> username;

        cout << "Password : ";
        cin >> password;

        check_login_admin = (username == adminuser) && (password == adminpass);
        syarat_loop_login_admin = (username != adminuser) || (password != adminpass);

        if (check_login_admin) {
          system("cls");
          cout << "--------------------------------------\n" << endl;
          cout << "Anda Berhasil Login Sebagai Admin\n" << endl;
          cout << "--------------------------------------\n" << endl;
          break;
        } else if (check_limits == limits_login) {
          system("cls");
          cout << "--------------------------------------\n" << endl;
          cout << "Anda Telah Gagal Login Sebanyak " << check_limits << "x" << endl;
          cout << "Dan Anda Akan Keluar Dari Program\n" << endl;
          cout << "--------------------------------------\n" << endl;
          break;
        }

        check_limits++;
      } while (syarat_loop_login_admin);

      break; // end case 1

    case 2:
      memberuser = "member";
      memberpass = "member123";

      do {
        system("cls");
        cout << "---------- LOGIN MEMBER ----------\n" << endl;

        cout << "Username : ";
        cin >> username;

        cout << "Password : ";
        cin >> password;

        check_login_member = (username == memberuser) && (password == memberpass);
        syarat_loop_login_member = (username != memberuser) || (password != memberpass);

        if (check_login_member) {
          system("cls");
          cout << "--------------------------------------\n" << endl;
          cout << "Anda Berhasil Login Sebagai Member\n" << endl;
          cout << "--------------------------------------\n" << endl;
          break;
        } else if (check_limits == limits_login) {
          system("cls");
          cout << "--------------------------------------\n" << endl;
          cout << "Anda Telah Gagal Login Sebanyak " << check_limits << "x" << endl;
          cout << "Dan Anda Akan Keluar Dari Program\n" << endl;
          cout << "--------------------------------------\n" << endl;
          break;
        }

        check_limits++;
      } while (syarat_loop_login_member);

      break; // end case 2

      // default:
      //   do {
      //     system("cls");
      //     cout << "Note: Pilihan yang anda input tidak Tersedia !\n" << endl;
      //
      //     cout << "Anda Ingin Login Sebagai : \n" << endl;
      //     cout << "1.Admin [1]" << endl;
      //     cout << "2.Member [2]" << endl;
      //
      //     cout << "\nMasukan Pilihan : ";
      //     cin >> menu;
      //
      //     slrm = menu1, menu2;
      //
      //   } while (menu != slrm);
      // note : di atas kode eksperimen doang gk usah di pake yang [default]
  }

  getch();
  return 0;
}

/*
  note : kalo make tipe data int , pas masukin input yang salah jangan make huruf , nanti malah jadi looping
  kaga ada abis nya , juga kalo input salah nya lebih dari nilai maksimal tipe data int bakal looping
  terus juga , nilai max tipe data int adalah 2147483647 , jadi kalo input salah nya lebih dari itu
  yaitu 2147483648 bakal looping terus , juga nilai max mines nya yaitu -2147483648 kalo input salah nya
  lebih dari itu yaitu misal -2147483649 maka akan terjadi looping terus sampe ya gk tau
*/
