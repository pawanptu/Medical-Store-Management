#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Medical
{
public:
       int id, price, quantity;
       string medicineName, Company, Mfg_Date, Exp_Date, info;
       void detailsofmedicine()
       {
              cout << "\t\nThese are the details of Medicine \n\n";
              cout << "\tName = " << medicineName << endl;
              cout << "\tId = " << id << endl;
              cout << "\tCompany = " << Company << endl;
              cout << "\tPrice of each = " << price << endl;
              cout << "\tAvailable Quantity = " << quantity << endl;
              cout << "\tMfg_Date = " << Mfg_Date << endl;
              cout << "\tExp_Date = " << Exp_Date << endl;
       }
       void default_details()
       {
              id = 0;
              price = 0;
              quantity = 0;
              Mfg_Date = "";
              Exp_Date = "";
              medicineName = "";
              Company = "";
              info = "";
       }
       void AddMedicineinStore(int number)
       {
              cout << "\t\nEnter Medicine Id : ";
              cin >> id;
              cout << "\tEnter Medicine Name : ";
              cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
              getline(cin, medicineName);
              cout << "\tEnter Company Name : ";
              getline(cin, Company);
              cout << "\tEnter Manufactured Date : ";
              getline(cin, Mfg_Date);
              cout << "\tEnter Expiry Date : ";
              getline(cin, Exp_Date);
              cout << "\tEnter Quantity : ";
              cin >> quantity;
              cout << "\tEnter Price of each item : ";
              cin >> price;
              info = "";
              cout << "\tMedicine with id " << id << " Added Successfully\n\n";
       }
       void PurchaseMedicine()
       {
              int c, n;
              if (id != 0)
              {
                     detailsofmedicine();
                     if (info == "")
                     {
                            cout << "\tMedicine Review/Info=Not Available : ";
                     }
                     else
                     {
                            cout << "\tMedicine Review/Info = " << info << endl;
                     }
                     cout << "\tDo you want to purchase"
                             " "
                          << medicineName << " If Yes Enter 1 else any"
                                             " other number : ";
                     cin >> c;
                     if (c == 1)
                     {
                            cout << "\tEnter Quantity to Purchase : ";
                            cin >> n;
                            if (n < quantity)
                            {
                                   cout << "\tTotal Price to be paid = " << n * price << endl<<endl;
                                   quantity = quantity - n;
                            }
                            else
                            {
                                   cout << "\tPlease Enter quantity below Available"
                                           " Quantity : ";
                            }
                     }
              }
       }
       void EnterInfoAboutMedicine()
       {
              int c = 0;
              if (id != 0)
              {
                     detailsofmedicine();
                     if (info != "")
                     {
                            cout << "\tReview Already Available!\t\n\nIf you want to Add a Review Enter 1 else Any other number : ";
                            cin >> c;
                     }
                     else
                     {
                            cout << "\tEnter your review : ";
                            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                            getline(cin, info);
                     }
                     if (c == 1)
                     {
                            string info1;
                            cout << "\tEnter your review : ";
                            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                            getline(cin, info1);
                            info = info + ", ";
                            info = info + info1;
                     }
              }
       }
       void StockOfMedicine()
       {
              if (id != 0)
              {
                     detailsofmedicine();
                     if (info != "")
                     {
                            cout << "\tReview or Info= " << info << endl;
                     }
                     else
                     {
                            cout << "\tReview or Info=Not Available \n";
                     }
              }
       }
};
class Medicine : public Medical
{
public:
       Medicine() {}
       Medicine(int Id, int Price, int Quantity, string mfg_date, string exp_date, string name, string company, string Info)
       {
              id = Id;
              price = Price;
              quantity = Quantity;
              Mfg_Date = mfg_date;
              Exp_Date = exp_date;
              medicineName = name;
              Company = company;
              info = Info;
       }
       void KnowInfoAboutMedicine()
       {
              if (id != 0)
              {
                     detailsofmedicine();
                     if (info != "")
                     {
                            cout << "\tReview or Info= " << info << endl;
                     }
                     else
                     {
                            cout << "\tReview or Info=Not Available\n";
                     }
              }
       }
       void DeleteMedicineStore()
       {
              default_details();
       }
       void ChangeMedicineDetails()
       {
              int choice, c;
              do
              {
                     cout << "\tEnter\n1 - Change Quantity\n2 - Change Price\n3 - Change Name\n4 - Change Company\n5 - Change Manufaturing Date\n6 - Change Expiry Date\n7 - Change Info\nAny other number to exit : ";
                     cin >> choice;
                     if (choice == 1)
                     {
                            int Quantity = 0;
                            cout << "\tEnter Quantity to be changed : ";
                            cin >> Quantity;
                            quantity = Quantity;
                            cout << "\tQuantity changed Successfully : ";
                     }
                     if (choice == 2)
                     {
                            int Price;
                            cout << "\tEnter Price to be changed : ";
                            cin >> Price;
                            price = Price;
                            printf("Price changed Successfully\n");
                     }
                     if (choice == 3)
                     {
                            string name;
                            cout << "\tEnter Name to be changed : ";
                            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                            getline(cin, name);
                            medicineName = name;
                            cout << "\tMedicine Name changed Successfully\n";
                     }
                     if (choice == 4)
                     {
                            string company;
                            cout << "\tEnter company to be changed : ";
                            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                            getline(cin, company);
                            Company = company;
                            cout << "\tCompany changed Successfully\n";
                     }
                     if (choice == 5)
                     {
                            string mfg;
                            cout << "\tEnter Manufacturing date to be"
                                    " changed : ";
                            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                            getline(cin, mfg);
                            Mfg_Date = mfg;
                            cout << "\tManufacturing Date changed"
                                    " Successfully\n";
                     }
                     if (choice == 6)
                     {
                            string exp;
                            cout << "\tEnter Expiry date to be changed : ";
                            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                            getline(cin, exp);
                            Exp_Date = exp;
                            cout << "\tExpiry Date changed Successfully\n";
                     }
                     if (choice == 7)
                     {
                            string Info;
                            cout << "\tEnter Info to be changed : ";
                            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                            getline(cin, Info);
                            info = Info;
                            cout << "\tInfo changed Successfully\n";
                     }
                     if (choice <= 0 && choice > 7)
                     {
                            cout << "\tEnter valid Choice\n";
                     }
                     cout << "\tEnter 2 to Change other Details Else any other number : ";
                     cin >> c;
              } while (c == 2);
       }
};

