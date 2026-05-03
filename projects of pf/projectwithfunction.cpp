#include <iostream>
#include <conio.h>
using namespace std;

//function protypes

void displayMainHeader();
bool adminLogin();
void adminMenu(string product[], int price[], int warranty[], float discount[],
               int deliveryCharges[], int &count);
void addItem(string product[], int price[], int warranty[], float discount[],
             int deliveryCharges[], int &count);
void removeItem(string product[], int price[], int warranty[], float discount[],
                int deliveryCharges[], int &count);
void viewAllProducts(string product[], int price[], int warranty[], float discount[],
                     int deliveryCharges[], int count);
void changeProductPrice(string product[], int price[], int count);

void customerMenu(string product[], int price[], float discount[],
                  int deliveryCharges[], int count);
void viewProductsForCustomer(string product[], int price[], int count);
void buyProduct(string product[], int price[], float discount[],
                int deliveryCharges[], int count, float &total_bill);

// main function

int main()
{
    string product[100] = {"mobile", "watch", "laptop", "Pc", "charger"};
    int price[100] = {50000, 6000, 150000, 300000, 800};
    int warranty[100] = {1, 1, 4, 5, 6};
    float discount[100] = {0.1, 0.05, 0.2, 0.3, 0.02};
    int deliveryCharges[100] = {150, 100, 200, 300, 50};

    int count = 5;
    int choice;
    
    char exit_program = 'u';
    while (exit_program != 'k')
    {
        displayMainHeader();

        cout << "1...Admin" << endl;
        cout << "2...Customer" << endl;
        cout << "3...Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "u selceted : " << choice << endl;

        if (choice == 1)
        {
            if (adminLogin())
            {
                adminMenu(product, price, warranty, discount, deliveryCharges, count);
            }
        }
        else if (choice == 2)
        {
            customerMenu(product, price, discount, deliveryCharges, count);
        }
        else if (choice == 3)
        {
            exit_program = 'k';
        }
        else
        {
            cout << "u entered wrong option :" << endl;
            getch();
        }
    }

    cout << "thank u for prefereing this plateform " << endl;
    return 0;
}

//functon definition

void displayMainHeader()
{
    system("cls");
    cout << "|**************************************|" << endl;
    cout << "|-------------------------------------|" << endl;
    cout << " |-----|ONLINE SHOPPING CENTER|-----|" << endl;
    cout << " |------------|MANAGEMENT|----------|" << endl;
    cout << "|--------------------------------------|" << endl;
    cout << "|**************************************|" << endl<<endl;

}

bool adminLogin()
{
    for (int i = 0; i < 3; i++)
    {
        system("cls");
        string name;
        int password;

        cout << "admin menu login attempt : " << i + 1 << endl;
        cout << "Enter admin name: ";
        cin >> name;
        cout << "Enter password: ";
        cin >> password;

        if (name == "usman" && password == 661)
        {
            cout << "successfully logged in ..." << endl;
            getch();
            return true;
        }
        else
        {
            cout << "wrong name or password !" << endl;
            getch();
        }
    }
    cout << " too many wrong attempt ....." << endl;
    getch();
    return false;
}

void adminMenu(string product[], int price[], int warranty[], float discount[],
               int deliveryCharges[], int &count)
{
    int admin_opt = 0;
    while (admin_opt != 5)
    {
        system("cls");
        cout << "--- WELCOME ADMIN ---" << endl;
        cout << "1..add item" << endl;
        cout << "2..remove item" << endl;
        cout << "3..view avalible product " << endl;
        cout << "4..change price" << endl;
        cout << "5..logout" << endl;

        cout << "Enter option: ";
        cin >> admin_opt;
        cout << " u choosed option .... " << admin_opt << endl;

        if (admin_opt == 1)
            addItem(product, price, warranty, discount, deliveryCharges, count);
        else if (admin_opt == 2)
            removeItem(product, price, warranty, discount, deliveryCharges, count);
        else if (admin_opt == 3)
            viewAllProducts(product, price, warranty, discount, deliveryCharges, count);
        else if (admin_opt == 4)
            changeProductPrice(product, price, count);
        else if (admin_opt == 5)
        {
            cout << "Logging out from admin..." << endl;
            getch();
        }
    }
}

