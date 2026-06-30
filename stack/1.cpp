#include <bits/stdc++.h>
using namespace std;
class ArrayStack{
private:
  int* stackArray;//array hold the elements
  int capacity;//maximum capacity
  int topIndex;//index of top element
public:
  //constructer
  ArrayStack(int size = 100){
    capacity=size;
    stackArray=new int[capacity];
    topIndex = -1;
  }
  //destructor
  ~ArrayStack(){
    delete[] stackArray;
  }
  
};

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ArrayStack stack;
  vector<string> commands = {"ArrayStack", "push", "push", "top", "pop", "isEmpty"};
  vector<vector<int>> inputs = {{}, {5}, {10}, {}, {}, {}};
  for (size_t i = 0; i < commands.size(); ++i) {
        if (commands[i] == "push") {
            stack.push(inputs[i][0]);
            cout << "null ";
        } else if (commands[i] == "pop") {
            cout << stack.pop() << " ";
        } else if (commands[i] == "top") {
            cout << stack.top() << " ";
        } else if (commands[i] == "isEmpty") {
            cout << (stack.isEmpty() ? "true" : "false") << " ";
        } else if (commands[i] == "ArrayStack") {
            cout << "null ";
        }
    }
  return 0;
}