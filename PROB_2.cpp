#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int demandChrg, lateChrg;
    double unpaidBal, gallons, waterBill, consumptionChrg;
    
    demandChrg = 35;
    lateChrg = 20;
    consumptionChrg = 1.10;
    
    cout << "Water Consumption\n\n";
    cout << "Enter number of gallons consumed recently and during the previous month: "; 
	cin >> gallons;
    cout << "Enter unpaid balance: P"; 
	cin >> unpaidBal;
    cout << ' ' << endl;
    
    if(unpaidBal>0)
    {
        waterBill = demandChrg + unpaidBal + lateChrg + (consumptionChrg * gallons);
        cout << "Total Water Bill: P" << waterBill << endl;
    }
    else
    {
        waterBill = demandChrg + (consumptionChrg * gallons);
        cout << "Total Water Bill: P" << waterBill << endl;
    }
    cout << ' ' << endl;
    cout << "Thank your for your transaction!\n";
    
    getch();
    return 0;
}
