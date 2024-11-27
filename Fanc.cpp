#include "Heder.h"

void printVector(std::vector<int> &vec, int &vecBegin, int &vecEnd)
{
    for(auto n : vec)
        cout << n << " ";
    cout << endl;
}


void inputBd(std::vector<int> &vec, int &vecBegin, int &vecEnd)
{
    int num, startReading {vecBegin };
    size_t i{0};
    while (true) {
        cin >> num;
        if(num == -1)
            break;
        else {

        }
    }

}


