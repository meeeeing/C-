#include <iostream>

#include <string>

using namespace std;



int total(int* a, int* b) { return *a * *b; }



int main() {



    string menu[] = { "�Ϲ� ���", "��ġ ���", "ġ�� ���", "�� ���", "�� ���� ���" };

    int prices[] = { 3500, 4000, 4200, 4300, 4500 };

    int sum = 0;



    while (true)

    {

        cout << endl << endl << "***** ������ ��鰡�Կ� ���� ���� ȯ���մϴ� *****" << endl;

        cout << "1. �Ϲ� ��� (3500��)" << endl;

        cout << "2. ��ġ ��� (4000��)" << endl;

        cout << "3. ġ�� ��� (4200��)" << endl;

        cout << "4. �� ��� (4300��)" << endl;

        cout << "5. �� ���� ��� (4500��)" << endl;



        cout << "�����Ͻ� ��� ��ȣ�� �Է��� �ּ���(����� 0) : ";



        int r; //������ ��� ��ȣ

        cin >> r;

        cout << endl;





        if (r > 0 && r < 6) {

            cout << menu[r - 1] << "��(��) �����Ͻðڽ��ϱ�?(Y/N) " << endl;

            char o; //�����Ұ��� ������ ������

            cin >> o;



            if (o == 'Y') {

                cout << "�����Ͻ� ��� ������ �Է��� �ּ��� : ";

                int p; // ������ ��� ����

                cin >> p;

                cout << endl << menu[r - 1] << "��(��)" << "�����ϼ̽��ϴ�." << endl;

                cout << "������" << prices[r - 1] * p << "�� �Դϴ�";



                total(&prices[r - 1], &p);

                //�̰� �����ݾ� total�� �� ���ؼ� ���ñ��� �̰� ��������� �� �հ�ݾ�

                sum += total(&prices[r - 1], &p);

                continue;

            }

            else if (o == 'N') {

                continue;

            }



        }

        else if (r < 0 || r>5)

            cout << "����ε� ���ڸ� �Է����ּ���.";









        else if (r == 0)

            cout << "�� ������ " << sum << "�Դϴ�.";



        break;



    }





    return 0;

}

