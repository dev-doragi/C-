//#include <cstdio>
//#include <map>
//#include <string>
//#include <algorithm>
//
//int main()
//{
//	std::map<std::string, std::string> capitals;
//
//	capitals["Korea"] = "seoul";
//	capitals["USA"] = "washington";
//	capitals["China"] = "beijing";
//
//	printf("%s\n", capitals["Korea"].c_str());
//
//	// count ����Լ�, Ư�� key�� ��Ī�Ǵ� value�� ������ ����.
//	if (capitals.count("Korea") == 1) {
//		printf("Korea�� ������.\n");
//	}
//	else {
//		printf("Korea�� ������������.\n");
//	}
//
//	// erase ����Լ�
//	capitals.erase("China");
//	if (capitals.count("China") == 1) {
//		printf("China�� ������.\n");
//	}
//	else {
//		printf("China�� ������������.\n");
//	}
//
//	for (auto it = capitals.begin(); it != capitals.end(); it++) {
//		printf("capitals[%s] : %s\n", it->first.c_str(), it->second.c_str());
//	}
//
//	return 0;
//}