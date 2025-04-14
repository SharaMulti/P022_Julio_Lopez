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

        class Archer
        {
            private:
            string Name;
            double Stamina;
            int Arrows;
   
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
            //Stamina
            void setStamina(double Stamina1)
            {
               Stamina = Stamina1;
            }
            double getStamina()
            {
               return Stamina;
            }
            //Arrow amount
            void setArrows(int Arrows1)
            {
               Arrows = Arrows1;
            }
            int getArrows()
            {
               return Arrows;
            }
            //Run
            void TakeDistance(double Run)
            {
               Stamina = Stamina - Run;
            }
            //Fire
            void Fire(int Shoot)
            {
               Arrows = Arrows - Shoot;
            }
           
           };
     int main(){

        Fighter Player1;
        Archer Player2;


        Player1.setName("Alan ");
        Player1.setHP(25);
        Player1.setStrenght(10);


        cout << Player1.getName() << "\n";
        cout << Player1.getHP() << "\n";
        cout << Player1.getStrenght() << "\n";



        Player1.RecieveDamage(3.5);
        cout << "You took damage " << Player1.getHP() << "\n";

        Player1.Train(2);
        cout << "Your experience yeilds its fruits, youre now stronger " << Player1.getStrenght() << "\n";
        cout << "\n";

        Player2.setName("Luna ");
        Player2.setStamina(30);
        Player2.setArrows(20);


        cout << Player2.getName() << "\n";
        cout << Player2.getStamina() << "\n";
        cout << Player2.getArrows() << "\n";



        Player2.TakeDistance(5.5);
        cout << "You ran far to get a better position, your Stamina went down by " << Player2.getStamina() << "\n";

        Player2.Fire(1);
        cout << "You fired an arrow(s), you now have " << Player2.getArrows() << " arrows left";
        return 0;
       }