/* 
 * File:   BasketList.h
 * Author: pike
 *
 * Created on September 26, 2015, 3:35 PM
 */

#ifndef BASKETLIST_H
#define	BASKETLIST_H

#include <cstdlib>
#include <iostream>

using namespace std;

const int MAXEGGS = 500;

class BasketList;  // needed for friend line below

class Basket
{
  private:    
    int egg_num;
    Basket* nextBasket;
    
  public:
    Basket(int, Basket*);
    int getEggs() const;
    Basket const* getNextBasket() const;

    friend class BasketList;  // gives BasketList access to egg_num and nextBasket
};


class BasketList
{
  private:
    Basket* head;

  public:
    BasketList ();
   
    void insertBasket (int);
    void makeBasketList ();
    void deleteBasket (int);
    void printBasketList ();
};

#endif	/* BASKETLIST_H */