int main()
{
       Medicine m[100];
       int i, choice, number = 0, c;
       for (i = 0; i < 100; i++)
       {
              m[i].default_details();
       }
       m[0] = Medicine(1, 6, 30, "23/12/2020", "12/11/2024", "Paracetamol", "Modern Pharmaceuticals", "Good Medicine for Fever\n");

       do
       {
              cout << "\n\t\tMEDICAL STORE \n\n\t1 - Purchase Medicine\n\t2 - Enter Info/Review about a Medicine\n\t3 - Know Stock of Medicine in Store\n\t4 - Know Medicine Information\n\t5 - Add Medicine\n\t6 - Delete a Medicine\n\t7 - Change details of Medicine\n\n\tEnter your Choice : ";
              cin >> choice;
              switch (choice)
              {
              case 1:
              {
                     int check, i, flag = 0;
                     string name;
                     cout << "\n\tEnter 1 if you know ID else any other"
                             " number to enter Name of Medicine : ";
                     cin >> check;
                     if (check == 1)
                     {
                            int Id;
                            cout << "\tEnter Id to purchase Medicine : ";
                            cin >> Id;
                            for (i = 0; i <= number; i++)
                            {
                                   if (Id == m[i].id)
                                   {
                                          m[i].PurchaseMedicine();
                                          flag = 1;
                                   }
                            }
                            if (flag == 0)
                            {
                                   cout << "\tEntered id is wrong\n";
                            }
                     }
                     else
                     {
                            string name;
                            printf("Enter Name to search and Purchase\n");
                            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                            getline(cin, name);
                            for (i = 0; i <= number; i++)
                            {
                                   if (name == m[i].medicineName)
                                   {
                                          m[i].PurchaseMedicine();
                                          flag = 1;
                                   }
                            }
                            if (flag == 0)
                            {
                                   cout << "\tEntered name is wrong\n";
                            }
                     }
                     break;
              }
              case 2:
              {
                     int i, flag = 0;
                     string name;
                     cout << "\t\n\nEnter Name of the medicine you want to Review or include Info : ";
                     cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                     getline(cin, name);
                     for (i = 0; i <= number; i++)
                     {
                            if (name == m[i].medicineName)
                            {
                                   m[i].EnterInfoAboutMedicine();
                                   flag = 1;
                            }
                     }
                     if (flag == 0)
                     {
                            cout << "\tEntered name is not found\n";
                     }
                     break;
              }
              case 3:
              {
                     int i;
                     if (number >= 0)
                     {
                            cout << "\tAll Available Items are\n";
                            for (i = 0; i <= number; i++)
                            {
                                   m[i].StockOfMedicine();
                            }
                     }
                     else
                     {
                            cout << "\tNo Items or Medicines Available\n";
                     }

                     break;
              }
              case 4:
              {
                     int i, flag = 0;
                     string name;
                     cout << "\tEnter Name of the medicine you want to"
                             " know Review or Info : ";
                     cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                     getline(cin, name);
                     for (i = 0; i <= number; i++)
                     {
                            if (name == m[i].medicineName)
                            {
                                   m[i].KnowInfoAboutMedicine();
                                   flag = 1;
                            }
                     }
                     if (flag == 0)
                     {
                            cout << "\tEntered name is not found \n";
                     }
                     break;
              }
              case 5:
              {
                     ++number;
                     m[number].AddMedicineinStore(number);
                     break;
              }
              case 6:
              {
                     int Id, i, flag = 0;
                     cout << "\tEnter Id to be deleted  : ";
                     cin >> Id;
                     for (i = 0; i <= number; i++)
                     {
                            if (Id == m[i].id)
                            {
                                   m[i].DeleteMedicineStore();
                                   flag = 1;
                            }
                     }
                     if (flag == 0)
                     {
                            cout << "\tEntered id is not found\n";
                     }
                     if (flag == 1)
                     {
                            cout << "\tMedicine with " << Id << " is Deleted"
                                                              " Successfully\n";
                     }
                     break;
              }
              case 7:
              {
                     int Id, i;
                     cout << "\tEnter id to change Details  : ";
                     cin >> Id;
                     for (i = 0; i <= number; i++)
                     {
                            if ((Id == m[i].id) && (m[i].id != 0))
                            {
                                   m[i].ChangeMedicineDetails();
                            }
                     }
                     break;
              }
              }
              cout << "\t\nTo Continue with other Options Enter 1"
                      " Else any other number  : ";
              cin >> c;
       } while (c == 1);
       return 0;
}