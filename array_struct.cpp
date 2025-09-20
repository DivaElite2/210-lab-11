// Comsc 210|Lateefah_Camacho| Lab 11
// vscode
#include <iostream>
using namespace std;

// Student structure
struct Student {
    int grade;
    int id;
    string name;
};

int main()
{
   //declare an array of structures
  const int size = 3;
  struct Student stu[size];

//Assign values to elements in array
stu[0].grade = 95;
stu[0].id = 1001;
stu[0].name = "Amy";

stu[1].grade = 85;
stu[1].id = 1002;
stu[1].name = "Greg";

stu[2].grade = 75;
stu[2].id = 1003;
stu[2].name = "Greg";

for(int i = 0; i < size; i++) {
    cout << stu[i].id<<"  "<< stu[i].name <<" " << stu[i].grade <<endl;
}
 return 0;
}

