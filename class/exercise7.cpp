#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;
class Score {
private:
  double math_score;
  double phy_score;
  double chem_score;

public:
  Score(double math_score, double phy_score, double chem_score) {

    this->math_score = math_score;
    this->phy_score = phy_score;
    this->chem_score = chem_score;
  }
  Score(){};

  double getMath() { return math_score; };
  double getChem() { return chem_score; };
  double getPhy() { return phy_score; };

  double get_total_score() { return math_score + phy_score + chem_score; }
  void get_score() {
    do {
      cout << "Maths: ";
      cin >> math_score;
      fflush(stdin);
    } while (math_score < 0);
    do {
      cout << "Physics: ";
      cin >> phy_score;
      fflush(stdin);
    } while (phy_score < 0);
    do {
      cout << "Chemistry: ";
      cin >> chem_score;
      fflush(stdin);
    } while (chem_score < 0);
  }
};
class Student {
private:
  int id;
  string name;
  Score score;

public:
  Student(int id, string name, Score score) {
    this->id = id;
    this->name = name;
    this->score = score;
  }
  Student(){};
  void display_info() {
    cout << setw(10) << left << id << setw(20) << left << name << setw(15)
         << left << score.getMath() << setw(15) << left << score.getPhy()
         << setw(15) << left << score.getChem() << setw(15) << left
         << score.get_total_score() << endl;
  }
  void read_student(int id) {
    this->id = id;
    cout << "Name: ";
    cin >> name;
    score.get_score();
  }
  int getID() { return id; }
};
class StudentList {
private:
  vector<Student> student_list;

public:
  StudentList(vector<Student> student_list) {
    this->student_list = student_list;
  }

  void add() {
    bool is_not_found = false;
    int id;
    Student student;
    do {
      is_not_found = true;
      cout << "ID: ";
      cin >> id;
      fflush(stdin);
      for (int i = 0; i < student_list.size(); i++) {
        if (student_list[i].getID() == id) {
          is_not_found = false;
        }
      }
      if (is_not_found == false)
        cout << "ID already exist." << endl;
    } while (!is_not_found);
    student.read_student(id);
    cout << endl;
    student_list.push_back(student);
    cout << "Add Successfully." << endl;
  }

  int index_of(int id) {
    for (int i = 0; i < student_list.size(); i++) {
      if (student_list[i].getID() == id)
        return i;
    }
    return -1;
  }
  void remove() {
    bool is_found = false;
    int id;
    cout << "ID: ";
    cin >> id;
    fflush(stdin);
    for (int i = 0; i < student_list.size(); i++) {
      if (student_list[i].getID() == id) {
        is_found = true;
        student_list.erase(student_list.begin() + i);
        i--;
      }
    }
    is_found == true ? cout << "Delete Successful.." << endl
                     : cout << "ID no exist: " << id << endl
                            << "Delete Unsuccessful.." << endl;
  }

  void display_all() {
    cout << "------------------------------------------------------------------"
            "--------------"
         << endl;
    cout << setw(10) << left << "ID" << setw(20) << left << "Name" << setw(15)
         << left << "Maths" << setw(15) << left << "Physics" << setw(15) << left
         << "Chemistry" << setw(15) << left << "Total" << endl;
    cout << "------------------------------------------------------------------"
            "--------------"
         << endl;
    for (int i = 0; i < student_list.size(); i++) {
      student_list[i].display_info();
    }
    cout << "------------------------------------------------------------------"
            "--------------"
         << endl;
  }
  void search() {
    bool is_found = false;
    int id;
    cout << "ID: ";
    cin >> id;
    cout << "------------------------------------------------------------------"
            "--------------"
         << endl;
    cout << setw(10) << left << "ID" << setw(20) << left << "Name" << setw(15)
         << left << "Maths" << setw(15) << left << "Physics" << setw(15) << left
         << "Chemistry" << setw(15) << left << "Total" << endl;
    cout << "------------------------------------------------------------------"
            "--------------"
         << endl;
    for (int i = 0; i < student_list.size(); i++) {
      if (student_list[i].getID() == id) {
        is_found = true;
        student_list[i].display_info();
      };
    }
    if (is_found == false)
      cout << "Search Not Found." << endl;
    cout << "------------------------------------------------------------------"
            "--------------"
         << endl;
  }
};
int main() {
  StudentList list = StudentList({
      Student(1, "vichet", Score(25, 22, 10)),
      Student(2, "Tom", Score(21, 20, 31)),
      Student(3, "Jerry", Score(43, 22, 21)),

  });
  list.display_all();
  char option;
  do {
    cout << "a. Add a new student." << endl;
    cout << "b. Delete student by id." << endl;
    cout << "c. Display all student." << endl;
    cout << "d. Search by id." << endl;
    cout << "e. Exit program" << endl;
    cout << "OPTION: ";
    cin >> option;
    if (option == 'a')
      list.add();
    if (option == 'b')
      list.remove();
    if (option == 'c')
      list.display_all();
    if (option == 'd')
      list.search();
  } while (option == 'a' or option == 'b' or option == 'c' or option == 'd');
  return 0;
}