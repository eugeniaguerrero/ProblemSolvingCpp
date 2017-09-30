// This is an example of using setter and getter methods to use variables
// in classes without making the name variable public.

#include <iostream>
#include <string>

using namespace std;

class EugeClass{
  public:
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
  EugeClass EugeObject;
  EugeObject.setName("Madame Alexandra");
  cout << EugeObject.getName() << endl;
  return 0;
}
