#include <iostream>

using namespace std;

//평면원
class PlaneCircle{
private:
    const double PI = 3.14;
    
public:
    int radius;
    PlaneCircle(){
        cout << "***평면 원 계산기 접속***"<<endl<<endl;
    }
    ~PlaneCircle(){
        cout << "평면 원 계산기 종료..."<<endl<<endl;
    }
    
    
    double getArea(){
        return radius * radius * PI;
    };
    
    double getCircum(){
        return 2 * PI * radius;
    };
    
};

//원기둥
class Cylinder{
private:
    const double PI = 3.14;
    
public:
    int radius;
    int high;
    Cylinder(){
        cout << "***원기둥 계산기 접속***"<<endl<<endl;
    }
    ~Cylinder(){
        cout << "원기둥 계산기 종료..."<<endl<<endl;
    }
    
    
    double getVolume(){
        return radius * radius * PI * high;
    };
    
    double getWidth(){
        return 2 * PI * radius *radius + 2 * PI * radius * high;
    };
    
};

//원뿔
class Cone{
private:
    const double PI = 3.14;
    
public:
    int radius;
    int high;
    Cone(){
        cout << "***원뿔 계산기 접속***"<<endl<<endl;
    }
    ~Cone(){
        cout << "원뿔 계산기 종료..."<<endl<<endl;
    }
    double getVolume(){
        return radius * radius * PI * high /3;
    };
};

//구
class Sphere{
private:
    const double PI = 3.14;
    
public:
    int radius;
    int high;
    Sphere(){
        cout << "*** 구 계산기 접속***"<<endl<<endl;
    }
    ~Sphere(){
        cout << "구 계산기 종료..."<<endl<<endl;
    }
    
    
    double getVolume(){
        return radius * radius * PI * high * 2/3;
    };
    double getWidth(){
        return 4 * PI * radius * radius;
    };
    
};


int main(){
    
    
    
    
    
    cout<<"원하는 계산을 선택하세요"<<endl;
    cout<<"1. 원의 넓이 계산"<<endl;
    cout<<"2. 원의 둘레 계산"<<endl;
    cout<<"3. 원기둥의 부피 계산"<<endl;
    cout<<"4. 원기둥의 겉넓이 계산"<<endl;
    cout<<"5. 원뿔의 부피 계산"<<endl;
    cout<<"6. 구의 부피 계산"<<endl;
    cout<<"7. 구의 겉넓이 계산"<<endl;
    cout<<"8. 종료"<<endl;
    
    cout<< "선택 : ";
    
    int a;
    cin>>a;
    
    
    int b; //반지름입력받을거
    int c; // 높이 입력받을거
    
    
    if(a==1){
        cout << "반지름 입력 : ";
        cin >> b;
        PlaneCircle one;
        one.radius = b;
        double re = one.getArea();
        cout <<"원의 넓이 계산: "<< re << endl << endl;
    }
    else if(a==2){
        cout << "반지름 입력 : ";
        cin >> b;
        PlaneCircle one;
        one.radius = b;
        double re = one.getCircum();
        cout <<"원의 둘레 계산: "<< re <<endl<< endl;
    }
    else if(a==3){
        cout << "반지름 입력: ";
        cin >> b;
        cout <<endl<< "높이 입력: ";
        cin >> c;
        
        Cylinder cly;
        cly.radius = b;
        cly.high = c;
        double re = cly.getVolume();
        cout <<" 원기둥의 부피 계산:"<< re <<endl <<endl;
    }
    else if(a==4){
        cout << "반지름 입력: ";
        cin >> b;
        cout <<endl<< "높이 입력: ";
        cin >> c;
        
        Cylinder cly;
        cly.radius = b;
        cly.high = c;
        double re = cly.getWidth();
        cout <<" 원기둥의 겉넓이 계산:"<< re << endl <<endl;
    }
    else if(a==5){
        cout << "반지름 입력: ";
        cin >> b;
        cout <<endl<< "높이 입력: ";
        cin >> c;
        
        Cone cone;
        cone.radius = b;
        cone.high = c;
        double re = cone.getVolume();
        cout <<" 원뿔의 부피 계산:"<< re <<endl <<endl;
    }
    else if(a==6){
        cout << "반지름 입력: ";
        cin >> b;
        cout <<endl<< "높이 입력: ";
        cin >> c;
        
        Sphere sphere;
        sphere.radius = b;
        sphere.high = c;
        double re = sphere.getVolume();
        cout <<" 구의 부피 계산 :"<< re <<endl<<endl;
    }
    else if(a==7){
        cout << "반지름 입력: ";
        cin >> b;
        cout <<endl<< "높이 입력: ";
        cin >> c;
        
        Sphere sphere;
        sphere.radius = b;
        sphere.high = c;
        double re = sphere.getWidth();
        cout <<" 구의 겉넓이 계산 :"<< re <<endl<<endl;
   
    }
    else if(a==8){
        cout << "프로그램을 종료합니다.";
    }
    
}
