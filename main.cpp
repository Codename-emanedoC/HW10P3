#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int size, tempLarge, counter = 1;
  cin >> size;
  
  int matrix[size];
  int store[size];
  
  for(int i = 0; i < size; i++){
      cin >> matrix[i];
  }
  
  store[0] = matrix[0];
  
  tempLarge = matrix[0];
  
  for(int i = 0; i < size; i++){
    if(matrix[i] > tempLarge){
      tempLarge = matrix[i];
      store[counter] = matrix[i];  
      counter++;
      }
  }
  cout << counter << endl;
  for(int j = 0; j < counter; j++){
    cout << store[j] << " ";
    }
  cout << endl;
  
  
  
  return 0;
  }