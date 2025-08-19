#include<iostream>
#include<string>
using namespace std;

class employee
{
	string Name;
	int eID;
	string Department;
	string doj;
	string address;
	int tnumber;
	static int count;
	static int dcount;
	public:
    	employee(string N, int ID, string Dept, string dj, string addrs, int tnum)
        	{    
            	cout<<"You are in parameterized constructor"<<endl;
            	Name = N;
            	eID = ID;
            	Department = Dept;
            	doj = dj;
            	address = addrs;
            	tnumber = tnum;
            	count++;
        	}
    	employee()
        	{    
            	cout<<endl<<"You are in default constructor"<<endl;
            	Name = "Viraj";
            	eID = 1099;
            	Department = "Computer";
            	doj = "11-2023-20";
            	address = "Pune";
            	tnumber = 9995;
            	count++;
        	}
    	employee(employee &p1)
    	{
            	Name = p1.Name;
            	eID = p1.eID;
            	Department = p1.Department;
            	doj = p1.doj;
            	address = p1.address;
            	tnumber = p1.tnumber;
            	cout<<endl<<"In Copy Constructor"<<endl;
            	count++;
    	}
   	 
   	 
    	inline void title()
    	{
            	cout<<"Employee Management system";
    	}    
    	~employee()
    	{
            	cout<<endl<<"Number of objects destroyed : "<< dcount<<endl;
            	dcount++;
    	}
	void display();

    
       	 
   	 

           	 
           	 
};

void employee::display()

{
	cout<<Name<<endl<<eID<<endl<<Department<<endl<<doj<<endl<<address<<endl<<tnumber<<endl<<"Employee Count is :"<<count;
}
int employee::count;    
int employee::dcount=1;
int main()
{
	//p1.title();
	employee p1("Arjun",69,"H","11-02-2024","Pune",9882);
	cout<<endl;
	p1.title(); cout<<endl;
	p1.display();
	employee p2;
	p2.display();
	employee p3(p1);
	p3.display();
    
	employee *ptr= new employee("Rahul",10,"G","11", "Mumbai",001);
	ptr->display();
	delete ptr;
    
    
    
	return 0;
    
}
