#include <iostream>
using namespace std;

int main() {   

    int averageGpa;

    int inputedValue;

    int nbmOfSemestersCompleted;

    cout << "Number of completed semesters (2 per year): " << endl;
    cin >> nbmOfSemestersCompleted;
    
   for(int i=0; i<nbmOfSemestersCompleted; i++){
    cout << "GPA for semester " << (i/2) << ":" << endl;
    cin >> inputedValue;
    averageGpa += inputedValue;
   } 
   cout << averageGpa/nbmOfSemestersCompleted;
   
   return 0;
}
