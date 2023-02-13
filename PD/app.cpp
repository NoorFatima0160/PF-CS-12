#include <iostream>
using namespace std;
// function Declartion strat
void mainMenu();

void boarder();
void signUp();
string signIn();
void clientMenu();
void list(int item);
void line();
void enterItem();
void viewPrice(int item);
void calculate();
void Delete(int item);
void update(int item);
void makeBill(int item);
void workers();
void viewWorkers(int user);

// function Declaration
// client Function strat
void listC(int item);
void viewPriceC(int item);
void makeBillC(int item);
void sendFeedback();
void mostprice(int item);
void leastPriced(int item);
void userPassword(int user);
void searchItem(int item);

// client Function Ends
//  Data Structure strat

string names[100];
int passwords[100];
string roles[100];
string wName[100];
string wRole[100];
int wSalary[100];
string purchases[100];
string items[100];
int itemPrice[100];
int itemNo = 0;
int choice;
int count = 0;
int worker = 0;
int selection;
int menuNo;
string userName;
string clientFeedback;
int FeedbackNo = 0;

// Data Structure Ends
main() // main
{

    int option;

    char key = 'y';

    string isFind;
    system("cls");

    boarder();
    while (true)
    {

        string isFind;
        cout << "1. Sign in" << endl;
        cout << "2. Sign up" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter option :";
        cin >> option;

        if (option == 1)
        {
            isFind = signIn();
            if (isFind == "Admin")
            {
                line();
                mainMenu();
            }
            else if (isFind == "client")
            {
                clientMenu();
            }
            else
            {

                cout << "invalid Input" << endl;
            }
        }
        else if (option == 2)
        {
            line();
            signUp();
        }

        else if (option == 3)
        {
            break;
        }

        continue;
    }
}

void boarder()
{
    system("cls");
    cout << "********************************************************" << endl;
    cout << "***     Stationary Shop Management System            ***" << endl;
    cout << "********************************************************" << endl;
}
void line()
{
    cout << "********************************************************" << endl;
}
void signUp() // signup
{
    if (count < 100)
    {
        cout << "Enter userName : ";
        cin >> names[count];
        cout << "Enter password : ";
        cin >> passwords[count];
        cout << "Enter role : ";
        cin >> roles[count];
        cout << "Sign in sucessfully" << endl;
        count++;
    }
    else
        cout << "no more space" << endl;
}
string signIn() // signIn
{
    system("cls");
    boarder();
    string userName;

    int userpassword;
    bool isFound = false;

    cout << "Enter username : ";
    cin >> userName;
    cout << "Enter password : ";
    cin >> userpassword;

    for (int i = 0; i < count; i++)
    {
        if (names[i] == userName && passwords[i] == userpassword)
        {
            return roles[i];
        }
    }

    return "wrong";
}
// Admin Functional Requirement strat
void list(int item)
{
    system("cls");
    boarder();
    if (item >= 0)
    {
        cout << "items"
             << "\t"
             << "itemPrice" << endl;
        for (int i = 0; i < item; i++)
        {

            cout << items[i] << "\t" << itemPrice[i] << endl;
        }
    }
    else
    {
        cout << "item not found" << endl;
    }
    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        mainMenu();
    else if (menuNo == 2)
        main();
}

void enterItem(int item)
{
    system("cls");
    boarder();

    cout << "Enter name of item : ";
    cin >> items[itemNo];
    cout << "Enter price of item : ";
    cin >> itemPrice[itemNo];
    itemNo++;
    cout << " Item entered" << endl;
    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        mainMenu();
    else if (menuNo == 2)
        main();
}
void viewPrice(int item)
{
    int n = -1;
    system("cls");
    boarder();
    string itemFind;
    cout << "Enter name of item : ";
    cin >> itemFind;
    for (int i = 0; i < item; i++)
    {
        if (items[i] == itemFind)
        {
            n = i;
        }
    }
    if (n != -1)
    {
        cout << "Price of " << items[n] << " is : " << itemPrice[n] << endl;
    }
    else
    {
        cout << "Item not found" << endl;
    }

    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        mainMenu();
    else if (menuNo == 2)
        main();
}

