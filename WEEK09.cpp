
// // // Aggregation
// // #include<iostream>
// // using namespace std;
// // class Employee{


// //     public:

// //     Employee()
// //     {
// //         cout<<"Hey i Employee."<<endl;
// //     }

// //     ~Employee()
// //     {
// //         cout<<"Employee destroyed!"<<endl;
// //     }


// // };

// // class Company{

// //     public:
// //     Employee *obj;

// //     Company(Employee *obj)
// //     {
// //     this->obj=obj;
// //     cout<<"Contructor for company."<<endl;
// //     }

// //     ~Company()
// //     {
// //         cout<<"Destrutor for company!"<<endl;
// //     }

// // };

// // int main()
// // {
// // Employee *Eobj=new Employee;    // Hum humesha dynamically bnaty han 
// //                                 // ta ke wo auto delete na ho or hum class main bhi pointer hi rakhty hn
// // {
// // Company Cobj(Eobj);
// // }
// // delete Eobj;
// //     return 0;
// // }


// // Composition (Strong relationship)


// // #include<iostream>
// // using namespace std;

// // class Engine {

// //     public:
// // Engine()
// // {
// //     cout<<"Constructor for Engine."<<endl;

// // }

// // ~Engine()
// // {
// //     cout<<"Engine destructor."<<endl;
// // }
// // };

// // class Car{
// //     public:
// //     Engine e;

// //     Car()
// //     {
// //         cout<<"CAR constructor."<<endl;
// //     }

// //     ~Car()
// //     {
// //         cout<<"Car destructor."<<endl;
// //     }
    
// // };

// // int main ()
// // {

// //     Car c;

// //     return 0;
// // }


// // #include<iostream>
// // #include<cstring>
// // using namespace std;

// // class Person {

// //     public:
// //     string name;
// // Person()
// // {
// //     cout<<"Constructor for Person ;."<<endl;

// // }

// // ~Person()
// // {
// //     cout<<"  Person destructor."<<endl;
// // }
// // };

// // class Car{
// //     public:
// //   Person *p;
// //     string model;
  

// //     Car()
// //     {
// //         cout<<"CAR constructor."<<endl;
// //     }

// //     ~Car()
// //     {
// //         cout<<"Car destructor."<<endl;
// //     }
    
// // };

// // int main ()
// // {

// // Person p1;
// // p1.name="Ali  ";

// // Car c1;
// // c1.model="Honda civic";

// // c1.p=&p1;
// // cout<<c1.p->name<<"Using this car"<<endl;

// //     return 0;
// // }


// // #include<iostream>
// // using namespace std;
// // class Patient{

// //     string name;
// //     string diseas;
// //     int id;

// //     public:

// //     Patient(string n,string d,int id)
// //     {
// //         name=n;
// //         diseas=d;
// //         this->id=id;
// //     }


// //     void show()
// //     {
// //         cout<<"Patient Name: "<<name<<endl;
// //         cout<<"Patient Disease: "<<diseas<<endl;
// //         cout<<"Patient ID: "<<id<<endl;
// //     }
// // ~Patient()
// // {
// //     cout<<"Patient destructor calls!"<<endl;
// // }

// // };


// // class Doctor{
// //     string hospital;
// //     string dname;
// //     Patient *p;

// //     public:

// //     Doctor(string h,string n,Patient *p)
// //     {
// //         hospital=h;
// //         dname=n;
// //         this->p=p;
// //     }
// //     void doctorShow()
// //     {
// //         cout<<"Hospital Name: "<<hospital<<endl;
// //         cout<<"Doctor Name: "<<dname<<endl;
// //         p->show();
// //     }

// //     ~Doctor()
// //     {
// //         cout<<"Doctor destructor calls!"<<endl;
// //     }

// // };

// // int main()
// // {

// //  Patient *op = new Patient("Ali", "Flu", 101);
// //  Doctor d1("City Hospital", "Dr. Ahmed", op);

// //  d1.doctorShow();


// // delete []op;



// //     return 0;
// // }





// // #include<iostream>
// // using namespace std;
// // class Time
// // {

// //     string timetable;
// //     string universty;

// //     public:

// //     Time()
// //     {
// //         timetable="";
// //         universty="";
// //     }


// //     Time(string t,string u)
// //     {
// //         timetable=t;
// //         universty=u;
// //     }

// // void timeShow()
// // {
// //     cout<<"Schedule: "<<timetable<<endl;
// //     cout<<"University:"<<universty<<endl;
// // }

// // };


// // class Course
// // {
// //     string CourseName;
// //     string sem;
// //     public:
// //     Time t;

// //     Course(string c,string s,Time t)
// //     {
// //         CourseName=c;
// //         sem=s;
// //         this->t=t;

// //     }


// //     void courseShow()

// //     {
// //         t.timeShow();
// //         cout<<"Course Name: "<<CourseName<<endl;
// //         cout<<"Semester: "<<sem<<endl;

// //     }


// // };

// // int main ()
// // {

// //     Time t1("Monday 12:00 to 2:00 Friday ","UCP");
// //     Course c1("OOP","3rd",t1);
// //     c1.courseShow();



// //     return 0;
// // }



// // #include<iostream>
// // using namespace std;

// // class options {
// //     string text;

// // public:
// //     options() {
// //         text = "";
// //     }

// //     options(string t) {
// //         text = t;
// //     }

// //     string getquestion() {
// //         return text;
// //     }
// // };

// // class Question {
// //     string questionText;
// //     options option[4];

// // public:
// //     int optionCount;
// //     int correctOption;

// //     Question() {
// //         questionText = "";
// //         optionCount = 0;
// //         correctOption = 0;
// //     }

// //     Question(string q) {
// //         questionText = q;
// //         optionCount = 0;
// //         correctOption = 0;
// //     }

// //     void addQuestion(string optionText) {
// //         if (optionCount < 4) {
// //             option[optionCount] = options(optionText);
// //             optionCount++;
// //         }
// //     }

// //     void setCorrectOption(int correct) {
// //         correctOption = correct;
// //     }

// //     bool checkAns(int userAns) {
// //         return (correctOption == userAns);
// //     }

// //     void display() {
// //         cout << questionText << endl;
// //         for (int i = 0; i < optionCount; i++) {
// //             cout << i + 1 << ". " << option[i].getquestion() << endl;
// //         }
// //     }
// // };

// // int main() {
// //     int totalQues = 4;
// //     int score = 0;
// //     int useAns;

// //     Question* quiz = new Question[totalQues];

// //     quiz[0] = Question("Capital of Pakistan?");
// //     quiz[0].addQuestion("Karachi");
// //     quiz[0].addQuestion("Islamabad");
// //     quiz[0].addQuestion("Lahore");
// //     quiz[0].addQuestion("Quetta");
// //     quiz[0].setCorrectOption(2);

