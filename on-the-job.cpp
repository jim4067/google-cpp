#include <iostream>

int salary_one(int weekly_sales, int working_hours);
int salary_two(int weekly_sales, int shoes_sold);

int main()
{

    int shoes_sold = 20;

    //the sales made that week
    int weekly_sales = 225 * shoes_sold;

    //the working hours
    const int working_hours = 8;

    //the constant weekly salary;
    const int weekly_salary = 600;

    int salary1 = salary_one(weekly_sales, working_hours);
    int salary2 = salary_two(weekly_sales, shoes_sold);

    std::cout << "the constant salary without commision is " << weekly_salary << std::endl;
    std::cout << "the salary for 10% commission and 7$ per hour is " << salary1 << std::endl;
    std::cout << "the salary for 20% commission and 20$ per shoe is " << salary2 << std::endl;

    return 0;
}

int salary_one(int weekly_sales, int working_hours)
{
    int commission_salary = 0.1 * weekly_sales;
    int per_hour_salary = 7 * working_hours;
    int total = commission_salary + per_hour_salary;

    return total;
}

int salary_two(int weekly_sales, int shoes_sold)
{
    int commission_salary = 0.2 * weekly_sales;
    int per_shoe_salary = shoes_sold * 20;
    int total = commission_salary + per_shoe_salary;

    return total;
}
//@jim4067
//This program calculates the which among the three methods of payment is best
//it assumes that you work for eight hours a day and the shoes sold that week are twenty pairs