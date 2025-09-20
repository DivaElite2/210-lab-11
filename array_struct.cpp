// Comsc 210|Lateefah_Camacho| Lab 11
// vscode
#include <iostream>
using namespace std;

// Student structure
struct Student {
    int grades;
    int id;
    string name;
};

int main()
{
   //declare an array of structures
  const int size = 3;
  struct Student stu[size];

//Assign values to elements in array
stu[0].grades = 95;
stu[0].id = 1001;
}

