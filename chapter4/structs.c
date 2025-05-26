#include <stdio.h>

struct car
{
    /* data */
    char *name;
    float price;
    int speed;
};

void set_price(struct car *c, int price)
{
    // c.price = new_price; // ERROR!! -- must dereference the pointer to get bac to the struct
    (*c).price = price;
    c->name = "Cyber Truck";  // the arrow operator helps to refer to fields in pointers to structs
}

int main(void) 
{
    struct car saturn = {.speed=175, .name="Saturn SL/2"};

    // Pass a pointer to this struct car, along with a new,
    // more realistic, price:
     set_price(&saturn, 799.99);

}
