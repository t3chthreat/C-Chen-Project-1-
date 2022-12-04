#include <iostream>
#include <fstream>
using namespace std;
int main() {
    const int MAXR = 480, MAXC = 640;
    uint8_t colors[MAXR][MAXC][3];
    for(int i = 0; i< MAXR; i++) {
        for(int j = 0; j < MAXC; j++) {
            colors[i][j][0] = static_cast<uint8_t>(255);
            colors[i][j][1] = static_cast<uint8_t>(255);
            colors[i][j][2] = static_cast<uint8_t>(255);
        }
    }
    for(int i = 40; i <= 440; i++) {
        for(int j = 10; j <= 60; j++) {
            colors[i][j][0] = 0;
            colors[i][j][2] = 0;
        }
    }
    for(int i = 390; i <= 440; i++) {
        for(int j = 10; j <= 210; j++) {
            colors[i][j][0] = 0;
            colors[i][j][2] = 0;
        }
    }
    for(int i = 40; i <= 440; i++) {
        for(int j = 160; j <= 210; j++) {
            colors[i][j][0] = 0;
            colors[i][j][2] = 0;
        }
    }
//Horizontal part of T
    for(int i = 40; i <= 90; i++) {
        for(int j = 430; j <= 630; j++) {
            colors[i][j][0] = 0;
            colors[i][j][2] = 0;
        }
    }
//Vertical part of T
    for(int i = 40; i <= 440; i++) {
        for(int j = 505; j <= 555; j++) {
            colors[i][j][0] = 0;
            colors[i][j][2] = 0;
        }
    }
//Right vertical leg of N
    for(int i = 40; i <= 440; i++) {
        for(int j = 370; j <= 420; j++) {
            colors[i][j][0] = 0;
            colors[i][j][2] = 0;
        }
    }
//Left vertical leg of N
    for(int i = 40; i <= 440; i++) {
        for(int j = 220; j <= 270; j++) {
            colors[i][j][0] = 0;
            colors[i][j][2] = 0;
        }
    }
//Diagonal part of N
    for(int i = 40; i <= 440; i++) {
        int jm = (i-40)/2+220;
        int jb = max(220, jm-25);
        int je = min(420, jm+25);
        for(int j = jb; j <= je; j++) {
            colors[i][j][0] = 0;
            colors[i][j][2] = 0;
        }
    }
    ofstream fout("unt.ppm");
    fout << "P3" << endl;
    fout << MAXC << ' ' << MAXR << endl;
    fout << 255 << endl;
    for(int i=0; i < MAXR; i++) {
        for(int j = 0; j < MAXC; j++) {
            fout << static_cast<uint>(colors[i][j][0]) << ' ' <<  
static_cast<uint>(colors[i][j][1]) << ' ' << static_cast<uint>(colors[i][j][2]) << 
' ';
        }
        fout << endl;
    }
    fout.close();
    
return 0;
