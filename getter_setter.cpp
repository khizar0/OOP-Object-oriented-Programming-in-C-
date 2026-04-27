// Basic getter and setter



// #include<iostream>
// using namespace std;
// class student{
//     private:
//     int rollnumber;
//     public:
//     void setRollNum(int r){
//         if (r<=0)
//         {
//            cout<<"Invalid roll number!";
//            return;
//         }
//         rollnumber=r;
//     }
//     int getRollnum(){
//         return rollnumber;
//     }
// };


// int main(){

// student s1;
// s1.setRollNum(12);
// cout<<"Roll number is:"<<s1.getRollnum()<<endl;
//     return 0;
// }



// #include<iostream>
// #include <string>

// using namespace std;
// class cars{

// private:

// string brand;
// float price;


// public:

// void setCarBrand(string b)
// {

//      if (b.length()<2)
//     {
//         cout<<"Invalid only enter a Character!";
//         return;
//     }
//     brand=b;
    

// }

// string getBrand()
// {
//     return brand;

// }
// void setPrice(float pr)
// {
//     if (pr<=0)
//     {
//         cout<<"Invalid input!";
//         return;
//     }
//     price=pr;
    
// }

// float getPrice()
// {
//     return price;
// }


// };
// int main()
// {
 

//     cars c2;
//     c2.setCarBrand("audi");
//     c2.setPrice(25000);

//     cout<<"The car brand is: "<<c2.getBrand()<<endl;
//     cout<<"The car price is: "<<c2.getPrice()<<endl;


//     return 0;
// }


// #include <iostream>
// using namespace std;
// class  car{
// private:
//     string brand;
//     string model;
//     float year=0;
// public:
// void setBrand(string b)
// {
//     brand=b;

// }

// void setModel(string m){
//     model=m;
// }

// void setYear(float y){
//     if (y<2000)
//     {
       
//        year=y;
//     }
//     else{
// cout<<"Invalid<< Defult select 2000 if you not selected!";
// year=2000;
//     }
// }
// string getbrand()
// {

// return brand;

// }

// string getmodel()
// {

// return model;

// }

// float getYear()
// {
//     return year;
// }


// void display()
// {
//     cout<<"Car Details "<<endl;
//     cout<<"Brand: "<<brand<<endl;
//     cout<<"Model: "<<model<<endl;
//     cout<<"Year: "<<year<<endl;

// }

// };

// int main()
// {

//     car c1;

//     c1.setBrand("Toyota");
//     c1.setModel("Corolla");
//     c1.setYear(2025);

//     c1.display();



//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Date{
// private:
// int day, month,year;

// public:
// bool isValid(int d,int m,int y); 
// void setDate(int d, int m, int y);
// void showDate() const; 
// int getYear()const; 
// bool isBefore(const Date& other);
// void calculateAge(const Date& other );
// };

// bool Date::isValid(int d,int m, int y)
// {
//     if (y<0||m<1||m>12||d<1)
//     {
//        return false;
//     }

//     int DaysInMonth[]={ 31,28,31,30,31,30,31,31,30,31,30,31 };

//     if ((y%4==0&&y%100 !=0)||(y%400==0))
//     {
//         DaysInMonth[1]=29;
//     }
//     if (d>DaysInMonth[m-1])
//     {
//         return false;
//         return true;
//     }    
// }

// void Date::setDate(int d,int m,int y)
// {
//     day=d;
//     month=m;
//     year=y;

// }

// void Date::showDate() const
// {
// cout<<day<<"/"<<month<<"/"<<year<<endl;

// }

// int Date::getYear()const
// {
//     return year;
// }



// 




// #include<iostream>
// using namespace std;

// class student
// {
//  string name;
//  int age=0;
//  char grade;

//  public:

//  void setName(int a,string n,char g)
//  {


//     name=n;
//     age=a;
//     grade=g;

//  }

// string getName()
// {
// return name;
// }

// int getAge()
// {
// return age;
// }

// char getGRADE()
// {
// return grade;
// }


// void display()
// {

// cout<<"The student name is: "<<name<<endl;
// cout<<"The student age is: "<<age<<endl;
// cout<<"The student Grade is: "<<grade;

// }

// };

// int main()
// {

// student s1;
// s1.setName(20,"Khizar",'A');

// s1.display();

//     return 0;
// }



// #include<iostream>
// using namespace std;
// class Rectangle{

//     double length;
//     double width;
//     public:

//     void setValue(double l,double w)
//     {
//         length=l;
//         width=w;
//     }

