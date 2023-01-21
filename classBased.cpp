#include <iostream>
using namespace std;

int main() {   

    int averageGpa;

    int inputedValue;

    int nbmOfClassesCompleted;

    cout << "Number of completed classes: " << endl;
    cin >> nbmOfClassesCompleted;
    
   for(int i=0; i<nbmOfClassesCompleted; i++){
    cout << "GPA for class number " << i << ":" << endl;
    cin >> inputedValue;
    averageGpa += inputedValue;
   } 
   cout << averageGpa/nbmOfClassesCompleted;
   
   return 0;
}