// //     quiz[1] = Question("Fastest land animal?");
// //     quiz[1].addQuestion("Cheetah");
// //     quiz[1].addQuestion("Lion");
// //     quiz[1].addQuestion("Horse");
// //     quiz[1].addQuestion("Tiger");
// //     quiz[1].setCorrectOption(1);

// //     quiz[2] = Question("Largest ocean?");
// //     quiz[2].addQuestion("Atlantic");
// //     quiz[2].addQuestion("Pacific");
// //     quiz[2].addQuestion("Indian");
// //     quiz[2].addQuestion("Arctic");
// //     quiz[2].setCorrectOption(2);

// //     quiz[3] = Question("2 + 2 = ?");
// //     quiz[3].addQuestion("3");
// //     quiz[3].addQuestion("4");
// //     quiz[3].addQuestion("5");
// //     quiz[3].addQuestion("22");
// //     quiz[3].setCorrectOption(2);

// //     for (int i = 0; i < totalQues; i++) {
// //         cout << "\nQ" << i + 1 << ": ";
// //         quiz[i].display();
// //         cout << "Enter your choice (1-4): ";
// //         cin >> useAns;

// //         if (quiz[i].checkAns(useAns)) {
// //             cout << "Correct!\n";
// //             score++;
// //         } else {
// //             cout << "Wrong!\n";
// //         }
// //     }

// //     cout << "\nYour final score: " << score << " out of " << totalQues << endl;

// //     delete[] quiz;
// //     return 0;
// // }


// // #include <iostream>
// // #include <string>
// // using namespace std;

// // class Course {
// // public:
// //     int id;
// //     string title;
// //     int tId;

// //     Course(int i, string t, int ti) {
// //         id = i;
// //         title = t;
// //         tId = ti;
// //     }
// // };

// // class Teacher {
// // private:
// //     Course* c[3];
// //     int cCnt;
// //     int maxC;

// // public:
// //     int id;
// //     string name;
// //     string role;

// //     Teacher(int i, string n, string r) {
// //         id = i;
// //         name = n;
// //         role = r;
// //         cCnt = 0;

// //         if (role == "Principal" || role == "Lecturer")
// //             maxC = 3;
// //         else if (role == "Assistant Professor" || role == "Associate Professor")
// //             maxC = 2;
// //         else
// //             maxC = 1;
// //     }

// //     void addC(Course* x) {
// //         if (cCnt < maxC && x->tId == id)
// //             c[cCnt++] = x;
// //     }

// //     void show() {
// //         cout << "  Teacher ID: " << id << ", Name: " << name
// //              << ", Role: " << role << endl;

// //         if (cCnt == 0)
// //             cout << "      No courses assigned." << endl;
// //         else {
// //             for (int i = 0; i < cCnt; i++)
// //                 cout << "      Course ID: " << c[i]->id
// //                      << ", Title: " << c[i]->title << endl;
// //         }

// //         cout << "      Teacher Workload: "
// //              << cCnt << " course(s)" << endl << endl;
// //     }
// // };

// // class Dept {
// // private:
// //     Teacher* t[5];
// //     int tCnt;

// // public:
// //     string name;

// //     Dept(string n) {
// //         name = n;
// //         tCnt = 0;
// //     }

// //     void addT(int id, string n, string r) {
// //         if (tCnt < 5)
// //             t[tCnt++] = new Teacher(id, n, r);
// //     }

// //     Teacher* getT(int i) {
// //         return t[i];
// //     }

// //     void show(int totalC) {
// //         cout << "Department: " << name << endl;
// //         cout << "Total Teachers: " << tCnt << endl;
// //         cout << "Total Courses: " << totalC << endl << endl;

// //         for (int i = 0; i < tCnt; i++)
// //             t[i]->show();
// //     }

// //     ~Dept() {
// //         for (int i = 0; i < tCnt; i++)
// //             delete t[i];
// //     }
// // };

// // int main() {

// //     Course c1(1, "Data Structures", 101);
// //     Course c2(2, "Algorithms", 101);
// //     Course c3(3, "Computer Architecture", 101);
// //     Course c4(4, "Software Engineering", 102);
// //     Course c5(5, "Database Systems", 103);
// //     Course c6(6, "Operating Systems", 103);
// //     Course c7(7, "Networks", 103);
// //     Course c8(8, "Artificial Intelligence", 104);
// //     Course c9(9, "Machine Learning", 104);

// //     Dept d1("BSCS");
// //     d1.addT(101, "Dr. Ahmed Khan", "Principal");
// //     d1.addT(102, "Prof. Ayesha Malik", "Professor");
// //     d1.addT(103, "Dr. Sana Raza", "Lecturer");
// //     d1.addT(104, "Dr. Bilal Raza", "Assistant Professor");

// //     d1.getT(0)->addC(&c1);
// //     d1.getT(0)->addC(&c2);
// //     d1.getT(0)->addC(&c3);

// //     d1.getT(1)->addC(&c4);

// //     d1.getT(2)->addC(&c5);
// //     d1.getT(2)->addC(&c6);
// //     d1.getT(2)->addC(&c7);

// //     d1.getT(3)->addC(&c8);
// //     d1.getT(3)->addC(&c9);

// //     Dept d2("BSIT");
// //     d2.addT(201, "Dr. Kamran Shah", "Principal");
// //     d2.addT(202, "Prof. Iqra Khan", "Professor");
// //     d2.addT(203, "Dr. Faizan Ali", "Associate Professor");

// //     d1.show(9);
// //     cout << "\n " << endl;
// //     d2.show(0);
// //     cout << "\n " << endl;

// //     return 0;
// // }

// // 




// // #include<iostream>
// // using namespace std;
// // class Room{
// //     int RoomNum; 
// //     string roomType;
// //     public:

// //     Room()
// //     {
// //         RoomNum=0;
// //         roomType="";
// //     }
// //     Room(int n,string type)
    
// // {
// // RoomNum=n;
// // roomType=type;
// // }
// // void display()
// // {
// //     cout<<"Room Number: "<<RoomNum<<endl;
// //     cout<<"Room Type: "<<roomType<<endl;

// // }
// // };

// // class House{
// //     string OnwerName;
// //     Room* room[3];
// //     public:
// //     House()
// //     {
// //         OnwerName="";
// //     }

// //     House(string n)
// //     {
// //         OnwerName=n;
// //         room[0]=new Room(01,"Livin");
// //         room[1]= new Room(02,"Family");
// //         room[2]=new Room(03,"Drawing");

// //     }

// //     void display()
// //     {
// //         cout<<"Onwer Name: "<<OnwerName<<endl;
// //         for (int i = 0; i < 3; i++)
// //         {
// //             room[i]->display();
// //         }
        
// //     }

// //     ~House()
// //     {
// //         delete[]room;
// //     }
// // };

// // int main()
// // {

