#include <iostream>
using namespace std;
class salesinfo {
private:
    int totalExpenses;
    int totalSales;
    int totalRevenue;
    int totalProducts;
public:
    salesinfo() : totalExpenses(0), totalSales(0), totalRevenue(0), totalProducts(0) {}
    friend class ownerCompany;
    void totalnums() {
        cout << "Enter total expenses: ";
        cin >> totalExpenses;
        cout << "Enter total sales value: ";
        cin >> totalSales;
        cout << "Enter total revenue: ";
        cin >> totalRevenue;
        cout << "Enter total products sold: ";
        cin >> totalProducts;
        cout << endl; }
};

class ownerCompany {
public:
    void calculatingnums(const salesinfo& outlet1, const salesinfo& outlet2) {
        int grandTotalExpenses = outlet1.totalExpenses + outlet2.totalExpenses;
        int grandTotalSales = outlet1.totalSales + outlet2.totalSales;
        int grandTotalRevenue = outlet1.totalRevenue + outlet2.totalRevenue;
        int grandTotalProducts = outlet1.totalProducts + outlet2.totalProducts;

        cout << " grand total expenses: " << grandTotalExpenses << endl;
        cout << " grand total sales value: " << grandTotalSales << endl;
        cout << " grand total revenue: " << grandTotalRevenue << endl;
        cout << " grand total products sold: " << grandTotalProducts << endl;
    }
};

int main() {
    salesinfo outlet1, outlet2;
    ownerCompany owner;
    cout << "what are the sales sales of first" << endl;
    outlet1.totalnums();
    cout << "what are the sales sales of second" << endl;
    outlet2.totalnums();
    owner.calculatingnums(outlet1, outlet2);
}
