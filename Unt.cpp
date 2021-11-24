//What is friend Function in OOP
//A friend function in C++ is defined as a function that can access private, protected and public members of a class.
// C++ program to demonstrate the working of friend function

#include <iostream>
using namespace std;

class A{
	private:
		int a, b;
		public:
			void getdata(){
			   cout << "Enter The Value Of A and B : " <<endl;
			   cin  >> a >> b;
			}
			friend void Add(A );
};
void Add (A ob){
	int c;
	c  = ob.a + ob.b;
	cout << "Sum : " <<c; 
}

int main(){
	A  a1;
	a1.getdata();
	Add(a1);
}
/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/
