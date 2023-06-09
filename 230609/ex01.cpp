#include "Header.h"

int getInteger(const char* prompt) {
	int input;
	printf(prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);
	return input;
}
string getString(const char* prompt) {
	char line[100];
	printf(prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", &line);
	return line;
}

void Student::printInfo() {
	printf("�̸�: %s / ����: %d / ����: %d / ����: %d \n", name.c_str(), korean, english, math);
}

int main()
{
	vector<Student> students;

	FILE* infile = fopen("students.txt", "r");
	while (true) {
		if (feof(infile) == 1) break;
		char name[100];
		int korean;
		int english;
		int math;
		int result;
		result = fscanf(infile, "%99[^\n]s", name);
		if (result == -1) break;
		fgetc(infile);
		result = fscanf(infile, "%d %d %d", &korean, &english, &math);
		if (result == -1) break;
		fgetc(infile);
		Student s = Student(name, korean, english, math);
		students.push_back(s);
	}
	while (true) {
		for (int i = 0; i < students.size(); i++) {
			students[i].printInfo();
		}
		string name = getString("�л� �̸�: ");
		int korean = getInteger("���� ����: ");
		int english = getInteger("���� ����: ");
		int math = getInteger("���� ����: ");

		Student s = Student(name, korean, english, math);
		students.push_back(s);

		FILE* outfile = fopen("students.txt", "w");
		for (int i = 0; i < students.size(); i++) {
			fprintf(outfile, "%s\n", students[i].name.c_str());
			fprintf(outfile, "%d %d %d\n", students[i].korean, students[i].english, students[i].math);
		}
		fclose(outfile);
			}
	return 0;
}

Student::Student(string name, int korean, int english, int math) {
	this->name = name;
	this->korean = korean;
	this->english = english;
	this->math = math;
}
