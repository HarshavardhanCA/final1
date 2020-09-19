#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int module(int operand1, int operand2)
{
    return operand1 % operand2;
}

int not(int operand1)
{
    return !(operand1);
}

int and(int operand1, int operand2)
{
    return operand1 & operand2;
}

int or(int operand1, int operand2)
{
    return operand1 | operand2;
}

int nand(int operand1, int operand2)
{
    return !(operand1 & operand2);
}

int nor(int operand1, int operand2)
{
    return !(operand1 | operand2);
}

int xor(int operand1, int operand2)
{
    return((operand1&(~operand2))+((~operand1)&operand2));
  //  return (operand1 ^ operand2);
}

int xnor(int operand1, int operand2)
{
    return ((operand1&operand2)+((!operand1)&(!operand2)));
    //return !(operand1 ^ operand2);
}
