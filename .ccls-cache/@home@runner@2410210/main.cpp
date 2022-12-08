#include <iostream> 
using namespace std; 


  int main(void) { 

    int size; 

    cin >> size; 

    if (size > 0 && size < 100) {
    cout << '+'; 

      for (int i = 0; i < size; i++)// для розмір більше ніж 0 

    cout << '-'; 

    cout << '+' << endl; 

      for (int i = 0; i < size; i++) {// стовпець 

    cout << '|'; 
    
      for (int j = 0; j < size; j++)// рядок 

    cout << ' '; 

    cout << '|' << endl; 

    } 
    cout << '+'; 

      for (int i = 0; i < size; i++) 

    cout << '-'; 

    cout << '+' << endl; 

    } 
      else// якщо буде 101 то цей варіант 
    { 
    cout << "Sorry, the side size is too big"; 
    } 
    return 0; 

    } 

 