#include <iostream>
using namespace std;

int main()
{
    cout<<"Selamat Datang di Perusahaan TITANS"<<endl;
    cout<<"Silahkan Login"<<endl;
    string username, password;
    
     do
   {
        cout<<"Masukkan Username = ";
        cin>>username;
        cout<<"Masukkan Password = ";
        cin>>password;
   
        if (username != "Titaniums")
        {
            cout<<"Username atau Password yang anda masukkan salah!"<<endl;

        }
        else if (password != "152")
        {
            cout<<"Username atau Password yang anda masukkan salah!"<<endl;

        }
        else if (username != "Titaniums" && password != "152")
        {
            cout<<"Username atau Password yang anda masukkan salah!"<<endl;
        }
        else 
        {
            cout<<"Selamat datang ke akun anda!" << username << endl;
            break;

        }
 
    } while (username != "Titaniums" || password != "152");

    return 0;

}