// // House h1("Asim's House");
// // h1.display();
// //     return 0;
// // }



// // #include<iostream>
// // using namespace std;
// // class Book{
// //     string title;
// //     float price;
// //     public:
// //     Book()
// //     {
// //         title="";
// //         price=0;

// //     }
// //     Book(string t, float p)
// //     {
// //         title=t;
// //         price=p;
// //     }
// //     void display()
// //     {
// //         cout<<"Book "<<title<<endl;
// //         cout<<"Price "<<price<<endl;
// //     }
// // };

// // class Library{
// //     string LibraryName;
// //     Book* books[5];
// //     int totalBooks;
// //     int currentCont;
// // public:

// // Library()
// // {
// //     LibraryName="";
// //     totalBooks=0;
// //     currentCont=0;
// // }
// // Library(string n,int tb,int c)
// // {
// //     LibraryName=n;
// //     totalBooks=tb;
// //     currentCont=c;
// //     currentCont++;
// // }
// // void addBook(Book* b)
// // {
// //     if (totalBooks<5)
// //     {
// //         books[totalBooks]=b;
// //         totalBooks++;
// //     }
// //     else
// //     cout<<"Space compeleted!"<<endl;

// // }
// // void display()
// // {
// //     cout<<"Library Name: "<<LibraryName<<endl;
// //     cout<<"Total books: "<<totalBooks<<endl;
// //     for (int i = 0; i < totalBooks; i++)
// //     {
// //         books[i]->display();
// //     }
    
// // }

// // };
// // int main ()
// // {
// // Book b1("True Story",1099);
// // Library l1("City Library",500,160);


// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // class Processor{
// //     string model;
// //     int cores;
// //     float clockSpeed;
// //     public:
// //     Processor()
// //     {
// //         model="";
// //         cores=0;
// //         clockSpeed=0;
// //     }
// //     Processor(string m,int c,float clksp)
// //     {
// // model=m;
// // cores=c;
// // clockSpeed=clksp;
// //     }

// //      void display() const {
// //         cout << "Processor Model: " << model
// //              << ", Cores: " << cores
// //              << ", Clock Speed: " << clockSpeed << " GHz" << endl;
// //     }



// // };
// // class Laptop{
// //     string brand;
// //     float price;
// //     Processor pro;
// //     public:
// //     Laptop()
// //     {
// //         brand="";
// //         price=0;
// //     }
// //     Laptop(string b,float p,string mod,int cor,float clksp):pro(mod,cor,clksp)
// //     {
// //         brand=b;
// //         price=p;

// //     }
// //     void display()
// //     {

// //         cout<<"Brand "<<brand<<endl;
// //         cout<<"Price "<<price<<endl;
// //         pro.display();
// //     }
// // };

// // int main()
// // {
// //     Laptop l1("Dell", 120000, "Intel i7", 8, 3.5);
// // cout<<endl;
// // l1.display();
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // class Account{
// //     protected:
// //     int accNumber;
// //     double balance;
// //     public:
// //     Account()
// //     {
// //         accNumber=0;
// //         balance=0;
// //     }
// //     Account(int acc,double bal)
// //     {
// //         accNumber=acc;
// //         balance=bal;

// //     }
// //     double deposit(double x)
// //     {
// //         if (balance>0)
// //         {
            
// //           balance+=x;
// //           cout<<"Deposit "<<x<<", New Balance "<<balance<<endl;
          
// //         }
// //         else
// //         cout<<"Enter a greater than zero ammount"<<endl;

        
// //     }

// // };
// // class savingAccount:public Account{
// //     double interestRate;
// //     public:
// //     savingAccount(int acc,double bal,double rate):Account(acc,bal),interestRate(rate)
// //     {


// //     }
    
// //     double calculateInt()
// //     {
// //         double interet=balance*interestRate/100;
// //         return interet;
// //     }
// //     void display()
// //     {
// //         cout<<"Account Number: "<<accNumber<<endl;
// //         cout<<"Balance: "<<balance<<endl;
// //         cout<<"Interest Rate"<<interestRate<<endl;
// //     }

// // };

// // class PremuimSavingAcc:public savingAccount{
// //     protected:
// //     double minimumBalance;
// //     public:
// //     PremuimSavingAcc(int acc,double bal,double intt,double minbal):savingAccount(acc,bal,intt)
// //     {
// // minimumBalance=minbal;
// //     }

// //     void checkEligible()
// //     {
// //         if (balance<minimumBalance)
// //         {
// //             cout<<"you are not eligible for Premuim service!"<<endl;
// //         }
// //         else
// //         cout<<"You can use our Saving Acconut service"<<endl;
        
// //     }
// //     void display()
// //     {
// //         savingAccount::display();
// //     }
// // };
// // int main()
// // {
// //     PremuimSavingAcc p1(22338,1500,5,5000);
// //     p1.deposit(200);
// //     p1.calculateInt();
// //     p1.checkEligible();
// //     p1.display();
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // class Product{
// //     protected:
// //     int productId;
// //     string name;
// //     double price;
// //     public:
// //     Product(int id,string n,double p)
// //     {
// //         productId=id;
// //         name=n;
// //         price=p;
// //     }

// //     void setId(int id)
// //     {
// //         productId=id;
// //     }
// //     void setN(string n)
// //     {
// //         name=n;
// //     }
// //     void setP(double p)
// //     {
// //         price=p;
// //     }

// //     int getID()
// //     {
// //         return productId;

// //     }
// //     string getN()
// //     {
// //         return name;

// //     }
// //     double getP()
// //     {
// //         return price;
// //     }
// //     void display()
// // {
// //     cout<<"Product Id "<<productId<<endl;
// //     cout<<"Name "<<name<<endl;
// //     cout<<"Price "<<price<<endl;
// // }};

// // class Electronic:public Product{
// //     int warrenty;
// //     public:
// //     Electronic(int id,string n,double p,int warr):Product(id,n,p){
// //         warrenty=warr;
// //     }

// //     void display()
// //     {
// //         Product::display();
// //     }
// // };

// // class ShoppingCart{
// //     Electronic* electricProduct[5];
// //     int itemCount;
// //     public:
// //     ShoppingCart()
// //     {
// //         itemCount=0;
// //     }

// //     void addItem(Electronic* e)
// //     {
// //         if (itemCount<5)
// //         {
// //            electricProduct[itemCount++]=e;

// //         }
// //         else
// //         cout<<"Limit Reached!"<<endl;
        
// //     }
// //     void display()
// //     {

// //         cout<<"Shopping cart items ";
// //         for (int i = 0; i < itemCount; i++)
// //         {
// //             electricProduct[i]->display();
// //         }
        
// //     }

