#include "Soldier.hpp"





    namespace WarGame {



        class FootCommander : public Soldier {
        public:

            explicit FootCommander(int teamNum): Soldier(150, 20, teamNum) {}



            void attack() override;
        };



    };
