#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // data structures

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

        // main header of the code

        cout << "|**************************************|" << endl;
        cout << "|-------------------------------------|" << endl;
        cout << " |-----|ONLINE SHOPPING CENTER|-----|" << endl;
        cout << " |------------|MANAGEMENT|----------|" << endl;
        cout << "|--------------------------------------|" << endl;
        cout << "|**************************************|" << endl;

        cout << endl;

        cout << "1...Admin" << endl;
        cout << "2...Customer" << endl;
        cout << "3...Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cout << "u selceted : " << choice << endl;

        if (choice == 1)
        {
            // it is the admin menu

            int attempt = 0;
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
                    cout<<"press any key to ............"<<endl;
                    getch();

                    cout << "successfully logged in ..." << endl;
                    
                    system("cls");
                    int admin_opt = 0;
                    while (admin_opt != 1)
                    {

                        cout << endl;

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
                        {
                            // add items
                            system("cls");
                            cout << "Enter product name: ";
                            cin >> product[count];
                            cout << "Enter price: ";
                            cin >> price[count];
                            cout << "Enter warranty:/year ";
                            cin >> warranty[count];
                            cout << "Enter discount: ";
                            cin >> discount[count];
                            count++;
                            cout << "item added successfully...!" << endl;
                        }
                        else if (admin_opt == 2)
                        {
                            // remove items
                            system("cls");
                            string del;
                            cout << "Enter the item name to remove: ";
                            cin >> del;

                            bool found = false;
                            for (int i = 0; i < count; i++)
                            {
                                if (product[i] == del)
                                {
                                    // item deleted so shift back to previous position
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
                            {
                                cout << "product not found " << endl;
                            }
                        }
                        else if (admin_opt == 3)
                        {
                            // show items

                            cout << "Product\tPrice\tWarranty\tDiscount\tdeliveryCharges" << endl;
                            for (int i = 0; i < count; i++)
                            {
                                cout << product[i] << "\t" << price[i] << "\t" << warranty[i] << "\t" << discount[i] << "\t" << deliveryCharges[i] << endl;
                            }
                        }
                        else if (admin_opt == 4)
                        {
                            // change price
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
                            {
                                cout << " product not found " << endl;
                            }
                        }
                        else if (admin_opt == 5)
                        {
                            admin_opt = 1;
                            break;
                            // break and out from loop
                        }
                    }
                }
                else if (name != "usman")
                {
                    cout << "wrong name !" << endl;
                }
                else if (password != 661)
                {
                    cout << "wrong password !" << endl;
                }
                cout << " press any key to continue ......" << endl;

                getch();
            }
            cout << " too many wrong attempt ....." << endl;
        }
        else if (choice == 2)
        {
            // costomer menu
            int cust_opt = 0;
            float total_bill = 0;
            cout << endl;
            cout << "--- WELCOME TO THE SHOP ---" << endl;

            while (cust_opt != 3)
            {
                cout << "1..view Products" << endl;
                cout << "2..buy Item" << endl;
                cout << "3..Exit" << endl;
                cout << "select option: ";
                cin >> cust_opt;

                if (cust_opt == 1)
                {
                    // show the product to costomer
                    system("cls");
                    cout << "Product\t\tPrice" << endl;
                    for (int i = 0; i < count; i++)
                    {
                        cout << product[i] << "\t\t" << price[i] << endl;
                    }
                }
                else if (cust_opt == 2)
                {
                    // buying items
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
                            // Calculate price with discount

                            float item_price = price[i] - (price[i] * discount[i]);
                            total_bill = total_bill + (item_price * quantity) + deliveryCharges[i];
                            cout << "ur total bill is : " << total_bill << endl;
                            found = true;
                        }
                    }
                    if (!found)
                    {
                        cout << "Product not found!" << endl;
                    }
                }
                else if (cust_opt == 3)
                {
                    cout << endl;
                    cout << "--- BILL RECEIPT ---" << endl;
                    cout << "Total amount to pay: " << total_bill << endl;
                    cout << "Thank you for shopping!" << endl;
                }
            }
            cout << "press any key to continue ...." << endl;

            getch();
        }
        else if (choice == 3)
        {
            exit_program = 'k';
        }
        else
        {
            cout << "u entered wrong option :" << endl;
        }
    }

    cout << "thank u for prefereing this plateform " << endl;

    return 0;
}