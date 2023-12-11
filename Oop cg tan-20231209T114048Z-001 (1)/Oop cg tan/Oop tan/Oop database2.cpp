//student database

#include<iostream>
#include<string>    
using namespace std;

class db {
		int roll;
		string name,Class,Div,dob,bg,city ,phone,license;

	public:
		static int stdno;      
		static void count() {  
			cout<<"\n No.of objects created: "<<stdno;    
		}

		db() {      
			roll=0;
			name,Class,Div,dob,bg,city,phone,license="";
			++stdno;
		}
		
		void getdata() { 
			cout<<"\n\nEnter:Name,Roll no,Class,Div,Dob,Blood group,City,Phone,License \n\n";
			cin>>name>>roll>>Class>>Div>>dob>>bg>>city>>phone>>license;
		}
		
		friend void display(db d);   
		~db() { 
			cout<<"\n\n"<<this->name<<"(Object) is destroyed!\n";
		}
};
int db::stdno; 
void display(db d) {  
	cout<<"\n Name:"<<d.name;
	cout<<"\n Roll_No:"<<d.roll;
	cout<<"\n Class:"<<d.Class;
	cout<<"\n Div:"<<d.Div;
	cout<<"\n DOB:"<<d.dob;
	cout<<"\n Blood group:"<<d.bg;
	cout<<"\n City:"<<d.city;
	cout<<"\n Phone_No:"<<d.phone;
	cout<<" \n License_No:"<<d.license;
}


int main() {
	int n,i;
	db *ptr[5];  

	cout<<"\nHow many objects u want to create?:";
	cin>>n;
	for(i=0; i<n; i++) {
		ptr[i]=new db(); 
		ptr[i]->getdata(); 
	}

	for(i=0; i<n; i++)
		display(*ptr[i]);
		
	db::count();  

	for(i=0; i<n; i++) {
		delete(ptr[i]); 
	}
	
}