// //     void checkDupObj()
// //     {
// //         int Maxcount=0;
// //         int mostRep;
// //         for (int i = 0; i < itemCount; i++)
// //         {
// //             int count = 1;
// //             for (int j= i+1;  j<itemCount; j++)
// //             {
// //                 if (electricProduct[i]->getID()==electricProduct[j]->getID())
// //                 {
// //                 count++;
// //                 }
                
// //             }
// //             if (count>Maxcount)
// //             {
// //                 Maxcount=count;
// //                 mostRep=electricProduct[i]->getID();

// //             }
            
            
// //         }
// //         if (Maxcount>1)
// //         {
// //             cout<<"Most Repeated product "<<mostRep<<endl;
// //             cout<<"Max time "<<Maxcount<<endl;
            
// //         }
// //         else
// //         cout<<"no duplicates found!"<<endl;
        
        
// //     }
// // };
// // int main()
// // {

// //     Electronic e1(101, "Laptop", 120000, 2);
// //     Electronic e2(102, "Mobile", 80000, 1);
// //     Electronic e3(101, "Laptop", 120000, 2);
// //     Electronic e4(103, "Tablet", 50000, 1);
// //     Electronic e5(101, "Laptop", 120000, 2);

// //     ShoppingCart cart;

// //     cart.addItem(&e1);
// //     cart.addItem(&e2);
// //     cart.addItem(&e3);
// //     cart.addItem(&e4);
// //     cart.addItem(&e5);

// //     cart.checkDupObj();

// //     cart.display();




// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // class Employee{
// //     protected:
// //     string name;
// //     int employeeId;
// //     double baseSalary;
// //     public:
// //     Employee()
// //     {
// //         name="";
// //         employeeId=0;
// //         baseSalary=0;
// //     }
// // Employee(string n,int id,double basesal)
// // {
// //     name=n;
// //     employeeId=id;
// //     baseSalary=basesal;


// // }
// // virtual void calculateSalary()
// //     {
// //         baseSalary=baseSalary;
// //     }

// //     void display()
// //     {
// //         cout<<"Employee name "<<name<<endl;
// //         cout<<"Employee Id "<<employeeId<<endl;
// //         cout<<"Base salary(Employee)"<<baseSalary<<endl;
 
// //     }
// // };
// // class Manager: virtual public Employee{
// //     protected:
// //     double ManagerBonus;
// //     public:
// //     Manager(string n,int id,double basesal,double managerBo):Employee(n,id,basesal)
// //     {
// // ManagerBonus=managerBo;
// //     }

// //       void calculateSalary() override
// //     {
// //         baseSalary=baseSalary+ManagerBonus;
// //     }

// //      void display()
// //     {
// //         cout<<"Position is manager: "<<endl;
// //         Employee::display();
// //         cout<<"Manager bonus "<<ManagerBonus<<endl;
// //     }


// // };
// // class Engineer: virtual public Employee{
// //     protected:
// //     double overTime;
// //     public:
// //     Engineer(string n,int id,double basesal,double t):Employee(n,id,basesal)
// //     {
// //         overTime=t;
// //     }
// //     void calculateSalary() override
// //     {
// //         baseSalary= baseSalary+(overTime*20);
// //     }
// //     void display()
// //     {
// //         cout<<"Position Engineer "<<endl;
// // Employee::display();
// // cout<<"Over Time(Engineer) "<<overTime<<endl;

// //     }

// // };

// // class Technician: public Manager, public Engineer{
// //     protected:
// //     double toolAlowance;
// //     public:
// //     Technician(string n,int id,double sal,double salary,double man,double tools):Manager(n,id,sal,man),Employee(n, id, sal),
// // Engineer(n,id,sal,0)
// //     {
// //         toolAlowance=tools;
// //     }
// //     void calculateSalary() override
// //     {
// //        baseSalary=baseSalary+ManagerBonus+(overTime*20)+toolAlowance;
// //     }
// //     void display()
// //     {
// //         cout<<"Position Technician "<<endl;
// //         Employee::display();
// //         cout << "Manager Bonus: " << ManagerBonus << endl;
// //         cout << "Overtime Hours: " << overTime << endl;
// //         cout << "Tool Allowance: " << toolAlowance << endl;
  
// //     }
// // };
// // int main()
// // {
// //     Manager m1("Asim",101,2500,300);
// //      Engineer e1("Bob", 102, 4000, 15);
// //     Technician t1("Charlie", 103, 4500, 800, 10, 500);
// //     m1.calculateSalary();
// //     m1.display();

// //     e1.calculateSalary();
// //     e1.display();
    
// //     t1.calculateSalary();
// //     t1.display();

// //     return 0;
// // }



// // #include<iostream>
// // using namespace std;
// // class Employee{
// //     protected:
// //     int totalWage;
// //     public:

// //     Employee(int w)
// //     {
// //         totalWage=w;
// //     }
// // virtual int CalculateWageHour()
// //     {
// //         return totalWage;
// //     }
// //     void display()
// //     {
// //         cout<<"Total wage "<<totalWage<<endl;
// //     }
// // };


// // class HourlyWorker: virtual public Employee{
// //     protected:
// //     int hourWorked;
// //     public:
// //     HourlyWorker(int w,int hr):Employee(w)
// //     {
// //         hourWorked=hr;
// //     }

// //     int CalculateWageHour()
// //     {
// //         return totalWage*hourWorked;
// //     }
// //     void display()
// //     {
// //         Employee::display();
// //         cout<<"Hour worked"<<hourWorked<<endl;
// //     }
// // };

// // class SalariedEmployee:virtual public Employee{
// //     protected:
// //     int annualHours;
// //     public:
// //     SalariedEmployee(int w,int a):Employee(w)
// //     {
// //         annualHours=a;
// //     }

// //    void CaluculateWageHour()
// //     {
// //         totalWage=totalWage*annualHours;
// //     }
// //     void display()
// //     {
// //         Employee::display();
// //         cout<<"Annaul Hours "<<annualHours<<endl;

// //     }
    
// // };
// // class HourlySalariedEmployee:public HourlyWorker,SalariedEmployee{ 

// //     public:

// //     HourlySalariedEmployee(int w,int hr,int a):Employee(w),HourlyWorker(w,hr),SalariedEmployee(w,a)
// //     {

// //     }

    


// //      int CalculateWageHour() override {

// //         return HourlyWorker::CalculateWageHour() + SalariedEmployee::CalculateWageHour();
// //     }

   
// //     void display()
// //     {
// //         HourlyWorker::display();
// //         SalariedEmployee::display();
// //         cout<<"Hourly salaried Employee pay "<<endl;
// //         cout<<"Wage Hours"<<CalculateWageHour();
// //         HourlyWorker::CalculateWageHour();
// //         SalariedEmployee::CalculateWageHour();

// //     }

// //  };
// //  int main()
// //  {
// //     HourlySalariedEmployee h1(1500,8,120);
// //     h1.display();


// //     return 0;
// //  }


