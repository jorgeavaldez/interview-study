#include <vector>

using namespace std;
int main(){
  // create
  vector<int> jorge1;
  vector<int> *jorge2 = new vector<int>;

  for (int i = 0; i < 10; i ++){

    jorge1.push_back(i);
    jorge2->push_back(i);

  }
  //read
  jorge1.at(1);
  jorge2->at(1);
  (*jorge2).at(1);

  //update
  jorge1.push_back(10);
  jorge1.insert(jorge1.begin(), 13);

  jorge2->push_back(10);
  jorge2->insert(jorge2->begin(), 25000000);

  //delete
  jorge1.erase(jorge1.begin());
  jorge1.pop_back();

  jorge2->erase(jorge2->begin() + 3, jorge2->end() - 4);
  jorge2->pop_back();
}
