/*
File name: main.cpp
Developer: Zacary Cast
Email:zcast@student.vvc.edu
Description: bank statement
*/


#include <iostream>
#include <string>
#include <vector>

class Transaction
{
public:
	Transaction();
	void read();
	int get_day();
	double get_amount();
	void print() const;
private:
	int day;
	double amount;
	std::string description;
};

Transaction::Transaction()
{
   day = 0;
   amount = 0.0;
}

void Transaction::read()
{
    std::cout << "Enter the day: " << std::endl;
    std::cin >> day;
    std::cout << "Enter the amount: " << std::endl;
    std::cin >> amount;
    std::cout << "Enter the description" << std::endl;
    std::cin.ignore();
    std::getline(std::cin,description);
}

void Transaction::print() const
{
    std::cout << "day:" << day << std::endl;
    std::cout << "amount:" << amount << std::endl;
    std::cout << "description:" << description << std::endl;
}

void print_transactions(const std::vector<Transaction> t)
{
    for(int i=0;i<t.size();i++)
        t[i].print();
}

const int MAX_DAY = 30;

class Statement
{
public:
   Statement();
   void read();
   void compute_balances();
   void print();
   double get_average_daily_balance();
   double get_minimum_daily_balance();
private:
   std::vector<Transaction> transactions;
   std::vector<double> daily_balances;
};

Statement::Statement()
{
  double get_average_daily_balance = 0.0;
  double get_minimum_daily_balance = 0.0;
  double initial_balance = 1143.24;
}

void Statement::read()
{
  
}

void Statement::compute_balances()
{
  
}

void Statement::print()
{
  
}

double Statement::get_average_daily_balance()
{
  
}

double Statement::get_minimum_daily_balance()
{
  
}

int main()
{
   std::vector<Transaction> transaction;
   bool more = true;
   while(more)
   {
       Transaction t;
       t.read();
       transaction.push_back(t);
       std::cout << "Enter another (Y/N)";
       char response;
       std::cin >> response;
       if(response != 'y' && response != 'Y')
         more = false;
   }
   print_transactions(transaction);
   Statement stat;
   stat.read();
   stat.print();
  
   return 0;
}