//    double getlength()
//     {
// return length;
//     }
// double getWidth()
// {
//     return width;

// }


// double getArea()
// {
//     double area=length*width;
//     return area;
// }

// void display()
// {
//     cout<<"Length is: "<<length<<endl;
//     cout<<"Width is:"<<width<<endl;
// }
// };



// int main ()
// {

//     Rectangle r1;
//     r1.setValue(5,10);
   
//     r1.display();
//     cout<<"\nArea: "<< r1.getArea();


//     return 0;
// }



// #include<iostream>
// using namespace std;

// class BankingSystem{
// int accNum;
// double balance;

// public:

// void setData(int n,double amount)
// {
//     accNum=n;
//     balance=amount;
// }
// void deposit(int amount)
// {
//     if(amount>0){
//         balance +=amount;
//     }

//     else
//     {
//         cout<<"Invalid! Enter minimum 1$ "<<endl;
//     }
// }
// void withdraw(int amount)
// {
//     if (balance>amount)
//     {
//         balance-=amount;
//     }

//     else
//     {
//         cout<<"Insufficient funds. Withdrawal denied.";
//     }
    
// }

// void display()
// {

//     cout<<"Account Number: "<<accNum<<endl;
//     cout<<"Currently amonut is: "<<balance<<endl;
// }


// };

// int main()
// {
//     BankingSystem b1;
//     b1.setData(12345,4500);
//     // b1.deposit(0);
//     b1.withdraw(1000);
//     b1.display();
//     return 0;
// }



// #include<iostream>
// using namespace std;
// class Car{
// string model;
// int fuel;
// double distance;

// public:
// void setData(string m,int f,double dis)
// {
// model=m;
// fuel=f;
// distance=dis;
// }
// double calMilge()
// {

//     return distance/fuel;
// }

// void display()
// {
//     cout<<"Car "<<model<<endl;
//     cout<<"total fuel use: "<<fuel<<endl;
//     cout<<"Total distance cover: "<<distance<<endl;
//     cout << "Mileage: " << calMilge() << " km/l" << endl;
//     // cout<<distance<<"Km/"<<fuel<<endl;
// }


// };

