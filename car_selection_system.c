#include <stdio.h>

int main() {
    int manufacturer_choice, car_choice, engine_choice, model_choice, color_choice;
    int total_price = 0;
    int base_price = 0;

    
    // Engine prices
    int engine_prices[3][2] = {
        {50000, 80000},    // Maruti: Petrol, Diesel
        {60000, 90000},    // Hyundai: Petrol, Diesel  
        {70000, 100000}    // Tata: Petrol, Diesel
    };

    // Model options and their prices 
    int model_prices[3][2] = {
        {30000, 50000},    // Maruti: Basic, Advanced
        {40000, 60000},    // Hyundai: Basic, Advanced
        {35000, 55000}     // Tata: Basic, Advanced
    };

    // Color options and their prices 
    int color_prices[3][2] = {
        {5000, 8000},      // Maruti: Standard, Metallic
        {6000, 9000},      // Hyundai: Standard, Metallic
        {5500, 8500}       // Tata: Standard, Metallic
    };

    // Base car prices 
    int car_base_prices[3][2] = {
        {400000, 600000},  // Maruti: Swift, Baleno
        {500000, 700000},  // Hyundai: i10, i20
        {450000, 650000}   // Tata: Tiago, Altroz
    };
    printf("    CAR SELECTION SYSTEM\n");
    printf("Select Car Manufacturer:\n");
    printf("1. Maruti Suzuki\n");
    printf("2. Hyundai\n");
    printf("3. Tata Motors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &manufacturer_choice);

    if (manufacturer_choice < 1 || manufacturer_choice > 3) {
        printf("Invalid manufacturer choice!\n");
        return 1;
    }

    switch(manufacturer_choice) {
        case 1:
            printf("MARUTI SUZUKI CARS\n");
            printf("1. Swift (Base Price: Rs. %d)\n", car_base_prices[0][0]);
            printf("2. Baleno (Base Price: Rs. %d)\n", car_base_prices[0][1]);
            printf("Select car (1-2): ");
            scanf("%d", &car_choice);
            if (car_choice == 1 || car_choice == 2) {
                base_price = car_base_prices[0][car_choice-1];
            } else {
                printf("Invalid car choice!\n");
                return 1;
            }
            break;

        case 2:
            printf(" HYUNDAI CARS \n");
            printf("1. i10 (Base Price: Rs. %d)\n", car_base_prices[1][0]);
            printf("2. i20 (Base Price: Rs. %d)\n", car_base_prices[1][1]);
            printf("Select car (1-2): ");
            scanf("%d", &car_choice);
            if (car_choice == 1 || car_choice == 2) {
                base_price = car_base_prices[1][car_choice-1];
            } else {
                printf("Invalid car choice!\n");
                return 1;
            }
            break;

        case 3:
            printf(" TATA MOTORS CARS \n");
            printf("1. Tiago (Base Price: Rs. %d)\n", car_base_prices[2][0]);
            printf("2. Altroz (Base Price: Rs. %d)\n", car_base_prices[2][1]);
            printf("Select car (1-2): ");
            scanf("%d", &car_choice);
            if (car_choice == 1 || car_choice == 2) {
                base_price = car_base_prices[2][car_choice-1];
            } else {
                printf("Invalid car choice!\n");
                return 1;
            }
            break;

        default:
            printf("Invalid manufacturer choice!\n");
            return 1;
    }

    total_price = base_price;

    // Engine selection menu
    printf(" ENGINE OPTIONS\n");
    printf("1. Petrol Engine (+Rs. %d)\n", engine_prices[manufacturer_choice-1][0]);
    printf("2. Diesel Engine (+Rs. %d)\n", engine_prices[manufacturer_choice-1][1]);
    printf("Select engine type (1-2): ");
    scanf("%d", &engine_choice);

    if (engine_choice == 1 || engine_choice == 2) {
        total_price += engine_prices[manufacturer_choice-1][engine_choice-1];
    } else {
        printf("Invalid engine choice!\n");
        return 1;
    }

    // Model selection menu
    printf("CAR MODEL OPTIONS\n");
    printf("1. Basic Model (+Rs. %d)\n", model_prices[manufacturer_choice-1][0]);
    printf("2. Advanced Model (+Rs. %d)\n", model_prices[manufacturer_choice-1][1]);
    printf("Select model type (1-2): ");
    scanf("%d", &model_choice);

    if (model_choice == 1 || model_choice == 2) {
        total_price += model_prices[manufacturer_choice-1][model_choice-1];
    } else {
        printf("Invalid model choice!\n");
        return 1;
    }

    // Color selection menu
    printf("COLOR OPTIONS\n");
    printf("1. Standard Color (+Rs. %d)\n", color_prices[manufacturer_choice-1][0]);
    printf("2. Metallic Color (+Rs. %d)\n", color_prices[manufacturer_choice-1][1]);
    printf("Select color type (1-2): ");
    scanf("%d", &color_choice);

    if (color_choice == 1 || color_choice == 2) {
        total_price += color_prices[manufacturer_choice-1][color_choice-1];
    } else {
        printf("Invalid color choice!\n");
        return 1;
    }

    // Display total price
    printf("YOUR CAR CONFIGURATION\n"); 
    // Display manufacturer name
    switch(manufacturer_choice) {
        case 1: printf("Manufacturer: Maruti Suzuki\n"); break;
        case 2: printf("Manufacturer: Hyundai\n"); break;
        case 3: printf("Manufacturer: Tata Motors\n"); break;
    }

    // Display car model
    switch(manufacturer_choice) {
        case 1:
            if (car_choice == 1) printf("Car Model: Swift\n");
            else printf("Car Model: Baleno\n");
            break;
        case 2:
            if (car_choice == 1) printf("Car Model: i10\n");
            else printf("Car Model: i20\n");
            break;
        case 3:
            if (car_choice == 1) printf("Car Model: Tiago\n");
            else printf("Car Model: Altroz\n");
            break;
    }

    // Display engine type
    if (engine_choice == 1) 
    {
        printf("Engine: Petrol\n");
    }    
    else 
    {
        printf("Engine: Diesel\n");
    }
    // Display model type
    if (model_choice == 1) printf("Model Type: Basic\n");
    else printf("Model Type: Advanced\n");

    // Display color type
    if (color_choice == 1) 
    {
    printf("Color: Standard\n");
    }
    else
    {
    printf("Color: Metallic\n");
    }
    printf("TOTAL PRICE: Rs. %d\n", total_price);
    printf("Thank you for using Car Selection System!\n");

    return 0;
}
