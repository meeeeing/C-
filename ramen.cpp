#include <iostream>

#include <string>

using namespace std;



int total(int* a, int* b) { return *a * *b; }



int main() {



    string menu[] = { "일반 라면", "김치 라면", "치즈 라면", "떡 라면", "떡 만두 라면" };

    int prices[] = { 3500, 4000, 4200, 4300, 4500 };

    int sum = 0;



    while (true)

    {

        cout << endl << endl << "***** 슈니의 라면가게에 오신 것을 환영합니다 *****" << endl;

        cout << "1. 일반 라면 (3500원)" << endl;

        cout << "2. 김치 라면 (4000원)" << endl;

        cout << "3. 치즈 라면 (4200원)" << endl;

        cout << "4. 떡 라면 (4300원)" << endl;

        cout << "5. 떡 만두 라면 (4500원)" << endl;



        cout << "구매하실 라면 번호를 입력해 주세요(종료는 0) : ";



        int r; //구매할 라면 번호

        cin >> r;

        cout << endl;





        if (r > 0 && r < 6) {

            cout << menu[r - 1] << "을(를) 구매하시겠습니까?(Y/N) " << endl;

            char o; //구매할건지 말건지 받을거

            cin >> o;



            if (o == 'Y') {

                cout << "구매하실 라면 개수를 입력해 주세요 : ";

                int p; // 구매할 라면 개수

                cin >> p;

                cout << endl << menu[r - 1] << "을(를)" << "구매하셨습니다." << endl;

                cout << "가격은" << prices[r - 1] * p << "원 입니다";



                total(&prices[r - 1], &p);

                //이게 최종금액 total은 걍 곱해서 뭐시기임 이게 마지막출력 될 합계금액

                sum += total(&prices[r - 1], &p);

                continue;

            }

            else if (o == 'N') {

                continue;

            }



        }

        else if (r < 0 || r>5)

            cout << "제대로된 숫자를 입력해주세요.";









        else if (r == 0)

            cout << "총 가격은 " << sum << "입니다.";



        break;



    }





    return 0;

}