// int main ()
// {
// Car c1;
// c1.setData("Audi X1",6,200);
// c1.display();

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Rectangle{

// double length;
// double  width;

// public:

// Rectangle(double l,double w)
// {
//     length=l;
//     width=w;
//     int area=length*width;
//         cout<<"Rectangle area is:"<<area<<endl;

// }



// };

// int main()
// {
// Rectangle r1(10,5);

//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Student{

//     string name;
//     int age;

//     public:
//     Student()
//     {
//         name="Unknown";
//         age=0;
//         cout<<"Defualt constructor called!"<<endl;
//     }
//     Student(string n, int a)
//     {
//     name=n;
//     age=a;
//     cout<<"Paramitrized constructor called! "<<endl;
//     }
//     void display()
//     {
// cout<<"Name: "<<name<<"Age "<<age;
//     }
// };

// int main()
// {
//     Student s1;
//     Student s2("Khizar ",20);
//     s2.display();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Employee
// {
//     string name;
//     int basesalary;
//     int bonuspercen;
//     int total;

//     public:
//     Employee(string n,int base,int bonus)
//     {
//         name=n;
//         basesalary=base;
//         bonuspercen=bonus;
//         total=0;

//         cout<<"Constructor called!"<<endl;
//     }

//     int getTotalSalary()
//     {
//         total = basesalary + (basesalary * bonuspercen / 100);
//         return total;
//     }

//     void display()
//     {
//         cout<<"Employee created!"<<endl;
//         cout<<"Name: "<<name<<endl;
//         cout<<"Base salary: "<<basesalary<<endl;
//         cout<<"Bonus: "<<bonuspercen<<"%"<<endl;
//         cout<<"Total salary after bonus: "<<total;
//     }

// };


// int main ()
// {
//     Employee e1("Ali",50000,10);
//     e1.getTotalSalary();
//     e1.display();

// }



// #include<iostream>
// using namespace std;
// class Book{
// string bookName;
// string author;
// double price;

// public:

// Book(string b,string a,double dis)

// {
// bookName=b;
// author=a;
// price=dis;

// cout<<"Constructor call "<<endl;
// }

// int getdis()
// {

//     double discount=(10.0/100)*price;
//     double finaldis=price-discount;
// cout<<"Book title: "<<bookName<<endl;
// cout<<"Author: "<<author<<endl;
// cout<<"Total price: "<<price<<endl;
// cout<<"Discount 10%: "<<discount<<endl;
// cout<<"After discount: "<<finaldis;

// }

// };

// int main()
// {
// Book b1( "C++" ,"Bjarne Stroustrup",1000 );
// b1.getdis();


//     return 0;
// }


#include<iostream>
#include<cstring>
using namespace std;
class Property{
    int propertId;
    char* onwerName;
    int price;
    double area;

    public:
    static int totalProperties;

    Property():propertId(0),price(0),area(0)
    {
onwerName=new char[1];
onwerName[0]='\0';
    }
    Property(int pro,const char*name,int pr,double ar):propertId(pro),price(pr),area(ar){
        int size=strlen(name);
        onwerName=new char[size+1];
        for (int i = 0; i <size; i++)
        {
           onwerName[i]=name[i];

        }

        onwerName='\0';

    }

    Property(const Property& p)
    {propertId=p.propertId;
        price=p.price;
        area=p.area;
        int size=strlen(p.onwerName);
        onwerName=new char[size+1];
        for (int i = 0; i < size; i++)
        {
            onwerName[i]=p.onwerName[i];
        }
    }
    ~Property()
    {
        delete[]onwerName;
    }

    int getId()
    {
        return propertId;
    }
    const char* getName()
    {
        return onwerName;
    }

    int getPrice()
    {
        return price;

    }
    double getArea()
    {
        return area;
    }

    void display()
    {
        cout<<"ID: "<<propertId<<endl;
        cout<<"OnwerName: "<<onwerName<<endl;
        cout<<"Property Price: "<<price<<endl;
        cout<<"Area of property: "<<area<<endl;

    }

double calculateFinalPrice()
{
    double finalprice=price;
    bool discountEli(price>=100000);
    bool taxEli(area>=1000);
    bool higestArea(area>=1500);
    if (discountEli&&taxEli)
    {
        finalprice=finalprice+price*0.04;
        return finalprice;
    }

    if (discountEli)
    {
        finalprice-=price*0.05;

    }

    if (higestArea)
    {
        finalprice+=price*0.09;
    }
    if (taxEli)
    {
       finalprice+=price*0.07;
    }

    return finalprice; 

}

static void addPropertyForSale(Property *&arr,int& count, const Property &p)
{
    for (int i = 0; i < count; i++)
    {
        if (arr[i].propertId==p.propertId)
        {
            cout << "Property for sale already." << endl;
                return;
        }
        
    }
    arr[count] = p;
        count++;
        totalProperties++;
        cout<<"Property with id"<<p.propertId<<"added to estate"<<endl;
    
}
static bool isPropertyAvailableForSale(Property *arr,int count, Property &p)
{
for (int i = 0; i < count; i++)
{
    if (arr[i].propertId==p.propertId)
    {
        cout<<"This property for sale! "<<endl;
        return true;
    }
  
}
cout<<"This property not sale! "<<endl;
return false;

}

static void displayPropertyDetails(Property *arr, int& count,Property &p)
{
    bool exist=false;
    for (int i = 0; i < count; i++)
    {
        if (arr[i].propertId==p.propertId)
        {
            exist=true;
            cout<<"Property details! "<<endl;
            arr[i].display();
            return;

        }
        
    }

      cout << "Property Details (Limited): ";
      cout << "ID: " << p.propertId << ", Area: " << p.area << endl;
    cout << "This property is not available for sale." << endl;
    
}

static void generateReport(Property *arr,int& count)
{
    cout<<"Real Estate Report! ";
    for (int i = 0; i < count; i++)
    {
        arr[i].display();
        double finalprice=arr[i].calculateFinalPrice();
        cout<< "Final Price after Discount and Tax: " << finalprice<<endl;
    }
    cout<<"Total properties in sale: "<<totalProperties<<endl;
    
}


};

int Property::totalProperties = 0;

int main()
{
    int maxsize=10;
    Property* salelist= new Property[maxsize];
    int count=0;

    Property p1(101,"Jhon",500000,1500);
    Property p2(102, "Alice", 800000, 950);
    Property p3(101, "Mark", 600000, 1200);

    Property::addPropertyForSale(salelist, count, p1);
    Property::addPropertyForSale(salelist, count, p2);
    Property::addPropertyForSale(salelist, count, p3);
    cout<<endl;

    Property::displayPropertyDetails(salelist,count,p1);
    Property::generateReport(salelist,count);
    delete[]salelist;
    return 0;
}
