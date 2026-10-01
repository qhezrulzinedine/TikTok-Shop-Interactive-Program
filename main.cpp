#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int category = 0;
    int product = 0;
    int quantity = 0;
    string promo;
    string itemName = "";
    double price = 0.0;

    // MAIN LANDING PAGE INTERFACE
    cout << "\n";
    cout << "**************************************************\n";
    cout << "*                 [ TIKTOK SHOP ]                *\n";
    cout << "*           LIVE STREAM SHOPPING HUB             *\n";
    cout << "**************************************************\n";
    cout << " [FLASH DEAL] Use code 'TIKTOK10' for 10% OFF!\n";
    cout << "--------------------------------------------------\n";
    cout << "                  MAIN CATEGORIES                 \n";
    cout << "--------------------------------------------------\n";
    cout << "  (1) Tech & Gadgets                              \n";
    cout << "  (2) Fashion & Beauty                            \n";
    cout << "  (3) Food & Snacks                               \n";
    cout << "--------------------------------------------------\n";

    // Validate category selection
    while (true) {
        cout << " Select main category (1-3): ";
        cin >> category;

        if (cin.fail() || category < 1 || category > 3) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " [ERROR] Invalid category selection. Please enter a number (1-3).\n\n";
        } else {
            break;
        }
    }

    return 0;
}
