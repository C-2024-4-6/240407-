class Student
{
public:
	void display();
	void set_value(int Num,const char Name[],const char* Sex);
private:
	int num;
	char name[20];
	char sex;
};