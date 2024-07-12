#include <iostream>
class Student {

	public :

	int rollNumber;
	
	private :

	int age;


	public :
	~Student(){
		cout<<"Destructor Called!"<<endl;
	}
	Student(){
		//Default Constructor
		cout<<"Constructor Called!"<<endl;
	}
	//Parameterized Constructor
	Student(int rollNumber){
		cout << "Constructor 2 Called!" << endl;
		this->rollNumber=rollNumber;
	}
	Student(int a,int r)
	{
		cout<<"this:"<<this<<endl;
		cout << "Constructor 3 Called!" << endl;
		this->rollNumber = r;
		age=a;
	}
	void display() {
		cout << age << " " << rollNumber << endl;
	}

	int getAge() {
		return age;
	}

	void setAge(int a, int password) {
		if(password != 123) {
			return;
		}
		if(a < 0) {
			return;
		}
		age = a;
	}

};


