#include <iostream> 
using namespace std;
int main() {
int marks;
float per;
cout << " Enter marks out of (800)"; cin >> marks;
per = (float)marks/800 * 100;
if (per >= 80)
cout << "Percentage = " << per <<" \t A Grade  ";
else if (per >= 70)
cout << "Percentage = " << per <<"\t B+ Grade  ";
else if (per >= 60)
cout << "Percentage = " << per <<" \t B Grade  ";
else if (per >= 50)
cout << "Percentage = " << per <<" \t C Grade  ";
else if (per >= 40)
cout << "Percentage = " << per <<" \t D Grade  ";
else
cout << "Percentage = " << per <<"  \t Fail  ";
return 0;
}
