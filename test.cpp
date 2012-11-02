#include <iostream> 
#include <sstream>
#include <vector>

using namespace std;

string message(string name) {

  ostringstream res;
  res << "Hello, " << name << "!" << endl;
  
  return res.str();  

}

int main() {

  cout << "What's your name?" << endl;

  string n;
  cin >> n;

  cout << message( n );

  vector<int> a3{1,2,3};

  for( auto i: a3){
      cout << i << endl;
  }

}
