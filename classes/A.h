#ifndef A_H
#define A_H 
class A
{
	private:
		int age;
	
	public:
		A(int age)
		{
			this->age = age; // "this" is a B pointer
		}

		int getAge()
		{
			return age;
		}

		void setAge(int x)
		{
			age = x;
		}
}; // Yes, you do need a semicolon at the end of the class

#endif
