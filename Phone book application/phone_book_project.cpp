#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int a = 0;
void intro()
{
  system("color 0E");
  cout << "\tPhone";
  Sleep(500);
  cout << " Book";
  Sleep(600);
  cout << " App";
  cout << "\n\n\n";
  Sleep(1000);
  cout << "\t  Loading"
       << "\n\n";
  Sleep(500);
  cout << "  ";
  char x = 219;
  for (int i = 0; i < 25; i++)
  {
    cout << x;
    if (i < 10)
      Sleep(150);
    if (i > 10 && i < 20)
      Sleep(90);
    if (i > 10)
      Sleep(25);
  }
  Sleep(500);
  system("cls");
}
int menu()
{
  //  system("cls");
  system("color 0D");
  cout << "-------------------------\n";
  cout << "|\t  Menu \t\t|\n";
  cout << "-------------------------\n";
  cout << "|\t\t\t|\n";
  cout << "| 1. Add Contact        |\n";
  cout << "| 2. Display Contacts   |\n";
  cout << "| 3. Search             |\n";
  cout << "| 4. Update             |\n";
  cout << "| 5. Delete             |\n";
  cout << "| 6. Total Contacts     |\n";
  cout << "|\t\t\t|\n";
  cout << "-------------------------\n";
  cout << "|\t\t Exit(0)|\n";
  cout << "-------------------------\n";
  int c;
  cout << "\nEnter Your Choice : ";
  cin >> c;
  system("cls");
  return c;
}
int main()
{
  system("cls");
  intro();
  int count = 0;
  string name[100];
  string ph_no[100];
  int choice = menu();
  do
  {
    if (choice == 1)
    {
      cout << "Name :";
      cin >> name[a];
      cout << "Phone Number :";
      cin >> ph_no[a];
      a++;
      count++;
      cout << "\n\t\tDetails added succesfully";
      cout << "\n\n\n";
      Sleep(2500);
      system("cls");
    }
    else if (choice == 2)
    {
      int c=0;
      for (int i = 0; i < 100; i++)
      {
        if (name[i] != "\0")
        {
          cout << "Name :" << name[i] << "  "
               << "Phone Number :" << ph_no[i] << endl;
               c=1;
        }
      }
      if(c==0)
         cout<<"\t\tNo details in the list";
      cout << "\n\n";
      Sleep(2000);
    }
    else if (choice == 3)
    {
      string tem;
      int c = 0;
      cout << "Enter the name or number you want to search :";
      cin >> tem;
      for (int i = 0; i < 100; i++)
      {
        if (tem == ph_no[i] || tem == name[i])
        {
          cout << "Detail is found\n";
          cout << "Name :" << name[i] << "  "
               << "Phone Number :" << ph_no[i] << endl;
          c = 1;
          break;
        }
      }
      if (c == 0)
      {
        cout << "\n\t\tSorry, no detail matched!!";
      }
      cout << "\n\n\n";
      Sleep(2000);
    }
    else if (choice == 4)
    {
      string tem, tem1, tem2;
      int c = 0, d;
      cout << "Enter the name or number you want to update :";
      cin >> tem;
      for (int i = 0; i < 100; i++)
      {
        if (tem == ph_no[i] || tem == name[i])
        {
          cout << "Name :" << name[i] << "  "
               << "Phone Number :" << ph_no[i] << endl;
          cout << "\n\nEnter\n\t1. Update name\n\t2. Update number\n";
          cin >> d;
          if (d == 1)
          {
            cout << "Enter the new name :";
            cin >> tem1;
            name[i] = tem1;
            cout << "\n\t\tUpdated successfully!!";
          }
          else if (d == 2)
          {
            cout << "Enter the new number :";
            cin >> tem2;
            ph_no[i] = tem2;
            cout << "\n\t\tUpdated successfully!!";
          }
          else
          {
            cout << "\t\tSorry, you have invalid option";
          }
          c = 1;
          break;
        }
      }
      if (c == 0)
      {
        cout << "\n\t\tSorry, no detail matched!!";
      }
      cout << "\n\n\n";
      Sleep(2000);
      system("cls");
    }
    else if (choice == 5)
    {
      int ch;
      cout << "\t\t1. Delete\n\t\t2. Delete all\n\n";
      cin >> ch;
      if (ch == 1)
      {
        string tem;
        int c = 0;
        cout << "Enter the name or number you want to Delete :";
        cin >> tem;
        for (int i = 0; i < 100; i++)
        {
          if (tem == ph_no[i] || tem == name[i])
          {
            cout << "Deleted successfully\n";
            cout << "Name :" << name[i] << "  "
                 << "Phone Number :" << ph_no[i] << endl;
            ph_no[i] = "\0";
            name[i] = "\0";
            count--;
            c = 1;
            break;
          }
        }
        if (c == 0)
        {
          cout << "\n\t\tSorry, no detail matched!!";
        }
      }
      else if (ch == 2)
      {
        char ch;
        cout << "\t\tAre you sure ?? enter y :";
        cin >> ch;
        if (ch == 'y')
        {
          cout << "\t\tContact list deleted successfully";
          for (int i = 0; i < a; i++)
          {
            name[i] = "\0";
            ph_no[i] = "\0";
          }
          a = 0;
          count = 0;
        }
      }
      cout << "\n\n\n";
      Sleep(2000);
      system("cls");
    }
    else if (choice == 6)
    {
      cout << "Total number of contact are :" << count;
      cout << "\n\n\n";
      Sleep(2000);
      system("cls");
    }
    else
    {
      cout << "\n\n\t\tSorry,You have entered wrong choice.....";
      cout << "\n\n";
      Sleep(1000);
    }
    choice = menu();
  } while (choice != 0);
}
