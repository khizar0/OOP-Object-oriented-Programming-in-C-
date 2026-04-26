// #include<iostream>
// using namespace std ;
// int main ()
// {

//     int i=5;


//     int &j=i;                 //Refrence variable
//     cout<<j<<endl;
//     j++;
//     cout<<i<<endl;
//     i++;
//     cout<<j;

//     return 0;
// }


                 //Defult arguments
// #include<iostream>
// using namespace std;
// int sum(int a,int b, int c=9)
// {
//     return a+b+c;
// }
// int main ()
// {

// int a=5,b=6;
// cout<<sum (a,b);


//     return 0;
// }






// #include<iostream>
// using namespace std;

// class hero
//  {
//     int health;
//     protected:
//     int time=10;
// };
// int main ()
// {

// hero h1;
// cout<<"Size of object: "<<h1.time<<endl;
   



//     return 0;
// }


// #include<iostream>
// #include<cstring>
// using namespace std;
// class student{


// char* name;
// int regno;
// public:
// student(int r,const char* n):regno(r)
// {
// int size=strlen(n);
// name=new char[size+1];
// for (int i = 0; i < size; i++)
// {
//     name[i]=n[i];
// }
// name[size]='\0';

// }

// ~student()
// {
//     delete[]name;
// }
// friend void showdata(student s);


// };

// void showdata(student s )
// {
//     cout<<"Registration Number: "<<s.regno;
//     cout<<" Name: "<<s.name;
// }

// int main()
// {
//     student s1(123,"khizar");
//     showdata(s1);
//     return 0;
// }


// #include<iostream>
// #include<cstring>
// using namespace std;
// class Result;
// class Student{
//     int rollNumber;
//     public:
//     Student(int r):rollNumber(r){

//     }

//     friend void showdata(Student s,Result r);

// };
// class Result{
//     int marks;
//     public:
//     Result(int m):marks(m)
//     {}
//     friend void showdata(Student s,Result r);

// };

// void showdata(Student s, Result r)
// {

// cout<<"Student RollNumber: "<<s.rollNumber;
// cout<<"Marks: "<<r.marks;

// }

// int main()
// {

//     Student s1(788);
//     Result r1(87);
//     showdata(s1,r1);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Course; 

// class Student {
// private:
//     char name[30];
//     int regNo;
// public:
//     Student() {
//         name[0] = '\0';
//         regNo = 0;
//     }

//     Student(const char* n, int r) {
//         int i = 0;
//         for (; n[i] != '\0'; i++)
//             name[i] = n[i];
//         name[i] = '\0';
//         regNo = r;
//     }

//     ~Student() {}

//     void setName(const char* n) {
//         int i = 0;
//         for (; n[i] != '\0'; i++)
//             name[i] = n[i];
//         name[i] = '\0';
//     }

//     void setRegNo(int r) {
//         regNo = r;
//     }

//     const char* getName() {
//         return name;
//     }

//     int getRegNo() {
//         return regNo;
//     }

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Reg No: " << regNo << endl;
//     }

//     friend class Course;
// };

// class Course {
// private:
//     char courseName[30];
//     Student students[3];
//     int totalStudents;
// public:
//     Course() {
//         courseName[0] = '\0';
//         totalStudents = 0;
//     }

//     Course(const char* c) {
//         int i = 0;
//         for (; c[i] != '\0'; i++)
//             courseName[i] = c[i];
//         courseName[i] = '\0';
//         totalStudents = 0;
//     }

//     ~Course() {}

//     void addStudent(Student s) {
//         if (totalStudents < 3) {
//             students[totalStudents] = s;
//             totalStudents++;
//         }
//     }

//     void displayCourse() {
//         cout << "Course Name: " << courseName << endl;
//         cout << "Students Enrolled:" << endl;
//         for (int i = 0; i < totalStudents; i++)
//             students[i].display();
//     }

//     friend void showStudentInCourse(Course c, Student s);
// };

// void showStudentInCourse(Course c, Student s) {
//     cout << s.name << " is enrolled in " << c.courseName << endl;
// }

// int main() {
//     Student s1("Ali", 101);
//     Student s2("Sara", 102);

//     Course c1("OOP");
//     c1.addStudent(s1);
//     c1.addStudent(s2);

//     c1.displayCourse();

//     showStudentInCourse(c1, s1);
//     return 0;
// }


#include<iostream>
#include<cstring>
using namespace std;
class Course;
class Student{
char Name[30];
    int RegNo;
 

    public:

    Student()
    {
        Name[0]='\0';

        RegNo=0;

    }

    Student(const char* n,int reg)
    {
        for (int i = 0; i !='\0'; i++)
        {
            Name[i]= n[i];

        }
        Name[29]='\0';
        RegNo=reg;
    }

    void setName(const char* n){
    for (int i = 0; i  !='\0'; i++)
    {
       Name[i]=n[i];
    }
    Name[29]='\0';

}

void setReg(int r)
{
    RegNo=r;
}

const char*getName()
{
    return Name;
}

int getReg()
{
    return RegNo;
}
~Student()
{
}

void display()
{
    cout<<"Student Name: "<<Name<<endl;
    cout<<"Registration Number: "<<RegNo<<endl;
}

friend class Course;
friend void showCourse(Student s,Course c);
};
class Course
{
char* CourseName;
Student student [3];
int studentCount;

public:
Course()
{
CourseName=nullptr;
studentCount=0;
}


Course(const char* cn,int total){
int size=strlen(cn);
CourseName=new char[size+1];
for (int i = 0; i <size; i++)
{
    CourseName[i]=cn[i];
}
CourseName[size]='\0';
studentCount=total;

}

void addStudent(Student s)
{
    if (studentCount<3)
    {
        student[studentCount]=s;
        studentCount++;

    }
    
}

~Course(){
    delete[]CourseName;
}

void displayCourse()
{
    cout<<"Course: "<<CourseName<<endl;
    cout<<"Student Enrolled! ";
    for (int i = 0; i < studentCount; i++)
    {
       student[i].display();
    }
    
    
}

friend void showCourse(Student s,Course c);



};

void showCourse(Student s,Course c){
    cout<<"Student: "<<s.Name<<"Enrolled in: "<<c.CourseName;
}


int main ()
{
Student s1("Ali", 112);
    Student s2("Khizar", 704);

    Course c1("OOP");

    c1.addStudent(s1);
    c1.addStudent(s2);

    c1.displayCourse();

    showCourse(s1, c1);

    return 0;


    return 0;
}











