#include <iostream>
using namespace std;

class Sales_office {
    private:
        int totalExpenses;
        int totalSales;
        int totalRevenue;
        int totalProducts;

    public:
        Sales_office (int exp, int sales, int revenue, int product) {
            totalExpenses = exp;
            totalSales = sales;
            totalRevenue = revenue;
            totalProducts = product;}
        friend class Revenue_calculator;

        void show_total() const {
            cout << "total expenses: " << totalExpenses << endl;
            cout << "total sales : " << totalSales << endl;
            cout << "total revenue: " << totalRevenue << endl;
            cout << "total sold: " << totalProducts << endl;}
        void settingexp(int exp) {
            totalExpenses = exp;}
        void settings(int sales) {
            totalSales = sales;}
        void settingrev(int revenue) {
            totalRevenue = revenue;}
        void settingp(int products) {
            totalProducts = products;}
};
class Revenue_calculator {
    private:
        int totalExpenses;
        int totalSales;
        int totalRevenue;
        int totalProducts;

    public:
        Revenue_calculator() : totalExpenses(0), totalSales(0), totalRevenue(0), totalProducts(0) {}
        void calculate_revenue(const Sales_office& office1, const Sales_office& office2) {
            this->totalExpenses = office1.totalExpenses + office2.totalExpenses;
            this->totalSales = office1.totalSales + office2.totalSales;
            this->totalRevenue = office1.totalRevenue + office2.totalRevenue;
            this->totalProducts = office1.totalProducts + office2.totalProducts;}

        void show_total() {
            cout << " total expenses: " << totalExpenses << endl;
            cout << " total sales : " << totalSales << endl;
            cout << " total revenue: " << totalRevenue << endl;
            cout << " total sold: " << totalProducts << endl;}
    };

    void input_values(int &a, int &b, int &c, int &d) {
        cout << "enter total expenses: ";
        cin >> a;
        cout << "enter total sales : ";
        cin >> b;
        cout << "enter total revenue: ";
        cin >> c;
        cout << "enter total sold: ";
        cin >> d;
}

int main() {
    int a, b, c, d;
    input_values(a, b, c, d);
    Sales_office outlet1(a, b, c, d);

    int x, y, z, o;
    input_values(x, y, z, o);
    Sales_office outlet2(x, y, z, o);

    cout << "first sales ";
    outlet1.show_total();
  
    cout << "second sales";
    outlet2.show_total();
  
    Revenue_calculator revenueCalculator;
    revenueCalculator.calculate_revenue(outlet1, outlet2);
    revenueCalculator.show_total();
}
