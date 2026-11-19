#include <iostream>

class Robot{
private:
    int id_robot;
    int sprawnosc;
    int bateria;
public:
    Robot(int id_robot, int sprawnosc, int bateria){
        this->id_robot = id_robot;
        this->sprawnosc = sprawnosc;
        this->bateria = bateria; 

        if(bateria < 0){
            this->bateria = 0;
        } else if (bateria > 100){
            this->bateria = 100;
        };
        if(sprawnosc < 0){
            this->sprawnosc = 0;
        } else if (sprawnosc > 100){
            this->sprawnosc = 100;
        };
    };

    void doladuj(int bateria){
        this->bateria = bateria;
        if(bateria < 0){
            this->bateria = 0;
        } else if (bateria > 100){
            this->bateria = 100;
        };
    };

    void napraw(int sprawnosc){
        this->sprawnosc = sprawnosc;
        if(sprawnosc < 0){
            this->sprawnosc = 0;
        } else if (sprawnosc > 100){
            this->sprawnosc = 100;
        };
    };

    void zmienId(int id_robot){
        this->id_robot = id_robot;
    };

    void pokazStatus(){
        std::cout << "Dane robota: \n";
        std::cout << "Id robota: " << id_robot << std::endl;
        std::cout << "Poziom baterii: " << bateria << std::endl;
        std::cout << "Poziom sprawnosci: " << sprawnosc << std::endl;
    };
};


int main(){
Robot robot1(5 , 114, 220);
Robot robot2(10 , -21 , -84);
Robot robot3(10 , 70 , 67);


Robot robot4(10 , 70 , 67);
Robot robot5(10 , 70 , 67);
robot4.doladuj(120);
robot4.napraw(140);
robot5.doladuj(120);
robot5.napraw(140);


Robot robot6(10 , 70 , 67);
Robot robot7(10 , 70 , 67);
robot6.doladuj(-20);
robot6.napraw(-200);
robot7.doladuj(-100);
robot7.napraw(-20);
Robot robot8(10,10,10);
robot8.napraw(50);
robot8.doladuj(67);

robot1.pokazStatus();
robot2.pokazStatus();
robot3.pokazStatus();
robot4.pokazStatus();
robot5.pokazStatus();
robot6.pokazStatus();
robot7.pokazStatus();
robot8.pokazStatus();


    return 0;
}