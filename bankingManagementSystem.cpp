#include <iostream>
#include <cstring>

using namespace std;

class Bank
{
private:
    int totalPerson;
    struct Person
    {
        string name, id, address;
        int contact;
        float cash;
    } person[100];

public:
    Bank()
    {
        totalPerson = 0;
    }
    void choice();
    void personData();
    void show();
    void update();
    void search();
    void transaction();
    void del();
};

int main()
{
    Bank b;
    b.choice();
    return 0;
}

void Bank::choice()
{
    char ch;
    while (1)
    {
        cout << "\nPress the below number to perform the following operations\n";
        cout << "1. Create new Account\n";
        cout << "2. View customer list\n";
        cout << "3. Update information of existing account\n";
        cout << "4. Check the details of existing account\n";
        cout << "5. For Transaction\n";
        cout << "6. Remove existing account\n";
        cout << "7. Exit\n";
        cin >> ch;
        switch (ch)
        {
        case '1':
            personData();
            break;
        case '2':
            if (totalPerson == 0)
            {
                cout << "No data is entered\n";
            }
            else
            {
                show();
            }
            break;
        case '3':
            if (totalPerson == 0)
            {
                cout << "No data is entered\n";
            }
            else
            {
                update();
            }
            break;
        case '4':
            if (totalPerson == 0)
            {
                cout << "No data is entered\n";
            }
            else
            {
                search();
            }
            break;
        case '5':
            if (totalPerson == 0)
            {
                cout << "No data is entered\n";
            }
            else
            {
                transaction();
            }
            break;
        case '6':
            if (totalPerson == 0)
            {
                cout << "No data is entered\n";
            }
            else
            {
                del();
            }
            break;
        case '7':
            return;
        default:
            cout << "Invalid Input\n";
            break;
        }
    }
}

void Bank::personData()
{
    cout << "Enter the data of person " << totalPerson + 1 << endl;
    cout << "Enter the name: \n";
    cin >> person[totalPerson].name;
    cout << "Enter your ID: \n";
    cin >> person[totalPerson].id;
    cout << "Enter your Address: \n";
    cin >> person[totalPerson].address;
    cout << "Enter your contact details: \n";
    cin >> person[totalPerson].contact;
    cout << "Enter your total Amount: \n";
    cin >> person[totalPerson].cash;
    totalPerson++;
}

void Bank::show()
{
    for (int i = 0; i < totalPerson; i++)
    {
        cout << "Data of person " << i + 1 << endl;
        cout << "Name: " << person[i].name << endl;
        cout << "ID: " << person[i].id << endl;
        cout << "Address: " << person[i].address << endl;
        cout << "Contact: " << person[i].contact << endl;
        cout << "Cash: " << person[i].cash << endl;
    }
}

void Bank::update()
{
    string ID;
    cout << "Enter your ID: ";
    cin >> ID;
    for (int i = 0; i < totalPerson; i++)
    {
        if (ID == person[i].id)
        {
            cout << "Previous Data\n";
            cout << "Data of person " << i + 1 << endl;
            cout << "Name: " << person[i].name << endl;
            cout << "ID: " << person[i].id << endl;
            cout << "Address: " << person[i].address << endl;
            cout << "Contact: " << person[i].contact << endl;
            cout << "Cash: " << person[i].cash << endl;
            cout << "\nEnter your New Data\n";
            cout << "Enter the name: \n";
            cin >> person[i].name;
            cout << "Enter your ID: \n";
            cin >> person[i].id;
            cout << "Enter your Address: \n";
            cin >> person[i].address;
            cout << "Enter your contact details: \n";
            cin >> person[i].contact;
            cout << "Enter your total Amount: \n";
            cin >> person[i].cash;
            return;
        }
    }
    cout << "No such record found\n";
}

void Bank::search()
{
    string ID;
    cout << "Enter the ID to search your account\n";
    cin >> ID;
    for (int i = 0; i < totalPerson; i++)
    {
        if (ID == person[i].id)
        {
            cout << "Name: " << person[i].name << endl;
            cout << "ID: " << person[i].id << endl;
            cout << "Address: " << person[i].address << endl;
            cout << "Contact: " << person[i].contact << endl;
            cout << "Cash: " << person[i].cash << endl;
            return;
        }
    }
    cout << "No such record found\n";
}

void Bank::transaction()
{
    string ID;
    char ch;
    cout << "Enter the id to perform transaction\n";
    cin >> ID;

    for (int i = 0; i < totalPerson; i++)
    {
        if (ID == person[i].id)
        {
            cout << "Name: " << person[i].name << endl;
            cout << "ID: " << person[i].id << endl;
            cout << "Address: " << person[i].address << endl;
            cout << "Contact: " << person[i].contact << endl;
            cout << "\nExisting Cash: " << person[i].cash << endl;
            cout << "Press 1 to deposit\n";
            cout << "Press 2 to withdraw\n";
            cin >> ch;
            switch (ch)
            {
            case '1':
            {
                float CASH;
                cout << "How much cash you want to deposit?\n";
                cin >> CASH;
                person[i].cash += CASH;
                cout << "Your new cash is: " << person[i].cash << endl;
                return;
            }
            case '2':
            {
                float CASH;
                while (true)
                {
                    cout << "How much cash you want to withdraw?\n";
                    cin >> CASH;
                    if (CASH > person[i].cash)
                    {
                        cout << "Your existing cash is: " << person[i].cash << endl;
                    }
                    else
                    {
                        person[i].cash -= CASH;
                        cout << "Your new cash is: " << person[i].cash << endl;
                        return;
                    }
                }
                break;
            }
            default:
                cout << "Invalid Input" << endl;
                return;
            }
        }
    }
    cout << "No such record found\n";
}

void Bank::del()
{
    char ch;
    string ID;
    cout << "Press 1 to remove specific record\n";
    cout << "Press 2 to remove full record\n";
    cin >> ch;
    switch (ch)
    {
    case '1':
    {
        cout << "Enter the ID which you want to delete\n";
        cin >> ID;
        for (int i = 0; i < totalPerson; i++)
        {
            if (ID == person[i].id)
            {
                for (int j = i; j < totalPerson - 1; j++)
                {
                    person[j] = person[j + 1];
                }
                totalPerson--;
                cout << "Record deleted\n";
                return;
            }
        }
        cout << "No such record found\n";
        break;
    }
    case '2':
        totalPerson = 0;
        cout << "All records are deleted\n";
        break;
    default:
        cout << "Invalid Input" << endl;
        break;
    }
}
