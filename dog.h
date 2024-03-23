#ifndef DOG_H
#define DOG_H
class Dog
{
    public:
    Dog();
    virtual ~Dog();
    void setTotalLegs(int total_legs);
    int getTotalLegs();
    private:
    int totalLegs;
};
#endif