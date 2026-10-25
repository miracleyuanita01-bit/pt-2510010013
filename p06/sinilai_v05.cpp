#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

char getHuruf(int nilai){
    if(nilai >= 85) return 'A';
    if(nilai >= 70) return 'B';
    if(nilai >= 55) return 'C';
    if(nilai >= 40) return 'D';
    return 'E';
}

int main(){
    int n;
    if(!(cin >> n)) return 0;
    vector<int> nilai(n);
    for(int i=0;i<n;i++) cin >> nilai[i];

    // 3. pencarian nilai tertinggi
    int tert = nilai[0];
    for(int i=1;i<n;i++) if(nilai[i] > tert) tert = nilai[i];

    // 2. penghitung huruf lewat switch
    int cA=0,cB=0,cC=0,cD=0,cE=0;
    for(int i=0;i<n;i++){
        char h = getHuruf(nilai[i]);
        switch(h){
            case 'A': cA++; break;
            case 'B': cB++; break;
            case 'C': cC++; break;
            case 'D': cD++; break;
            case 'E': cE++; break;
        }
    }

    // 1. baris berkolom
    cout << setw(5) << "No" << setw(8) << "Nilai" << setw(8) << "Huruf" << endl;
    cout << string(21,'-') << endl;
    for(int i=0;i<n;i++){
        cout << setw(5) << i+1 << setw(8) << nilai[i] << setw(8) << getHuruf(nilai[i]) << endl;
    }

    cout << "\nLaporan:\n";
    cout << "Nilai tertinggi: " << tert << endl;
    cout << "A=" << cA << " B=" << cB << " C=" << cC << " D=" << cD << " E=" << cE << endl;

    // 4. sebaran batang dengan perulangan bersarang
    cout << "\nSebaran:\n";
    int counts[5] = {cA,cB,cC,cD,cE};
    char labels[5] = {'A','B','C','D','E'};
    for(int i=0;i<5;i++){
        cout << labels[i] << ": ";
        for(int j=0;j<counts[i];j++) cout << "*";
        cout << " (" << counts[i] << ")" << endl;
    }
    return 0;
}