// // #include<iostream>
// // using namespace std;
// // class Shape{
// //     public:
// //     virtual int CalculateArea ()const=0;
// // };
// // class Circle:public Shape{
// //     float raduis;
// //     public:
// //     Circle(float c)
// //     {
// //         raduis=c;
// //     }
// //     int CalculateArea()const
// //     {
// //         cout<<"Area of Circle "<<endl;
// //         return 3.14*(raduis*raduis);
// //     }


// // };
// // class Rectangle:public Shape{
// //     float lenght;
// //     float width;
// //     public:
// //     Rectangle(float l,float w)
// //     {
// //         lenght=l;
// //         width=w;
// //     }

// //     int CalculateArea()const
// //     {
// //         cout<<"Area of Rectangle "<<endl;
// //         return lenght*width;
// //     }

// // };
// // class Triangle:public Shape{
// //     float base;
// //     float height;
// //     public:
// //     Triangle(float b,float h)
// //     {
// //         base=b;
// //         height=h;

// //     }
// //     int CalculateArea()const
// //     {
// //         cout<<"Area of Triangle "<<endl;
// //         return base*height;
// //     }

// // };


// // int main()
// // {
// //     Shape** img=new Shape*[3];

// //     img[0]=new Circle(3);
// //     img[1]=new Rectangle(2,5);
// //     img[2]=new Triangle(4,5);

// //     for (int i = 0; i <3; i++)
// //     {
// //        cout<<img[i]->CalculateArea()<<endl;
// //     }
    
// // delete[]img;
// //     return 0;
// // }


// #include<iostream>
// using namespace std;
// class Vehicle{
// protected:
// int VehicleId;
// string name;
// double price;
// public:
// Vehicle(int id,string n,double p)
// {
//     VehicleId=id;
//     name=n;
//     price=p;
// }
// virtual void display()
// {
//     cout<<"Vehicle Id "<<VehicleId<<endl;
//     cout<<"Name "<<name<<endl;
//     cout<<"Price "<<price<<endl;
// }

// virtual bool applyDiscount()=0;

// virtual ~Vehicle()=default;

// };

// class Car:public Vehicle{
//     protected:
//     double mileage;
//     public:
//     Car(int id,string n,double p, double m):Vehicle(id,n,p)
//     {
// mileage=m;
//     }

//     void display()
//     {
//         cout<<"Car Id "<<VehicleId<<endl;
//         cout<<"Car brand "<<name<<endl;
//         cout<<"Price "<<price<<endl;
//         cout<<"Mileage "<<mileage<<endl;

//     }

//     bool applyDiscount ()
//     {
//         if (mileage<=12)
//         {
//             price-=price*0.5;
//             return true;
//         }
//         else 
//         return false;
        
        
//     }


// };
// class Bike:public Vehicle{
//     protected:
//     int Tankcap;
//     public:
//     Bike(int id,string n,double p,int t):Vehicle(id,n,p)
//     {
//         Tankcap=t;
//     }
//     void display()
//     {
//         cout<<"Bike id "<<VehicleId<<endl;
//         cout<<"Bike "<<name<<endl;
//         cout<<"Bike price "<<price<<endl;

//     }

//     bool applyDiscount() 
//     {
//         if (Tankcap<=10)
//         {
//            price-=price*0.3;
//            return true;
//         }
//         else
//         return false;
        
//     }




// };

// static void DiscountCount(Vehicle* vehicle[],int size)
//     {
//         int conut=0;
//         for (int i = 0; i <size; i++)
//         {
//            cout<<vehicle[i]->applyDiscount()<<endl;
//            conut++;
//         }

//         cout<<"total number of disconuts "<<conut<<endl;

        
//     }


// int main()
// {

//      Car c1(3243,"BMW",250000,6);
//      Car c2(1234,"AUDI",130000,4);

//      Bike b1(4543,"Honda",89000,9);

//      Vehicle* Vehicles[5];
//      Vehicles[0]=&c1;
//      Vehicles[1]=&c2;
//      Vehicles[2]=&b1;

//      for (int i = 0; i <5; i++)
//      {
//        Vehicles[i]->applyDiscount();
//        Vehicles[i]->display();
//     }

