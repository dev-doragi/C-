//// Account(���� ����) Ŭ������ ����, ����, ����ϴ� ���α׷�
//#include <iostream>
//#include <cassert>
//using namespace std;
//
//// Ŭ���� ����(��� ����)
//class Account
//{
//private:
//    long accNumber;
//    double balance;
//    static int base;  // ���� ������ ���
//public:
//    Account(double bal); // ������
//    ~Account();  // �Ҹ���
//    void checkBalance() const;     // ������
//    void deposit(double amount);   // ������    
//    void withdraw(double amount);    // ������
//};
//// ���� ������ ��� �ʱ�ȭ
//int Account::base = 0;
//// ��� ��� �Լ� ����   
//// �Ű������� �ִ� ������
//Account::Account(double bal)
//    :balance(bal)
//{
//    if (bal < 0.0)
//    {
//        cout << "�ܾ��� ������ �� �� �����ϴ�. ���α׷��� �����մϴ�.";
//        assert(false);
//    }
//    base++;
//    accNumber = 100000 + base;
//
//    cout << "����_#" << accNumber << "�� ����������ϴ�. " << endl;
//    cout << "�ܾ� $" << balance << endl << endl;
//}
//// �Ҹ���
//Account::~Account()
//{
//    cout << "����_#" << accNumber << "�� �������ϴ�." << endl;
//    cout << "$" << balance << "�� ������ ���½��ϴ�." << endl << endl;
//}
//// Accessor member function
//void Account::checkBalance() const
//{
//    cout << "����_# " << accNumber << endl;
//    cout << "Ʈ����� - �ܾ� Ȯ��" << endl;
//    cout << "�ܾ�: $" << balance << endl << endl;
//}
//// ������ ��� �Լ�
//void Account::deposit(double amount)
//{
//    if (amount > 0.0)
//    {
//        balance += amount;
//        cout << "����_# " << accNumber << endl;
//        cout << "Ʈ����� - �Ա� $" << amount << endl;
//        cout << "����� �ܾ�: $" << balance << endl << endl;
//    }
//    else
//    {
//        cout << "Ʈ������� �ߴܵǾ����ϴ�." << endl;
//    }
//}
//// ������ ��� �Լ�
//void Account::withdraw(double amount)
//{
//    if (amount > balance)
//    {
//        amount = balance;
//    }
//    balance -= amount;
//    cout << "����_# " << accNumber << endl;
//    cout << "Ʈ����� - ����: $" << amount << endl;
//    cout << "����� �ܾ�: $" << balance << endl << endl;
//}
//// Account Ŭ������ ����ϴ� ���ø����̼�(main �Լ�)  
//int main()
//{
//    // ���� 3�� ����
//    Account acc1(2000);
//    Account acc2(5000);
//    Account acc3(1000);
//    // Ʈ�����
//    acc1.deposit(150);
//    acc2.checkBalance();
//    acc1.checkBalance();
//    acc3.withdraw(800);
//    acc1.withdraw(1000);
//    acc2.deposit(120);
//    return 0;
//}