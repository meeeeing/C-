

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Information {
private:
	string name;
	string phonenumber;

public:
	Information();
	Information(string name, string phonenumber);



	bool Check(const Information& contact, const string& name, const string& phonenumber) {
		return (contact.name == name) && (contact.phonenumber == phonenumber);
	}




	int main() {

		Information contact;
		vector<Information>contacts;
		cout << "*****" << "SWING ȸ�� ���� ���� ���α׷�" << "*****" << endl << endl;
		cout << "1. ȸ������";
		cout << "2. �α���";
		cout << "3. ȸ�� ���� ����";
		cout << "4. ����";

		cout << "��ȣ�� �Է��ϼ��� : ";

		int a; // �Է¹��� ��ȣ
		int name;
		cin >> a;

		if (a == 1) {
			cout << "***** ȸ�������� �����մϴ� *****" << endl << endl;
			cout << "�̸��� �Է��ϼ��� : ";
			cin >> contact.name;
			cout << "��ȭ��ȣ�� �Է��ϼ��� : ";
			cin >> contact.phonenumber;
			contacts.push_back(contact);

			if (Check(contacts.back(), contact.name, contact.phonenumber) == true) {
				cout << "�̹� ��ϵ� �����Դϴ�.";
			}
			else {
				cout << "�̸��� �Է��ϼ��� : ";
				cin >> name;
				cout << "��ȭ��ȣ�� �Է��ϼ��� : ";
				cin >> phonenumber;
			}

		}
		else if (a == 2) {

			cout << "***** �α����� �����մϴ� *****" << endl << endl;
			cout << "�̸��� �Է��ϼ��� : ";
			cin >> contact.name;
			cout << "��ȭ��ȣ�� �Է��ϼ��� : ";
			cin >> contact.phonenumber;


			if (Check(contacts.back(), contact.name, contact.phonenumber) == true) {
				cout << "�α����� �Ϸ�Ǿ����ϴ�." << endl;
				cout << "***** SWING " << contact.name << "���� �����մϴ� *****";
			}
			else {
				cout << "ȸ�������� ��ġ�����ʽ��ϴ�." << endl;
			}
		}

		else if (a == 3) {
			cout << "***** ȸ������ ������ �����մϴ� *****" << endl << endl;
			cout << "���� ȸ�� ����" << endl;
			cout << "�̸� : ";
			cin >> contact.name;
			cout << "��ȭ��ȣ";
			cin >> contact.phonenumber;
			if (Check(contacts.back(), contact.name, contact.phonenumber) == false) {
				cout << "ȸ�� ������ ��ġ ���� �ʽ��ϴ�." << endl;
			}
			else {
				cout << "���ο� ȸ�� ���� " << endl;
				cout << "�̸� : " << endl;
				cin >> name;
				cout << "��ȭ��ȣ : " << endl;
				cin >> phonenumber;

				cout << "ȸ������ ������ �Ϸ�Ǿ����ϴ�." << endl;

			}
		}
		else if (a == 4) {
			cout << "SWING ȸ�� ���� ���� ���α׷��� �����մϴ�." << endl;
		}

		else {
			cout << "��Ȯ�� ��ȣ�� �Է����ּ���.";
		}

	}
	return 0;
}
		