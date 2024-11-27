#include "Heder.h"

using namespace std;

int main()
{
    std::vector<int> bd(N);
    int vecBegin {0}, vecEnd {N};
    printVector(bd, vecBegin, vecEnd);

    inputBd(bd, vecBegin, vecEnd);
    printVector(bd, vecBegin, vecEnd);
    cout << "If you still need to enter data, click y" << endl;
      char ch;
      cin >> ch;
      if(ch == 'y' || ch == 'Y')
        inputBd(bd, vecBegin, vecEnd);
      else
        exit(0);

    return 0;
}
