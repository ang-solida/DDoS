#include<iostream>
#include<mysql.h>
using namespace std;
int main(){
	MYSQL* con;
	con = mysql_init(0);
	con = mysql_real_connect(con,"localhost","root","sql$solid10062008","tue",3306,NULL,0);
	if(!con){
		cout<<"Connect MySQL fail\n";
		return 1;
	}
	int op;
	do{
		cout<<"    ==[MENU]==    "<<endl;
		cout<<"[1]. INSERT DATA"<<endl;
		cout<<"[2]. UPDETE DATA"<<endl;
		cout<<"[3]. DELETE DATA"<<endl;
		cout<<"[4]. SHOWWW DATA"<<endl;
		
		cout<<"Choose Your Option : ";cin>>op;
		
		if(op==1){
			cout<<"= = = INSERT = = ="<<endl;
			int id;
			string name, gender;
			float salary;
			int n;
			cout<<"How many to insert? =>are : ";cin>>n;	
			for(int i=0;i<n;i++){
//				cout<<"Record 1"<<endl;
				cout<<"Enter iD : ";cin>>id;
				cout<<"Enter Name : ";cin>>name;
				cout<<"Enter Gender : ";cin>>gender;
				cout<<"Enter Salary : ";cin>>salary;
			
			string query = "INSERT INTO crud(id,name,gender,salary)VALUE("+to_string(id)+",'"+name+"','"+gender+"','"+to_string(salary)+"')";
			
			if(mysql_query(con,query.c_str())==0){
				cout<<"Insert data succes"<<endl;	
			}
			else{
				cout<<"Insert data not found"<<endl;
			}
		}
		}
		else if(op==2){
			cout<<" = = = UPDATE = = ="<<endl;
			int id;
			string name, gender;
			float salary;
			cout<<"Enter iD : ";cin>>id;
			cout<<"Enter Name : ";cin>>name;
			cout<<"Enter Gender : ";cin>>gender;
			cout<<"Enter Salary : ";cin>>salary;
			
			string query = "UPDATE crud SET name = '"+name+"', gender = '"+gender+"', salary = '"+to_string(salary)+"' WHERE id = "+to_string(id);
			
			if(mysql_query(con,query.c_str())==0){
				cout<<"Update data success"<<endl;
			}
			else{
				cout<<"Update data failed"<<endl;
			}
		}
		else if(op=3){
			cout<<"= = = DELETE = = ="<<endl;
			int id;
			cout<<"Enter iD : ";cin>>id;
			string query = "DELETE FROM crud WHERE id = "+to_string(id);
			if(mysql_query(con,query.c_str())==0){
				cout<<"Delete data success"<<endl;
			}
			else{
				cout<<"Delete data failed"<<endl;
			}
		}
		else if(op=4){
			cout<<"= = = SHOW = = ="<<endl;
			MYSQL_RES* res;
			MYSQL_ROW* row;		
			string query = "SELECT * FROM crud";
			if(mysql_query(con,query.c_str())==0){
				cout<<"Select data success"<<endl;
			}
			else{
				cout<<"Select data failed"<<endl;
			}
			MYSQL_ROW* row = mysql_store_resulf(con);
				if(!res){
					cout<<"Error Console\n";
				}
				while(row = mysql_fetch_row(res)){
					for(int i-0;i<n;i++){
						cout<<row[0]<<"\t"
						cout<<row[1]<<"\t"
						cout<<row[2]<<"\t"
						cout<<row[3]<<"\t"<<endl;
					}
				}
				mysql_free_resulf
		}
	}while(op!=0);
	return 0;
}
