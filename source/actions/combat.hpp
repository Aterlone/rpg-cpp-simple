#ifndef Combat_HPP
#define Combat_HPP

class Combat
{
    public:
        //For attacking, & is reference to location in register.
        void hit(UnitStats &attacker, UnitStats &defender);
};

#endif