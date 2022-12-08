#include <iostream> 
using namespace std; 

  int main(void) { 

    int size; 

    cin >> size; 

    if (size > 0 && size < 100) {
    cout << '+'; 

      for (int i = 0; i < size; i++)

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
      else// якщо значення менше 1, або більше 100, то ...
    { 
    cout << "Sorry, the side size is too big"; 
    } 
    return 0; 

    } 

 