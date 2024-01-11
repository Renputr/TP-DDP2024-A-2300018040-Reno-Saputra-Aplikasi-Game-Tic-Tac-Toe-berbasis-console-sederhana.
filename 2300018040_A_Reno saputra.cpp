#include <iostream>
using namespace std;
bool ulang = true;
char lanjut;
char angka[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int check_winner();
void papan_permainan();

	void papan_permainan(){
		
		system("cls");
		cout << "\t\t===================="<< endl;
		cout << "\t\t|   PROGRAM GAME   |"<< endl;
		cout << "\t\t===================="<< endl;
		cout << "\t\t|    Tic Tac Toe   |"<< endl;
		cout << "\t\t====================\n\n"<< endl;
		cout << "\t*Pemain 1 (X) vs Pemain 2 (O)*" << endl << endl;
		cout << endl;
		cout << "\t\t ________________"<< endl;
		cout << "\t\t|    |     |     |"<< endl;
		cout << "\t\t|  " << angka[0][0] << " | " << angka[0][1] << "   | " << angka[0][2] << "   |" << endl;
		cout << "\t\t|____|_____|_____|" << endl;
		cout << "\t\t|    |     |     |    " << endl;
		cout << "\t\t|  " << angka[1][0] << " | " << angka[1][1] << "   | " << angka[1][2] << "   |" << endl;
		cout << "\t\t|____|_____|_____|" << endl;
		cout << "\t\t|    |     |     |     " << endl;
		cout << "\t\t|  " << angka[2][0] << " | " << angka[2][1] << "   | " << angka[2][2] << "   |" << endl;
		cout << "\t\t|    |     |     |" << endl ;
		cout << "\t\t-----------------"<< endl;
	}
		
	
   int main() {
   	while(ulang){
	   
	int pemain = 1,i,choice;
	char  mark;
	do {
		papan_permainan();
		pemain=(pemain%2)?1:2;
		cout << "pemain"<< " " << pemain << ", Masukkan angka : ";
		cin >> choice;
		mark=(pemain == 1) ? 'x' : 'O';

    if (choice == 1 && angka[0][0] == '1') {
        angka[0][0] = mark;
    } else if (choice == 2 && angka[0][1] == '2') {
        angka[0][1] = mark;
    } else if (choice == 3 && angka[0][2] == '3') {
        angka[0][2] = mark;
    } else if (choice == 4 && angka[1][0] == '4') {
        angka[1][0] = mark;
    } else if (choice == 5 && angka[1][1] == '5') {
        angka[1][1] = mark;
    } else if (choice == 6 && angka[1][2] == '6') {
        angka[1][2] = mark;
    } else if (choice == 7 && angka[2][0] == '7') {
        angka[2][0] = mark;
    } else if (choice == 8 && angka[2][1] == '8') {
        angka[2][1] = mark;
    } else if (choice == 9 && angka[2][2] == '9') {
        angka[2][2] = mark;
    } else {
        cout << "Inputan Kode Salah. Coba lagi :) !!!" << endl;
        pemain--;
        cin.ignore();
        cin.get();
    }
    
     i=check_winner();
			 pemain++;
	}while(i ==- 1);
	papan_permainan();
	if(i==1){
		cout<<"==>\apemain"<< " "<<--pemain <<" win :) ";}
	   else{
	   	cout<<"==>\aGame draw :(";
	   cin.ignore();
       cin.get();
	   }
	   cout << "\n\nLanjut kan permainan klik (Y) || Keluar klik (T) : ";
        cin >> lanjut;
        if(lanjut == 'Y' || lanjut == 'y'){
            ulang = true;
            
            angka[0][0] = '1'; angka[0][1] = '2'; angka[0][2] = '3';
            angka[1][0] = '4'; angka[1][1] = '5'; angka[1][2] = '6';
            angka[2][0] = '7'; angka[2][1] = '8'; angka[2][2] = '9';
        }
        else if(lanjut == 'T' || lanjut == 't'){
            ulang = false;
        }			
		cout << "\n\n\tTrimakasih Telah Bermain!!!  " << endl;
		cout << "\n\tSemoga Dapat Terhibur :) " << endl;
	}

}

int check_winner(){
    if (angka[0][0] == angka[0][1] && angka[0][1] == angka[0][2]) {
        return 1;
    } else if (angka[1][0] == angka[1][1] && angka[1][1] == angka[1][2]) {
        return 1;
    } else if (angka[2][0] == angka[2][1] && angka[2][1] == angka[2][2]) {
        return 1;
    } else if (angka[0][0] == angka[1][0] && angka[1][0] == angka[2][0]) {
        return 1;
    } else if (angka[0][1] == angka[1][1] && angka[1][1] == angka[2][1]) {
        return 1;
    } else if (angka[0][2] == angka[1][2] && angka[1][2] == angka[2][2]) {
        return 1;
    } else if (angka[0][0] == angka[1][1] && angka[1][1] == angka[2][2]) {
        return 1;
    } else if (angka[0][2] == angka[1][1] && angka[1][1] == angka[2][0]) {
        return 1;
    } 
        //return 0;
     else {
        return -1;
    }

  
    return 0;
}