void calculate()
{
    system("cls");
    boarder();
    int total;
    int sale;
    cout << "Enter total price of items : ";
    cin >> total;
    cout << "Enter price of sale items: ";
    cin >> sale;
    if (sale > total)
    {
        cout << "your profit is : " << sale - total << endl;
    }
    else if (sale < total)
    {
        cout << "your loss is : " << total - sale << endl;
    }
    else
    {
        cout << "You have no profit or loss" << endl;
    }

    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        mainMenu();
    else if (menuNo == 2)
        main();
}

void Delete(int item)
{
    int n = -1;
    system("cls");
    boarder();
    string itemFind;
    cout << "Enter name of item you want to delete : ";
    cin >> itemFind;
    for (int i = 0; i < item; i++)
    {
        if (items[i] == itemFind)
        {
            n = i;
        }
    }
    if (n != -1)
    {
        items[n] = '0';
        itemPrice[n] = 0;
        cout << "Item deleted" << endl;
    }
    else
    {
        cout << "Item not found" << endl;
    }

    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        mainMenu();
    else if (menuNo == 2)
        main();
}

void update(int item)
{
    int n = -1;
    system("cls");
    boarder();
    string itemFind;
    string updateItem;
    int updatePrice;
    cout << "Enter name of item you want to update : ";
    cin >> itemFind;
    cout << "Enter name of item you want to update with : ";
    cin >> updateItem;
    cout << "Enter price of updated item : ";
    cin >> updatePrice;
    for (int i = 0; i < item; i++)
    {
        if (items[i] == itemFind)
        {
            n = i;
        }
    }
    if (n != -1)
    {
        items[n] = updateItem;
        itemPrice[n] = updatePrice;
        cout << "Item updated" << endl;
    }
    else
    {
        cout << "Item not found" << endl;
    }

    mainMenu();
}
void makeBill(int item)
{
    int index;
    int bill;
    int sum = 0;
    system("cls");
    boarder();
    cout << "Enter total no of item : ";
    cin >> index;
    string element[index];
    int number[index];
    if (index <= item)
    {

        for (int i = 0; i < index; i++)
        {
            cout << "Enter " << i + 1 << " item : ";
            cin >> element[i];
            cout << "Enter no of " << i + 1 << " item : ";
            cin >> number[i];
        }
        for (int i = 0; i < index; i++)
        {
            for (int j = 0; j < item; j++)
            {
                if (element[i] == items[j])
                {
                    bill = itemPrice[j];
                    bill = bill * number[i];
                    sum = sum + bill;
                }
            }
        }
        cout << "Your total Bill : " << sum << endl;
    }
    else
        cout << "more items then available" << endl;
    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        mainMenu();
    else if (menuNo == 2)
        main();
}

void workers()
{
    system("cls");
    boarder();

    cout << "Enter name of worker : ";
    cin >> wName[worker];
    cout << "Enter salary of worker : ";
    cin >> wSalary[worker];
    cout << "Enter role of worker : ";
    cin >> wRole[worker];

    worker++;
    cout << " Worker entered" << endl;

    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        mainMenu();
    else if (menuNo == 2)
        main();
}
void viewWorkers(int workNo)
{
    system("cls");
    boarder();
    if (workNo >= 0)
    {
        cout << "Name "
             << "\t"
             << "Salary "
             << "\t"
             << "Role " << endl;
        for (int i = 0; i < workNo; i++)
        {

            cout << wName[i] << "\t" << wSalary[i] << "\t" << wRole[i] << endl;
        }
    }
    else
    {
        cout << "Worker not found";
    }

    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        mainMenu();
    else if (menuNo == 2)
        main();
}

