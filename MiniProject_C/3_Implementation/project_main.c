#include <calculator_operations.h>
#define VALID   (1) /* Status of the operation requested */
#define INVALID (0)
unsigned int calculator_operation = 0; /* Calculator operation requested by user*/
int calculator_operand1 = 0; /* Operands on which calculation is performed */
int calculator_operand2 = 0;
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, MODULE, NOT, AND, OR, NAND, NOR, XOR, XNOR, EXIT }; /* Valid operations */
void calculator_menu(void); /* Display the menu of operations supported */
int valid_operation(int operation); /* Verifies the requested operations validity */


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5.Module\n6. Not\n7. And\n8. Or\n9. Nand\n10. Nor\n11. Xor\n12. Xnor\n13. Exit");
    printf("\n\tEnter your choice\n");
   
     __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case MODULE:
            printf("\n %d % %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            module(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case NOT:
            printf("\n !(%d) = %d\nEnter to continue", 
            calculator_operand1, 
           // calculator_operand2,
            not(calculator_operand1);
            
            __fpurge(stdin);
            getchar();
            break;
        case AND:
            printf("\n %d & %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            and(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case OR:
            printf("\n %d | %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            or(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case NAND:
            printf("\n !(%d & %d) = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            nand(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case NOR:
            printf("\n !(%d | %d) = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            nor(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case XOR:
            printf("\n (%d ^  %d) = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            xor(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
         case XNOR:
            printf("\n !(%d ^  %d) = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            xnor(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case 13:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
