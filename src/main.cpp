/* Amerike university
     Author: Julio López
     Date: 11/04/25
     Practice #: 22
     Description: This program shall ask the user to write a number to decrease the base stats of predetermined classes*/
 
     #include <iostream>
     using namespace std;
 
     class Fighter
     {
         private:
         string Name;
         double HP;
         int Strenght;

         public:
         //Name
         void setName(string Name1)
         {
            Name = Name1;
         }
         string getName()
         {
            return Name;
         }
         //HP
         void setHP(double HP1)
         {
            HP = HP1;
         }
         double getHP()
         {
            return HP;
         }
         //Strenght
         void setStrenght(int Strenght1)
         {
            Strenght = Strenght1;
         }
         int getStrenght()
         {
            return Strenght;
         }
         //Damage
         void RecieveDamage(double Damage)
         {
            HP = HP - Damage;
         }
         //Stronger
         void Train(int Training)
         {
            Strenght = Strenght + Training;
         }
        
        };
     int main(){

        Fighter Player1;


        Player1.setName("Alan ");
        Player1.setHP(25);


        cout << Player1.getName() << "\n";
        cout << Player1.getHP() << "\n";




        Player1.RecieveDamage(3.5);
        cout << "You took damage " << Player1.getHP();
        return 0;
       }