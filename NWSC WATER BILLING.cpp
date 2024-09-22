#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double accountBalance, waterUnits;
    double baseCost, totalCost, surcharge, vat, finalCost;
    cout << "Enter the amount loaded onto your account (in UGX): ";
    cin >> accountBalance;

    cout << "Enter the number of water units consumed: ";
    cin >> waterUnits;
    baseCost = 0;
    if (waterUnits <= 10) {
        baseCost = waterUnits * 150;
    } else if (waterUnits <= 20) {
        baseCost = (10 * 150) + ((waterUnits - 10) * 175);
    } else {
        baseCost = (10 * 150) + (10 * 175) + ((waterUnits - 20) * 200);
    }
    surcharge = baseCost * 0.15;
    totalCost = baseCost + surcharge;

    vat = totalCost * 0.18;
    finalCost = totalCost + vat;

    if (finalCost > accountBalance) {
        cout << "Error: Insufficient balance." << endl;
        cout << "Remaining balance before usage: " << fixed << setprecision(2) << accountBalance << " UGX" << endl;
    } else {
        accountBalance -= finalCost;
        cout << fixed << setprecision(2);
        cout << "Total cost before VAT: " << totalCost - vat << " UGX" << endl;
        cout << "Surcharge (15%): " << surcharge << " UGX" << endl;
        cout << "VAT (18%): " << vat << " UGX" << endl;
        cout << "Final cost: " << finalCost << " UGX" << endl;
        cout << "Remaining balance after usage: " << accountBalance << " UGX" << endl;
    }

    return 0;
}

