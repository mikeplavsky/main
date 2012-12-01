#include <iostream> 
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

string message(string name) {

  ostringstream res;
  res << "Hello, " << name << "!" << endl;
  
  return res.str();  

}

struct Letter {
  string from;
  string to;
  int size;
};

Letter letters[]{
  {"man", "next", 20 },
  {"lete", "coffee", 34},
  {"macho", "grando", 56}};

int main() {

  cout << letters[1].from << endl;
  cout << "What's your name?" << endl;

  string n;
  cin >> n;

  cout << message( n );

  vector<int> a3{1,2,3,10,12};
  decltype(a3) a4{56,37,78,98};

  for( auto i: a3){
      cout << i << endl;
  }

  for( auto i: letters){
      cout << i.from << endl;
  }

  int total = 0;
  for_each( begin(a3), end(a3), [&total] (int x) {
      total += x; });
  cout << total << endl; 

  total = 1;
  auto mult = [&total] (int x) {total *= x;};
  for_each(begin(a4), end(a4), mult);
  cout << total << endl;

}