// DiscountCount(Vehicles,4);   
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class HospitalResource {
// protected:
//     bool isAvailable;
//     int timesUsed;

// public:
//     HospitalResource() {
//         isAvailable = true;
//         timesUsed = 0;
//     }

//     virtual void useResource() {
//         isAvailable = false;
//         timesUsed++;
//     }

//     virtual void releaseResource() {
//         isAvailable = true;
//     }

//     virtual void displayStatus()  {
//         cout << "Available: " << (isAvailable ? "Yes" : "No") << endl;
//         cout << "Times Used: " << timesUsed << endl;
//     }

//     virtual double calculateUsageCost()  = 0;

//     virtual ~HospitalResource() {}
// };

// class DiagnosticUnit : public virtual HospitalResource {
// protected:
//     int testsPerformed;

// public:
//     DiagnosticUnit(int tests) {
//         testsPerformed = tests;
//     }

//     double calculateUsageCost() {
//         return testsPerformed * 100;
//     }

//     void displayStatus(){
//         cout << "Resource Type: Diagnostic Unit" << endl;
//         HospitalResource::displayStatus();
//         cout << "Tests Performed: " << testsPerformed << endl;
//         cout << "Usage Cost: $" << calculateUsageCost() << endl;
//     }
// };

// class CareUnit : public virtual HospitalResource {
// protected:
//     int careHours;

// public:
//     CareUnit(int hours) {
//         careHours = hours;
//     }

//     double calculateUsageCost() {
//         return careHours * 50;
//     }

//     void displayStatus()  {
//         cout << "Resource Type: Care Unit" << endl;
//         HospitalResource::displayStatus();
//         cout << "Care Hours: " << careHours << endl;
//         cout << "Usage Cost: $" << calculateUsageCost() << endl;
//     }
// };

// class SmartCareUnit : public DiagnosticUnit, public CareUnit {
// public:
//     SmartCareUnit(int tests, int hours): HospitalResource(),DiagnosticUnit(tests), CareUnit(hours) {}

//     double calculateUsageCost() {
//         return max(DiagnosticUnit::calculateUsageCost(),CareUnit::calculateUsageCost());
//     }

//     void displayStatus()  {
//         cout << "Resource Type: Smart Care Unit" << endl;
//         HospitalResource::displayStatus();
//         cout << "Tests Performed: " << testsPerformed << endl;
//         cout << "Care Hours: " << careHours << endl;
//         cout << "Usage Cost (Max): $" << calculateUsageCost() << endl;
//     }
// };

// int main() {
//     HospitalResource* resources[3];

//     resources[0] = new DiagnosticUnit(3);   
//     resources[1] = new CareUnit(5);        
//     resources[2] = new SmartCareUnit(3, 5); 
//     for (int i = 0; i < 3; i++) {
//         resources[i]->useResource();
//         resources[i]->displayStatus();
//         cout << "----------------------------------" << endl;
//     }

//     for (int i = 0; i < 3; i++) {
//         delete resources[i];
//     }

//     return 0;
// }





// #include <iostream>
// using namespace std;

// template <typename T>
// class Package {
// protected:
//     string senderName, senderAddress, senderCity, senderState, senderZip;
//     string receiverName, receiverAddress, receiverCity, receiverState, receiverZip;
//     T weight;
//     T costPerOunce;

// public:
//     Package(string sName, string sAddr, string sCity, string sState, string sZip,
//             string rName, string rAddr, string rCity, string rState, string rZip,
//             T w, T cost)
//     {
//         senderName = sName;
//         senderAddress = sAddr;
//         senderCity = sCity;
//         senderState = sState;
//         senderZip = sZip;

//         receiverName = rName;
//         receiverAddress = rAddr;
//         receiverCity = rCity;
//         receiverState = rState;
//         receiverZip = rZip;

//         weight = (w > 0) ? w : 1;
//         costPerOunce = (cost > 0) ? cost : 1;
//     }

//     virtual T calculateCost() {
//         return weight * costPerOunce;
//     }

//     virtual void display() {
//         cout << "Sender: " << senderName << ", " << senderAddress << ", "
//              << senderCity << ", " << senderState << ", " << senderZip << endl;

//         cout << "Recipient: " << receiverName << ", " << receiverAddress << ", "
//              << receiverCity << ", " << receiverState << ", " << receiverZip << endl;

//         cout << "Weight: " << weight << " ounces, Cost per ounce: $" 
//              << costPerOunce << endl;

//         cout << "Shipping Cost: $" << calculateCost() << endl;
//         cout << "--------------------------------" << endl;
//     }

//     virtual ~Package() {}
// };

// template <typename T>
// class TwoDayPackage : public Package<T> {
// private:
//     T flatFee;

// public:
//     TwoDayPackage(string sName, string sAddr, string sCity, string sState, string sZip,
// string rName, string rAddr, string rCity, string rState, string rZip,
//    T w, T cost, T fee): Package<T>(sName, sAddr, sCity, sState, sZip,
// rName, rAddr, rCity, rState, rZip, w, cost)
//     {
//         flatFee = (fee > 0) ? fee : 0;
//     }

//     T calculateCost()  {
//         return this->weight * this->costPerOunce + flatFee;
//     }
// };

// template <typename T>
// class OvernightPackage : public Package<T> {
// private:
//     T extraFeePerOunce;

// public:
//     OvernightPackage(string sName, string sAddr, string sCity, string sState, string sZip,
// string rName, string rAddr, string rCity, string rState, string rZip,
// T w, T cost, T extraFee): Package<T>(sName, sAddr, sCity, sState, sZip,
// rName, rAddr, rCity, rState, rZip, w, cost)
//     {
//         extraFeePerOunce = (extraFee > 0) ? extraFee : 0;
//     }

//     T calculateCost()  {
//         return this->weight * this->costPerOunce + extraFeePerOunce;
//     }
// };

// int main() {
//     Package<double> p1(
//         "Ali", "123 Faisal St", "Lahore", "Punjab", "54000",
//         "Sara", "456 Shadman Rd", "Karachi", "Sindh", "74000",
//         10, 2);

//     TwoDayPackage<double> t1(
//         "Ahmed", "789 Iqbal St", "Islamabad", "ICT", "44000",
//         "Fatima", "101 Clifton Rd", "Karachi", "Sindh", "74000",
//         10, 2, 5);

//     OvernightPackage<double> o1(
//         "Hassan", "202 Gulberg St", "Lahore", "Punjab", "54000",
//         "Ayesha", "303 Blue Area Rd", "Islamabad", "ICT", "44000",
//         10, 2, 10);

//     p1.display();
//     t1.display();
//     o1.display();

//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

//  template <typename T>
// void showValue(T value) {
//     cout << value << endl;
// }

//  class Transaction {
//     string type;
//     double amount;

// public:
//     Transaction(string t = "None", double a = 0) {
//         type = t;
//         amount = a;
//     }

//     void show() {
//         cout << type << " | Amount: $" << amount << endl;
//     }
// };

//  class Security {
// public:
//     static bool verifyPIN(int entered, int actual) {
//         return entered == actual;
//     }
// };

//  class Account {
// protected:
//     int accountNumber;
//     double balance;
//     Transaction transactions[10];
//     int transCount;

// public:
//     Account(int acc, double bal) {
//         accountNumber = acc;
//         balance = bal;
//         transCount = 0;
//     }

//     virtual ~Account() {}

//     virtual void calculateInterest() = 0;
//     virtual string getAccountType() = 0;

//     void deposit(double amt) {
//         if (transCount >= 10)
//             throw "Transaction limit reached";

//         balance += amt;
//         transactions[transCount++] = Transaction("Deposit", amt);
//         cout << "Amount deposited successfully.\n";
//     }

//     void withdraw(double a) {
//         if (a > balance)
//             throw "Insufficient Balance";
//         if (transCount >= 10)
//             throw "Transaction limit reached";

//         balance -= a;
//         transactions[transCount++] = Transaction("Withdraw", a);
//         cout << "Amount withdrawn successfully.\n";
//     }

//     void showAccount() {
//         cout << "\n--- Account Details ---\n";
//         cout << "Account No: " << accountNumber << endl;
//         cout << "Account Type: " << getAccountType() << endl;
//         cout << "Current Balance: ";
//         showValue(balance);
//     }

//     void showTransactions() {
//         cout << "\n--- Transaction History ---\n";
//         for (int i = 0; i < transCount; i++)
//             transactions[i].show();
//     }

//     double getBalance() {
//         return balance;
//     }
// };

//  class SavingsAccount : public Account {
// public:
//     SavingsAccount(int acc, double bal) : Account(acc, bal) {}

//     void calculateInterest() {
//         balance += balance * 0.04;
//         cout << "Interest has been added successfully.\n";
//     }

//     string getAccountType() {
//         return "Savings Account";
//     }
// };

//  class ATM {
//     int pin;

// public:
//     ATM(int p) {
//         pin = p;
//     }

//     void withdraw(Account* acc) {
//         int entered;
//         double amt;

//         cout << "Please enter your PIN: ";
//         cin >> entered;

//         if (!Security::verifyPIN(entered, pin)) {
//             cout << "Incorrect PIN. Access denied.\n";
//             return;
//         }

//         cout << "Please enter the amount to withdraw: ";
//         cin >> amt;

//         try {
//             acc->withdraw(amt);
//         }
//         catch (const char* msg) {
//             cout << msg << endl;
//         }
//     }
// };

//  class Loan {
// protected:
//     double amount;
//     int years;

// public:
//     Loan(double amt, int y) {
//         amount = amt;
//         years = y;
//     }

//     virtual ~Loan() {}
//     virtual double calculateEMI() = 0;
//     virtual string getLoanType() = 0;
// };

// /* ================= HOME LOAN ================= */
// class HomeLoan : public Loan {
// public:
//     HomeLoan(double amt, int y) : Loan(amt, y) {}

//     double calculateEMI() {
//         return (amount + amount * 0.10) / (years * 12);
//     }

//     string getLoanType() {
//         return "Home Loan";
//     }
// };

//  class User {
// public:
//     virtual ~User() {}
//     virtual void menu() = 0;
// };

// /* ================= CUSTOMER ================= */
// class Customer : public User {
//     Account* account;
//     Loan* loan;
//     ATM atm;

// public:
//     Customer(Account* acc, Loan* ln, int pin) : atm(pin) {
//         account = acc;
//         loan = ln;
//     }

//     void menu() {
//         int ch, confirm;

//         while (true) {
//             cout << "\n--- Customer Menu ---\n";
//             cout << "1. Deposit\n2. Withdraw\n3. ATM Withdrawal\n4. View Account\n5. View Transactions\n6. Add Interest\n7. View EMI\n0. Logout\n";
//             cout << "Please select an option: ";
//             cin >> ch;

//             try {
//                 if (ch == 1) {
//                     double a;
//                     cout << "Please enter the amount to deposit: ";
//                     cin >> a;
//                     account->deposit(a);
//                 }
//                 else if (ch == 2) {
//                     double a;
//                     cout << "Please enter the amount to withdraw: ";
//                     cin >> a;
//                     account->withdraw(a);
//                 }
//                 else if (ch == 3) {
//                     atm.withdraw(account);
//                 }
//                 else if (ch == 4) {
//                     account->showAccount();
//                 }
//                 else if (ch == 5) {
//                     account->showTransactions();
//                 }
//                 else if (ch == 6) {
//                     account->calculateInterest();
//                 }
//                 else if (ch == 7) {
//                     cout << loan->getLoanType() << " EMI Amount: ";
//                     showValue(loan->calculateEMI());
//                 }
//                 else if (ch == 0) {
//                     cout << "Confirm logout (1 = Yes): ";
//                     cin >> confirm;
//                     if (confirm == 1)
//                         return;
//                 }
//             }
//             catch (const char* msg) {
//                 cout << msg << endl;
//             }
//         }
//     }
// };

//  class Admin : public User {
// protected:
//     string username;
//     string password;
//     Account* account;
//     Loan* loan;

// public:
//     Admin(Account* acc, Loan* ln) {
//         username = "admin";
//         password = "admin123";
//         account = acc;
//         loan = ln;
//     }

//     bool login() {
//         string u, p;
//         cout << "Enter admin username: ";
//         cin >> u;
//         cout << "Enter admin password: ";
//         cin >> p;

//         if (u != username || p != password)
//             throw "Invalid admin credentials";

//         cout << "Admin login successful.\n";
//         return true;
//     }

//     void menu() {
//         int ch, confirm;

//         while (true) {
//             cout << "\n--- Admin Menu ---\n";
//             cout << "1. Customer Summary\n2. Generate Report\n0. Logout\n";
//             cout << "Please select an option: ";
//             cin >> ch;

//             if (ch == 1) {
//                 account->showAccount();
//                 cout << "Loan Type: " << loan->getLoanType() << endl;
//             }
//             else if (ch == 2) {
//                 cout << "\n--- BANK REPORT ---\n";
//                 cout << "Total Customers: 1\n";
//                 cout << "Account Type: " << account->getAccountType() << endl;
//                 cout << "Total Balance: " << account->getBalance() << endl;
//                 cout << "Loan Type: " << loan->getLoanType() << endl;
//             }
//             else if (ch == 0) {
//                 cout << "Confirm logout (1 = Yes): ";
//                 cin >> confirm;
//                 if (confirm == 1)
//                     return;
//             }
//         }
//     }
// };

//  class BankSystem {
// public:
//     void start() {
//         SavingsAccount acc(1001, 5000);
//         HomeLoan loan(200000, 15);

//         int ch;

//         do {
//             cout << "\n--- Welcome to Bank System ---\n";
//             cout << "1. Customer\n2. Admin\n0. Exit\n";
//             cout << "Please select an option: ";
//             cin >> ch;

//             if (ch == 1) {
//                 Customer c(&acc, &loan, 1234);
//                 c.menu();
//             }
//             else if (ch == 2) {
//                 Admin a(&acc, &loan);
//                 try {
//                     a.login();
//                     a.menu();
//                 }
//                 catch (const char* msg) {
//                     cout << msg << endl;
//                 }
//             }
//         } while (ch != 0);

//         cout << "Thank you for using the Bank System.\n";
//     }
// };

//  int main() {
//     BankSystem bank;
//     bank.start();
//     return 0;
// }



// #include<iostream>
// using namespace std;
// class onwer{
//     int onwerID;
//     string onwerName;
//     bool verified;
//     double budget;

//     public:
//     onwer(int id,string n,bool v,double b)
//     {
// onwerID=id;
// onwerName=n;
// verified=v;
// budget=b;
//     }

// };

// class Property{
//     protected:
//     int id;
//     double area;
//     double price;
//     bool verifi;
//     onwer* own;
//     public:
//     Property(int i,double p,bool v)
//     {
//         id=i;
//         price=p;
//         verifi=v;
//         own=nullptr;

//     }

//     void setOwner(onwer *o)
//     {
//         own=o;
//     }
//   onwer* getOwner()
//   {
//     return own;

//   }
//   double getarea()
//   {
//     return area;
//   }
//    virtual string getType() {
//         return "Property";
//     }

//   virtual void display()
//   {
//     cout<<"ID "<<id<<endl;
//     cout<<"price "<<price<<endl;
//     cout<<"Verified "<<verifi<<endl;
//     // if (own)
//     //         cout << ", Owner: " << own->onwerName;

//     //     cout << endl;
//     // }
    
//   }
//  virtual ~Property() {}

// };

// class ResidentialProperty:public Property{
//     int bedrooms;
//     public:
//     ResidentialProperty(int i,double p,bool v,int bed):Property(i,p,v)
//     {
//         bedrooms=bed;
//     }
// string getType() {
//         return "Residential Property";
//     }

//     void display()
//     {
//         Property::display();
//         cout<<"Bedrooms "<<bedrooms<<endl;
//     }



// };

// class CommercialProperty:public Property{
//     int shops;
//     public:
//     CommercialProperty(int i,double p,bool v,int s):Property(i,p,v)
//     {
//         shops=s;
//     }


//     string getType() {
//         return "Commercial Property";
//     }

//     void display()
//     {
//         Property::display();
//         cout<<"Shops  "<<shops<<endl;
//     }



// void addproperties(Property* arr[],int size,Property* ver[],int& vsize)
// {
// for (int i = 0; i < size; i++)
// {
//     if (arr[i]->getOwner()!=0)
// {
//     ver[size++]=arr[i];}
// }

// }


// void countTypeArea(Property*arr[],int size)
// {
//     int resi=0,commer=0;
//     double totalarea=0;
//     for (int i = 0; i <size; i++)
//     {
//     totalarea+=arr[i]->getarea();
//     if (arr[i]->getType()=="Commercial Property")
//     {
//         resi++;
//     }
//     if (arr[i]->getType()=="Residential Property")
//     {
//         commer++;
//     }}
    

// }
// };






// #include<iostream>
// using namespace std;
// class Scholarship{
// int  scholarID;
// string scholarName;
// double scholarAmount;
// public:
// Scholarship(int id,string name,double amt)
// {
//     scholarID=id;
//     scholarName=name;
//     scholarAmount=amt;
// }
// void display()
// {
//     cout<<"Scholar Id "<<scholarID<<endl;
//     cout<<"Scholar Name "<<scholarName<<endl;
//     cout<<"Scholar Amount "<<scholarAmount<<endl;
// }
// void setName(string n)
// {scholarName=n;
    
// }
// string getname()
// {
//     return scholarName;
// }

// void setID(int id)
// {
//     scholarID=id;
// }

// int getId()
// {
//     return scholarID;
// }


// };
// class Student{
//     int StudentID;
//     string StudentName;
//     double GPA;
//     int age;
//     Scholarship* scholar;
//     public:
//     Student(int id,string name,double g,int a)
//     {
//         StudentID=id;
//         StudentName=name;
//         GPA=g;
//         age=a;
//         scholar=nullptr;
//     }
//     virtual void display()
//     {
//         cout<<"Student Id "<<StudentID<<endl;
//         cout<<"Student Name "<<StudentName<<StudentName<<endl;
//         cout<<"GPA "<<GPA<<endl;
//         cout<<"Age "<<age<<endl;
//        cout<<"Scholarship name "<<scholar->getname()<<endl;
        
//     }
//     void setscholar(Scholarship* s)
//     {
//         scholar=s;
//     }
// Scholarship* getscholar()
// {
//     return scholar;
// }



// };

// class Undergrad:public Student{
//     int sem;
//     public:
//     Undergrad(int id,string name,double g,int a,int s):Student(id,name,g,a)
//     {
//         sem=s;
//     }
// void display()
// {
//     cout<<"Undergrad scholarship (sem) "<<sem<<endl;
//     Student::display();
// }

// string gettype()
// {
// return "Undergrad";
// }


// };
// class Graduate:public Student{
//     string ResearchArea;
//     public:
//     Graduate(int id,string name,double g,int a,string r):Student(id,name,g,a)
//     {
//         ResearchArea=r;
//     }

//     string gettype()
//     {
//         return "ResearchArea";
//     }
//     void display()
//     {
//         cout<<"Scholarshp type: Graduate "<<endl;
//         cout<<"Research area "<<ResearchArea<<endl;
//         Student::display();
//     }

//     void applyScholarship(Student* s, Scholarship* sc)
//     {
// s->setscholar(sc);
//     }
//     void addScholarship(Student* arr[],int& size,Student* s)
//     {
//         if (s->getscholar()!=nullptr)
//         {
//           arr[size++]=s;
//         }
        
//     }

//     void checkShared(Student* arr[],int size)
//     {
//         for (int  i = 0; i <size; i++)
//         {
//           for (int j=i+1 ; j < size; j++)
//           {
//             if (arr[i]->getscholar()==arr[j]->getscholar())
//             {
//                cout<<"shared "<<arr[i]->getscholar()->getname();

//             }
            
//           }
          
//         }
        
//     }

// #include<iostream>
// using namespace std;
// class Employee{
//     protected:
//     string name;
//     int id;
//     double salary;
//     public:
//     Employee(string n,int i,double sal)
//     {
//         name=n;
//         id=i;
//         salary=sal;
//     }


//     virtual void CalculateSalary()
//     {
//         cout<<"Base Salary(Calculation) "<<salary<<endl;

//     }
//  virtual   void displayinfo()
//     {
//         cout<<"Employee Name "<<name<<endl;
//         cout<<"Employee Id "<<id<<endl;
//         cout<<"Employee salary "<<salary<<endl;

//     }

// };
// class Manager:public virtual Employee{
//     protected:
//     double bonus;
//     public:
//     Manager(string n,int id,double sal,double bon):Employee(n,id,sal)
//     {
//         bonus=bon;
//     }
//     void CalculateSalary()
//     {
//         int total=salary+bonus;
//         cout<<"Salary after Bonus "<<total<<endl;

//     }
//   void displayinfo()
//   {
//     cout<<"Manager details! "<<endl;
//     Employee::displayinfo();
//     cout<<"Bonus "<<bonus<<endl;

//   }
// };
// class Engineer:public virtual Employee{
//     protected:
//     double overtime;
//     public:
//     Engineer(string n,int id,double sal,double time):Employee(n,id,sal)
//     {
//         overtime=time;
//     }

//      void CalculateSalary()
//      {
//         int over=overtime*20;
//        int total= salary+over;
//        cout<<"Salary after overtime "<<total<<endl;
//      }
//        void displayinfo()
//   {
//     cout<<"Engineer details! "<<endl;
//     Employee::displayinfo();
    
//     cout<<"overtime"<<overtime<<endl;

//   }


// };
// class Technician:public Manager,Engineer{
//     protected:
//     double totalAllowance;
//     public:
//     Technician(string n ,int id,double sal,double bon,int over,double total):Employee(n,id,sal),Manager(n,id,sal,bon),Engineer(n,id,sal,over)
//     {
//         totalAllowance=total;
//     }
   
//        void CalculateSalary()
//        {
//         int mtoatl=salary+bonus+overtime;
//         int etotal=salary+overtime*20+overtime;
//         cout<<"Manager salary after(Bonus+overtime)"<<mtoatl<<endl;
//         cout<<"Engineer salary(Overtime+bonus) "<<etotal<<endl;

// }
//             void displayinfo()
//   {
//     cout<<"Technician details! "<<endl;
//     Employee::displayinfo();
    
//     cout<<"Total Allowance "<<totalAllowance<<endl;

//   }

// };
// int main()
// {
//     Technician t1("Asim",787,1500,300,2,500);
//     Technician t2("TAHA",1900,30000,500,4,600);
//     t2.CalculateSalary();
//     t2.displayinfo();
// }

#include<iostream>
using namespace std;
int main ()
{

    for (int i = 0; i <10; i++)
    {
        cout<<"KHIZAR"<<endl;
        
    }
    
    
    
    return 0;
}