void addItem(string product[], int price[], int warranty[], float discount[],
             int deliveryCharges[], int &count)
{
    system("cls");
    cout << "Enter product name: ";
    cin >> product[count];
    cout << "Enter price: ";
    cin >> price[count];
    cout << "Enter warranty:/year ";
    cin >> warranty[count];
    cout << "Enter discount: ";
    cin >> discount[count];
    cout << "Enter delivery charges: ";
    cin >> deliveryCharges[count];

    count++;
    cout << "item added successfully...!" << endl;
    getch();
}

void removeItem(string product[], int price[], int warranty[], float discount[],
                int deliveryCharges[], int &count)
{
    system("cls");
    string del;
    cout << "Enter the item name to remove: ";
    cin >> del;

    bool found = false;
    for (int i = 0; i < count; i++)
    {
        if (product[i] == del)
        {
            for (int j = i; j < count - 1; j++)
            {
                product[j] = product[j + 1];
                price[j] = price[j + 1];
                warranty[j] = warranty[j + 1];
                discount[j] = discount[j + 1];
                deliveryCharges[j] = deliveryCharges[j + 1];
            }
            count--;
            cout << "Item removed successfully!!!" << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "product not found " << endl;

    getch();
}

void viewAllProducts(string product[], int price[], int warranty[], float discount[],
                     int deliveryCharges[], int count)
{
    system("cls");
    cout << "Product\tPrice\tWarranty\tDiscount\tdeliveryCharges" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << product[i] << "\t" << price[i] << "\t" << warranty[i]
             << "\t" << discount[i] << "\t" << deliveryCharges[i] << endl;
    }
    getch();
}

void changeProductPrice(string product[], int price[], int count)
{
    system("cls");
    string target;
    cout << "Enter item name to change price: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < count; i++)
    {
        if (product[i] == target)
        {
            cout << "Enter new price: ";
            cin >> price[i];
            cout << "Price updated!" << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << " product not found " << endl;

    getch();
}

void customerMenu(string product[], int price[], float discount[],
                  int deliveryCharges[], int count)
{
    int cust_opt = 0;
    float total_bill = 0;

    while (cust_opt != 3)
    {
        system("cls");
        cout << "--- WELCOME TO THE SHOP ---" << endl;
        cout << "1..view Products" << endl;
        cout << "2..buy Item" << endl;
        cout << "3..Exit" << endl;
        cout << "select option: ";
        cin >> cust_opt;

        if (cust_opt == 1)
            viewProductsForCustomer(product, price, count);
        else if (cust_opt == 2)
            buyProduct(product, price, discount, deliveryCharges, count, total_bill);
        else if (cust_opt == 3)
        {
            cout << endl;
            cout << "--- BILL RECEIPT ---" << endl;
            cout << "Total amount to pay: " << total_bill << endl;
            cout << "Thank you for shopping!" << endl;
            getch();
        }
    }
}

void viewProductsForCustomer(string product[], int price[], int count)
{
    system("cls");
    cout << "Product\t\tPrice" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << product[i] << "\t\t" << price[i] << endl;
    }
    getch();
}

void buyProduct(string product[], int price[], float discount[],
                int deliveryCharges[], int count, float &total_bill)
{
    system("cls");
    string buy_name;
    int quantity;

    cout << "Enter product name: ";
    cin >> buy_name;
    cout << "Enter quantity: ";
    cin >> quantity;

    bool found = false;
    for (int i = 0; i < count; i++)
    {
        if (product[i] == buy_name)
        {
            float item_price = price[i] - (price[i] * discount[i]);
            total_bill = total_bill + (item_price * quantity) + deliveryCharges[i];
            cout << "ur total bill is : " << total_bill << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Product not found!" << endl;

    getch();
}