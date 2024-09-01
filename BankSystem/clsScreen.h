#pragma once
#include <iostream>
#include"clsUser.h"
#include"clsDate.h"
#include"Global.h"
 using namespace std;

class clsScreen
{
protected:
    static void _DrawScreenHeader(string Title, string SubTitle = "")
    {
        cout << "\t\t\t\t\t______________________________________";
        cout << "\n\n\t\t\t\t\t  " << Title;
       
        if (SubTitle != "")
        {
            cout << "\n\t\t\t\t\t  " << SubTitle;
        }
        cout << "\n\t\t\t\t\t______________________________________\n\n";
        cout << "\t\t\t\t\tUser: " << CurrentUser.UserName << endl;
        cout << "\t\t\t\t\tDate: " << clsDate::DateToString(clsDate()) << endl;
    }
  static  bool CheckAccessRights(clsUser::enPermissions Permission) {
        if (!CurrentUser.CheckAccessPermissions(Permission)) {
            cout << "\t\t\t\t\t________________________________________\n";
            cout << "\n\n\t\t\t\t\t  Access Denied! Contact Your Admin\n";
            cout << "\n\t\t\t\t\t________________________________________\n";
            return false;
        }
        else
            return true;
    }


};