void viewCustomers(int user)
{
    system("cls");
    boarder();
    if (user >= 0)
    {
        cout << "Name "

             << "\t"
             << "Role " << endl;
        for (int i = 0; i < user; i++)
        {

            cout << names[i] << "\t" << roles[i] << endl;
        }
    }
    else
    {
        cout << "Worker not found";
    }

    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        mainMenu();
    else if (menuNo == 2)
        main();
}

void viewFeedback()
{
    system("cls");
    boarder();
    if (FeedbackNo == 1)
    {
        cout << "Feedback of user :" << userName << endl;
        cout <<"Feedback : "<< clientFeedback<<endl;
    }
    else
    {
        cout << " No Feedback yet" << endl;
    }

    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        mainMenu();
    else if (menuNo == 2)
        main();
}

void mainMenu()
{

    system("cls");
    boarder();
    cout << "1. list of all items" << endl;
    cout << "2. Enter new items" << endl;
    cout << "3. View price of an item" << endl;
    cout << "4. Calculate profit or loss" << endl;
    cout << "5. Delete an item" << endl;
    cout << "6. Update an item" << endl;
    cout << "7. Make Bill " << endl;
    cout << "8. Enter worker " << endl;
    cout << "9. View record of workers " << endl;
    cout << "10. View all customers " << endl;
    cout << "11. View feedback  " << endl;
    cout << "12. Exist" << endl;
    cout << "Enter option : ";
    cin >> choice;
    if (choice == 1)
    {

        list(itemNo);
    }
    else if (choice == 2)
    {
        enterItem(itemNo);
    }
    else if (choice == 3)
    {
        viewPrice(itemNo);
    }
    else if (choice == 4)
    {
        calculate();
    }
    else if (choice == 5)
    {
        Delete(itemNo);
    }
    else if (choice == 6)
    {
        update(itemNo);
    }
    else if (choice == 7)
    {
        makeBill(itemNo);
    }
    else if (choice == 8)
    {
        workers();
    }
    else if (choice == 9)
    {
        viewWorkers(worker);
    }
    else if (choice == 10)
    {
        viewCustomers(count);
    }
     else if (choice == 11)
    {
        viewFeedback();
    }
    else if (choice == 12)
    {
        main();
    }
}
// Admin Functional Requirement ends
// client Functional Requirement strat
void listC(int item)
{
    system("cls");
    boarder();
    if (item >= 0)
    {
        cout << "items"
             << "\t"
             << "itemPrice" << endl;
        for (int i = 0; i < item; i++)
        {

            cout << items[i] << "\t" << itemPrice[i] << endl;
        }
    }
    else
    {
        cout << "item not found" << endl;
    }
    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        clientMenu();
    else if (menuNo == 2)
        main();
}

void searchItem(int item)
{
    int n = -1;
    system("cls");
    boarder();
    string itemFind;
    cout << "Enter name of item : ";
    cin >> itemFind;
    for (int i = 0; i < item; i++)
    {
        if (items[i] == itemFind)
        {
            n = i;
        }
    }
    if (n != -1)
    {
        cout << "Price of " << items[n] << " is : " << itemPrice[n] << endl;
    }
    else
    {
        cout << "Item not found" << endl;
    }

    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        clientMenu();
    else if (menuNo == 2)
        main();
}

void makeBillC(int item)

{
    int index;
    int bill;
    int sum = 0;
    system("cls");
    boarder();

    cout << "Enter total no of item : ";
    cin >> index;

    string element[index];

    int number[index];
    if (index <= item)
    {

        for (int i = 0; i < index; i++)
        {
            cout << "Enter " << i + 1 << " item : ";
            cin >> element[i];

            cout << "Enter no of " << i + 1 << " item : ";
            cin >> number[i];
        }
        for (int i = 0; i < index; i++)
        {
            for (int j = 0; j < item; j++)
            {
                if (element[i] == items[j])
                {
                    bill = itemPrice[j];
                    bill = bill * number[i];
                    sum = sum + bill;
                }
            }
        }
        cout << "Your total Bill : " << sum << endl;
    }
    else
    {
        cout << "more items then available" << endl;
    }
    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        clientMenu();
    else if (menuNo == 2)
        main();
}

