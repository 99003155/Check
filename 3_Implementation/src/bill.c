#include "bill.h"

int bill(int units)
{
    if (units <= 20)
    {
        return units * 3; //calculates total amount when total units consumed is less than 20
    }
    else if (units <= 30)
    {
        return units * 7; //calculates total amount when total units consumed is less than 30
    }
    else if (units <= 50)
    {
        return  units * 8.5; //calculates total amount when total units consumed is less than 50
    }
    else if (units <= 150)
    {
        return  units * 10; //calculates total amount when total units consumed is less than 150
    }
    else if (units <= 250)
    {
        return units * 11; //calculates total amount when total units consumed is less than 250
    }
    else if (units <= 400)
    {
        return units * 12; //calculates total amount when total units consumed is less than 400
    }
    else return units * 13; //calculates total amount when total units consumed is more than 400
}

