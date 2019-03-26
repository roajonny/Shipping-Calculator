// learning c++ is the perfect time to brush up on the fundamentals! 

 /* Shipping cost calculator
  * Asks user for package dimension in inches
  * length, width, height - integers
  * 
  * All dimensions must be 10 inches or less
  * 
  * Base cost $2.50
  * 
  * If package volume is greater than 100 cubic inches, 10% surcharge
  * If package volume is greater than 500 cubic inches, 25% surcharge
  */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int length{}, width{}, height{};
    const int tier1_threshold {100};
    const int tier2_threshold {500};
    int max_dim_length {10};
    
    
    double base_cost{2.50};
    double tier1_surcharge {0.10* base_cost};
    double tier2_surcharge {0.25* base_cost};
    int package_volume{};
 
cout << "Welcome to the package cost calculator" << endl;
cout << "Enter length, width, and height of package separated by spaces: ";
cin >> length >> width >> height;

if (length > max_dim_length || width > max_dim_length || height > max_dim_length) {
    cout << "Sorry, package rejected - dimensions exceeded" << endl;
}
else {
    double package_cost{};
    package_volume = length * width * height;
    package_cost = base_cost;
    
    if (package_volume > tier2_threshold) {
        package_cost += tier2_surcharge;
        cout << "Adding tier2 surcharge" << endl;
    }
    else if (package_volume > tier1_threshold) {
        package_cost += tier1_surcharge;
        cout << "Adding tier1 surcharge" << endl;
    }
    cout << fixed << setprecision(2); // prints standard dollars format
    cout << "The volume of your package is: " << package_volume << endl;
    cout << "Your package will cost $" << package_cost << " to ship" << endl;
}
return 0;
}
