//RND_Item_generator
//little program which working with items database
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::vector;

int retFlag();

int main(int argc, char const *argv[]) {

    ifstream finItem("DB/Item_database.txt");
    ifstream finEnemy("DB/Enemy_database.txt");

    if(!finItem.is_open() && !finEnemy.is_open()) {
        cout << "Databases not loaded" << endl;
        return 1;
    }

    vector<string> itemVec;
    vector<string> enemyVec;

    string buff;

    while(getline(finItem, buff)) {
        itemVec.push_back(buff);
    }

    while(getline(finEnemy, buff)) {
        enemyVec.push_back(buff);
    }

    /*
    for(vector<string>::iterator iter = itemVec.begin(); iter != itemVec.end(); ++iter) {
        cout << *iter << endl;
    }

    cout << endl;
    cout << "Enemy" << endl;

    for(vector<string>::iterator iter = enemyVec.begin(); iter != enemyVec.end(); ++iter) {
        cout << *iter << endl;
    }
    */

    cout << "Choose the desired item:\n1. Item;\n2. Enemy.\nEnter your choice: ";
    int choice = 0;

    cin >> choice;

    int dropClass = 0;

    switch(choice) {
        case 1:
            dropClass = retFlag();
            switch(dropClass) {
                case 0:
                    cout << "No drop anymore" << endl;
                    break;
                case 1:
                    cout << "You looted common item" << endl;
                    break;
                case 2:
                    cout << "Not bad, this is uncommon item" << endl;
                    break;
                case 3:
                    cout << "Good, rare loot" << endl;
                    break;
                case 4:
                    cout << "Wow rare loot" << endl;
                    break;
                case 5:
                    cout << "Wow! Legendary (voice tavern master)" << endl;
                    break;
                default:
                    break;
            }
            break;
        case 2:
            break;
        default:
            cout << "Illigal number" << endl;
            break;
    };


    return 0;

}

int retFlag() {

    int arrFlag[100] = {0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        0,0,0,0,0,0,0,0,0,0,
                        1,1,1,1,1,1,1,1,1,1,
                        1,1,1,1,1,1,1,1,1,1,
                        1,1,1,1,1,1,1,1,1,1,
                        1,1,1,1,1,2,2,2,2,2,
                        2,2,2,2,2,2,2,3,3,3,
                        3,3,3,3,3,3,4,4,4,5};

    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();
    int randomFlag = (randomNumber % 100);

    return arrFlag[randomFlag];

}