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

    // PRODUCT CATALOG INTERFACE
    cout << "\n";
    cout << "==================================================\n";
    cout << "               CATALOG PRODUCT LIST               \n";
    cout << "==================================================\n";

    switch (category) {
        case 1:
            cout << " ID | Item Description           | Price    \n";
            cout << "----|----------------------------|----------\n";
            cout << " 1  | Mechanical Keyboard        | RM45.50  \n";
            cout << " 2  | Wireless Earbuds           | RM29.00  \n";
            cout << " 3  | LED Ring Light             | RM35.00  \n";
            cout << " 4  | Desktop Phone Stand        | RM18.50  \n";
            cout << " 5  | 10,000mAh Power Bank       | RM55.00  \n";
            cout << "==================================================\n";
            break;

        case 2:
            cout << " ID | Item Description           | Price    \n";
            cout << "----|----------------------------|----------\n";
            cout << " 1  | Velvet Lip Tint            | RM12.00  \n";
            cout << " 2  | Oversized Hoodie           | RM35.00  \n";
            cout << " 3  | Cotton Graphic Tee         | RM25.00  \n";
            cout << " 4  | Minimalist Crossbody       | RM28.00  \n";
            cout << " 5  | Corduroy Bucket Hat        | RM15.00  \n";
            cout << "==================================================\n";
            break;

        case 3:
            cout << " ID | Item Description           | Price    \n";
            cout << "----|----------------------------|----------\n";
            cout << " 1  | Spicy Fire Ramen           | RM15.50  \n";
            cout << " 2  | Assorted Jelly Candy       | RM8.00   \n";
            cout << " 3  | DIY Boba Tea Kit           | RM22.00  \n";
            cout << " 4  | Dried Mango Pack           | RM10.50  \n";
            cout << " 5  | Instant Tteokbokki         | RM18.00  \n";
            cout << "==================================================\n";
            break;
    }

    // Validate product selection
    while (true) {
        cout << " Enter product ID to buy (1-5): ";
        cin >> product;

        if (cin.fail() || product < 1 || product > 5) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " [ERROR] Invalid product ID. Please select a valid ID (1-5).\n";
        } else {
            break;
        }
    }

    // Assign product name and price
    if (category == 1) {
        if (product == 1) { itemName = "Mechanical Keyboard"; price = 45.50; }
        else if (product == 2) { itemName = "Wireless Earbuds"; price = 29.00; }
        else if (product == 3) { itemName = "LED Ring Light"; price = 35.00; }
        else if (product == 4) { itemName = "Desktop Phone Stand"; price = 18.50; }
        else if (product == 5) { itemName = "10,000mAh Power Bank"; price = 55.00; }
    }
    else if (category == 2) {
        if (product == 1) { itemName = "Velvet Lip Tint"; price = 12.00; }
        else if (product == 2) { itemName = "Oversized Hoodie"; price = 35.00; }
        else if (product == 3) { itemName = "Cotton Graphic Tee"; price = 25.00; }
        else if (product == 4) { itemName = "Minimalist Crossbody"; price = 28.00; }
        else if (product == 5) { itemName = "Corduroy Bucket Hat"; price = 15.00; }
    }
    else if (category == 3) {
        if (product == 1) { itemName = "Spicy Fire Ramen"; price = 15.50; }
        else if (product == 2) { itemName = "Assorted Jelly Candy"; price = 8.00; }
        else if (product == 3) { itemName = "DIY Boba Tea Kit"; price = 22.00; }
        else if (product == 4) { itemName = "Dried Mango Pack"; price = 10.50; }
        else if (product == 5) { itemName = "Instant Tteokbokki"; price = 18.00; }
    }

    cout << fixed << setprecision(2);
    cout << "\n Selected Item: " << itemName << " (RM" << price << ")\n";

    // Validate quantity
    while (true) {
        cout << " Enter desired quantity: ";
        cin >> quantity;

        if (cin.fail() || quantity <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " [ERROR] Quantity must be a positive integer (1 or more).\n";
        } else {
            break;
        }
    }

    cout << "\n Quantity selected: " << quantity << "\n";

    return 0;
}
