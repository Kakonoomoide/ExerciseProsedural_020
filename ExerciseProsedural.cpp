#include <iostream>
using namespace std;

int n, lulus = 0, gagal = 0;
float math[20], english[20], NilaiRerata[20];
string siswa[20], hasil[20];

float rerata(float m, float b) {
	return (m + b) / 2;
}


string status(float r, float n) {
    if (r >= 70 || n > 80) {
        return "lulus";
    }
    else {
        return "gagal";
    }
}

void  input() {

    while (true) {                                       
        cout << "masukan total siswa : ";
        cin >> n;
        if (n <= 20)                              
            break;                               
        else {                                       
            cout << "total siswa tidak lebih dari 20 !";
        }
    }

    cout << endl;
    cout << "=================================" << endl;
    cout << "    masukan nama dan nilai       " << endl;
    cout << "=================================" << endl;

    for (int i = 0; i < n; i++) {
        cout << endl;
        cout << (i + 1)<< "." << "masukan nama siswa    : ";
        cin >> siswa[i];
        cout << "  masukan nilai math    : ";
        cin >> math[i];
        cout << "  masukan nilai english : ";
        cin >> english[i];
        NilaiRerata[i] = rerata(math[i], english[i]);
    }
}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "=  hasil dari penerimaan siswa  =" << endl;
    cout << "=================================" << endl;
    cout << "siswa \t\thasil" << endl;
    for (int j = 0; j < n; j++) {   
        cout << siswa[j] << "\t\t" << status(rerata(math[j], english[j]), math[j]) << endl;
    }
}

void status1() {
    for (int j = 0; j < n; j++) {
        if (math[j] + english[j] / 2 >= 70 || math[j] > 80) {
            lulus++;
        }
        else {
            gagal++;
        }
    }
}


int main(){
    input();
    display();
    status1();
    cout << "\njumlah siswa yang lulus : " << lulus <<"/"<< n << endl;
    cout << "jumlah siswa yang gagal : " << gagal << "/" << n << endl;

}