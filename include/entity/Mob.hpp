#ifndef _MOB_HPP_
#define _MOB_HPP_

#include "entity/Entity.hpp"
#include "item/Item.hpp"

/**
* @file Mob.hpp
* @brief Fichier de classe Mob
*
* Fichier de classe Mob
*/

/**
* @class Mob
* @brief Classe Mob
*
* Cette classe abstraite hérite d'Entity. Elle sert de base à tout ce qui est "vivant" et que l'on peut blesser.
*/
class Mob : public Entity {
    protected:
        std::vector<Belonging*> belongings;
        int health;
        int power;
        int speed;
        bool move_through;
    public:
        Mob(Tile* tile);
        Mob(Tile* tile, int health, int power, int speed);
        ~Mob();

        /**
        * @brief Méthode de déplacement
        * @return un entier
        *
        * Méthode tour suivant pour Explosion
        */
        void move(const Direction dir);

        /**
        * @brief Getter de l'attribut de bypass des murs
        * @return un booléen
        *
        * Cette méthode renvoie vrai si le Mob peut passer à travers les murs, sinon faux
        */
        virtual bool canMoveThrough() const = 0;

        /**
        * @brief Getter de la vie
        * @return un entier
        *
        * Cette méthode renvoie la vie du Mob
        */
        int getHealth() const;

        /**
        * @brief Getter de la puissance
        * @return un entier
        *
        * Cette méthode renvoie la puissance du Mob
        */ 
        int getPower() const;

        /**
        * @brief Getter de la vitesse
        * @return un entier
        *
        * Cette méthode renvoie la vitesse du Mob
        */
        int getSpeed() const;

        /**
        * @brief Getter de l'attribut de bypass des murs
        * @return un entier
        *
        * Cette méthode renvoie vrai si le Mob peut passer à travers le mur, faux sinon
        */
        bool getMoveThrough() const;

        /**
        * @brief Getter des statistiques du Mob
        * @return un entier
        *
        * Renvoie les statistiques du Mob sous forme de std::string
        */
        virtual std::string getStr() const;

        /**
        * @brief Setter de la vie du Mob
        * @param health un entier
        *
        * Setter de la vie du mob
        */
        void setHealth(int health);

        /**
        * @brief Setter de la puissance du Mob
        * @param power un entier
        *
        * Setter de la puissance du mob
        */
        void setPower(int power);

        /**
        * @brief Setter de la vitesse du Mob
        * @param speed un entier
        *
        * Setter de la vitesse du mob
        */
        void setSpeed(int speed);

        /**
        * @brief Setter de l'attribut de bypass des murs
        * @param health un entier
        *
        * Setter de l'attribut de bypass des murs
        */
        void setMoveThrough(bool move_through);

        /**
        * @brief Méthode de réception d'une attaque.
        * @param mob un Mob&
        *
        * Cette méthode inflige la puissance du mob passé en paramètre en tant que dégâts au Mob présent
        */
        void getAttacked(const Mob& mob);

        /**
        * @brief Surchage de l'opérateur +=
        * @param item un objet Item
        *
        * Permet d'ajouter les statistiques d'un Item au Mob
        */
        virtual void operator+=(const Item& item);

        /**
        * @brief Surcharge de l'opérateur de flux sortant
        * @return un std::ostream&
        * @param out le flux
        * @param Mob le Mob à afficher
        * Renvoie un std::ostream&
        */
        friend std::ostream& operator<<(std::ostream& out, const Mob& mob);
};

#endif