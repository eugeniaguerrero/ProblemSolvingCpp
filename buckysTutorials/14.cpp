#include <iostream>
#include <string>

using namespace std;

class EugeClass{
    public:
      EugeClass(string z){
        setName(z);
      }
      void setName(string x){
          name = x;
      }
      string getName(){
          return name;
      }
    private:
      string name;
};

int main()
{
  EugeClass EugeObject("Lucky Ducky");
  cout << EugeObject.getName() << endl;

  EugeClass EugeObject2("Sally McSalad");
  cout << EugeObject2.getName() << endl;
  return 0;
}