void sendFeedback()
{
     system("cls");
    boarder();
    FeedbackNo++;
    cout << "Enter username : ";
    cin >> userName;
    cout << "Enter Feedback : " << endl;
    cin.ignore();
    getline(cin, clientFeedback);
    cout << "Feedback sended" << endl;

    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        clientMenu();
    else if (menuNo == 2)
        main();
}

void mostprice(int item)
{
    int n = -1;
    system("cls");
    boarder();
    if (item > 0)
    {

        for (int i = 0; i < item; i++)
        {
            if (itemPrice[i] > itemPrice[i - 1])
            {
                n = i;
            }
        }

        cout << "The most priced item is :" << items[n] << endl;
    }
    else
    {
        cout << "The most priced item is :" << items[item] << endl;
    }

    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        clientMenu();
    else if (menuNo == 2)
        main();
}

void leastPriced(int item)
{
    int n = -1;
    system("cls");
    boarder();
    if (item > 0)
    {

        for (int i = 0; i < item; i++)
        {
            if (itemPrice[i] < itemPrice[i - 1])
            {
                n = i;
            }
        }

        cout << "The least priced item is :" << items[n] << endl;
    }
    else
    {
        cout << "The least priced item is :" << items[item] << endl;
    }

    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        clientMenu();
    else if (menuNo == 2)
        main();
}

void userPassword(int user)
{

    int n = -1;
    system("cls");
    boarder();
    string clientName;
    string updateName;
    int clientPassword;
    int updatePassword;
    cout << "Enter your userName : ";
    cin >> clientName;
    cout << "Enter your previous password: ";
    cin >> clientPassword;

    for (int i = 0; i < user; i++)
    {
        if (names[i] == clientName && passwords[i] == clientPassword)
        {

            n = i;
            cout << "Enter username you want to update with : ";
            cin >> updateName;
            cout << "Enter new password : ";
            cin >> updatePassword;
        }
    }
    if (n != -1)
    {
        names[n] = updateName;
        passwords[n] = updatePassword;
        cout << "password updated" << endl;
    }
    else
    {
        cout << "User not found" << endl;
    }

    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        clientMenu();
    else if (menuNo == 2)
        main();
}

void viewPriceC(int item)
{
    int n = -1;
    system("cls");
    boarder();
    if (item >= 0)
    {
        for (int i = 0; i < item; i++)
        {

            cout << "Price of " << items[i] << " is : " << itemPrice[i] << endl;
        }
    }
    else
    {
        cout << " No item found" << endl;
    }
    line();
    cout << "1. Return to main menu" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter a option : ";
    cin >> menuNo;
    if (menuNo == 1)
        clientMenu();
    else if (menuNo == 2)
        main();
}

// client Functional Requirement end
void clientMenu()
{
    system("cls");
    boarder();
    cout << "1. View list of all available items" << endl;
    cout << "2. Search an item" << endl;
    cout << "3. Calculate bill" << endl;
    cout << "4. Send Feedback" << endl;
    cout << "5. Show most priced item" << endl;
    cout << "6. Show least priced item" << endl;
    cout << "7. Change Password" << endl;
    cout << "8. View price of all available items" << endl;

    cout << "9. Exit" << endl;

    cout << "Enter your choice : ";
    cin >> selection;

    if (selection == 1)
    {
        listC(itemNo);
    }
    else if (selection == 2)
    {
        searchItem(itemNo);
    }
    else if (selection == 3)
    {
        makeBillC(itemNo);
    }
    else if (selection == 4)
    {
        sendFeedback();
    }
    else if (selection == 5)
    {
        mostprice(itemNo);
    }
    else if (selection == 6)
    {
        leastPriced(itemNo);
    }
    else if (selection == 7)
    {
        userPassword(count);
    }
    else if (selection == 8)
    {
        viewPriceC(itemNo);
    }
    else if (selection == 9)
    {
        main();
    }
}