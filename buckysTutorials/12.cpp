#include <iostream>
using namespace std;

class BuckysClass{
    public:
      void coolSaying(){
        cout << "Cats are rad" << endl;
      }
};

int main(){
    BuckysClass buckysObject;
    buckysObject.coolSaying();
    return 0;
}
