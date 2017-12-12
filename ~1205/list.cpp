#include <list>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(void){
  list<int> lst;
  string command;
  int temp = 0;
  int n = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> command;
    if(command == "insertFirst"){
        cin >> temp;
        lst.push_front(temp);
    }else if(command == "insertLast"){
        cin >> temp;
        lst.push_back(temp);
    }else if(command == "delete"){
      cin >> temp;
      for(list<int>::iterator it = lst.begin();it != lst.end();it++){
        if(*it == temp){
          lst.erase(it);
          break;
        }
      }
    }else if(command == "deleteFirst"){
        lst.pop_front();
    }else if(command == "deleteLast"){
        lst.pop_back();
    }else if(command == "deleteAll"){
        lst.clear();
    }
  }
  bool flag = false;
  for(list<int>::iterator it = lst.begin();it != lst.end();it++){
    if(flag) cout << " ";
    cout << *it;
    flag = true;
  }
  cout << endl;
}
