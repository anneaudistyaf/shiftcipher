/* 
Nama : Anne Audistya Fernanda
NPM : 140810180059
Kelas : A
Tugas Kriptografi Program Shift Cipher
*/

#include <iostream> 
#include<math.h>
using namespace std; 
  
string enkripsi (string plain, int K) //enkripsi
{ 
    string result = "";  //inisialisasi dengan null string
   
    for (int i=0;i<plain.length();i++) 
    { 
        if (isupper(plain[i])) 
            result += char(int(plain[i]+K-65)%26 +65); 
  
    	else
        	result += char(int(plain[i]+K-97)%26 +97); 
    } 
   
    return result; 
} 

string dekripsi(string cipher, int K) //dekripsi
{ 
    string result = ""; //inisialisasi dengan null string
  
    for (int j=0;j<cipher.length();j++) 
    { 
        if (isupper(cipher[j])) 
            result += char(int(cipher[j]-K-65)%26 +65); 
  
    	else
        	result += char(int(cipher[j]-K-97)%26 +97); 
    } 
  
    return result; 
} 


int main() 
{ 
    string plain,cipher;
	int K, pilihan;
	cout << "\t        SHIFT CIPHER          " << endl;
	cout << "\t------------------------------" << endl;
	cout << "\t 1. Enkripsi                  " << endl;
	cout << "\t 2. Dekripsi                  " << endl;
	cout << "\t------------------------------" << endl;
	cout << "\tMasukkan pilihan anda : "; cin>>pilihan;
				
	switch(pilihan){
		case 1: 
			system("cls");
			cout << "\t---------------------------------------" <<endl;
			cout << "\t\t\tENKRIPSI"<<endl;
			cout << "\t---------------------------------------" <<endl;
			cout << "\tMasukkan plaintext: "; cin>>plain;
			cout << "\tMasukkan Key: " ; cin>>K;
			cout << "\t---------------------------------------" <<endl;
			cout << "\n\tHasil Enkripsi: " << enkripsi(plain, K)<<endl; 
			cout << "\t---------------------------------------\n\n";
			system("pause");
		break;
		case 2:
			system("cls");
			cout << "\t---------------------------------------" <<endl;
			cout << "\t\t\tDEKRIPSI"<<endl;
			cout << "\t---------------------------------------" <<endl;
			cout << "\tMasukkan Ciphertext: "; cin>>cipher;
			cout << "\tMasukkan Key : " ; cin>>K;
			cout << "\t---------------------------------------" <<endl;
			cout << "\n\tDekripsi nya : " <<dekripsi(cipher, K)<<endl;
			cout << "\t---------------------------------------" <<endl; 
			system("pause");
		break;
		default :
			cout << "\tMaaf yang anda masukkan salah!";
			break;
	}
}
