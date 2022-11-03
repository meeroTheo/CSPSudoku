#include "sudoku.h"
using namespace std;

class sudoku {
    public:
        int variables[9][9];
        int domain[81][8]; //9*9
        int row[9][9];
        int column[9][9];
        int box[9][9];
        int arcC[9][9];

    sudoku() {

    }

    void initialState(){
        int count=0;
        int val=0;
        ifstream file;
        string fileName;
        cout << "Please input the puzzle text file name: " << endl;
        cin >> fileName;
        file.open(fileName);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                file >> val;
                if (val != 0){
                    variables[i][j] = val;
                    row[i][j]=val;
                    column[j][count++]=val;
                }
            }
        }
        file.close();
        return;
    }

};

int main(int argc, char const *argv[]) {
    sudoku s;
    
    return 0;
}
