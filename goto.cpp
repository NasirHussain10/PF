#include<iostream>
using namespace std;
int main(){
   	cout<<"start of program."<<endl;
   	goto jump;
   	
   	cout<<"This line is skiped."<<endl;
   	
   	jump:
   		cout<<"jumped to this line!"<<endl;
   		
   return 0;
   		
   }
