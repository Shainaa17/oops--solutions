#include <iostream>
using namespace std;
class Sum{
private:
    int a,b,sum;
    void total(){
        sum=a+b;
        cout<<"sum calculated in private function"<<endl;
    }
public:
    void set(int num1,int num2){
        a=num1;
        b=num2;
        total();
    }
    int result(){
        return sum;
    }
};
int main(){
    Sum s;
    cout<<"enter two numbers";
    int num1,num2;
    cin>>num1;
    cin>>num2;
    s.set(num1,num2);
    int ans=s.result();
    cout<<"Sum is : "<<ans;
}
// #include <iostream>

// // Use the entire std namespace
// using namespace std;

// class Calculator {
// private:
//     int num1;
//     int num2;
//     int total_sum;

//     // Private member function to calculate the sum
//     void sum_numbers() {
//         total_sum = num1 + num2;
//         cout << "Sum calculated internally." << endl;
//     }

// public:
//     // Public member function to set the numbers and trigger the sum calculation
//     void set_numbers_and_sum(int a, int b) {
//         num1 = a;
//         num2 = b;
//         // Calling the private member function from a public member function
//         sum_numbers();
//     }

//     // Public member function to get the sum
//     int get_sum() {
//         return total_sum;
//     }
// };

// int main() {
//     Calculator calc;

//     // Call the public function to set the numbers and calculate the sum
//     calc.set_numbers_and_sum(10, 20);

//     // Get and display the calculated sum
//     cout << "The sum of the numbers is: " << calc.get_sum() << endl;

//     // This would cause a compilation error as sum_numbers is private
//     // calc.sum_numbers();

//     return 0;
// }