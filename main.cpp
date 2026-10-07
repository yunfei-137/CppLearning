#include <iostream>

// 2.7.1 编写一个 C++ 程序，它显示您的姓名和地址
// int main() {

//     string My_Name;
//     string My_Address;

//     cout << "Enter your name:";
//     cin>> My_Name;
//     cout << "Enter your address:";
//     cin >> My_Address;

//     cout << "My name is: " << My_Name << endl;
//     cout << "My address is: " << My_Address << endl;

//     return 0;1
// }

// 2.7.2 编写一个 C++ 程序，他要求用户输入一个以 long 为单位的距离，然后将他转换为码（一 long 等于 220 码）。
// int main(void)
// {
//     double lenth;
//     cout << "Please enter the long: " << endl;
//     cin >> lenth;
//     cout << "The result is: " << lenth * 220;
//     return 0;
// }

// 2.7.3 编写一个 C++ 程序，它使用3个用户定义的函数（包括 main()），并生成下面的输出：
//  Three blind mice
//  Three blind mice
//  See how they run
//  see how they run
// 其中一个函数要调用两次，该函数生成前两行；另一个函数也要被调用两次，并生成其余的输出。
// void Press_Info1(void)
// {
//     cout << "Three blind mice" << endl;
// }
// void Press_Info2(void)
// {
//     cout << "See how they run" << endl;
// }
// int main(void)
// {
//     for(int i = 1; i<3;i++)
//     {
//         Press_Info1();
//     }
//     for(int i=0;i<3;i++)
//     {
//         Press_Info2();
//     }
//     return 0;
// }

// 2.7.4 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
//  Enter your age: 29
// int main(void)
// {
//     using namespace std;
//     float My_Age;
//     cout << "Enter your age: " << endl;
//     cin >> My_Age;
//     cout << "You have lived for " << My_Age * 12 << " monthes." << endl;
//     cin.get();
//     return 0;
// }

// 2.7.5 编写一个程序，其中的 main() 调用一个用户定义的函数（以摄氏温度值为参考，并返回相应的华氏温度值）。该程序参考下面的格式要求用户输入摄氏温度值，并显示结果
//  Please enter a celsius value: 4.2
//  20 degrees Celsius is 68 degrees Fahrenheit.
// 下面是转换公式：
//      华氏温度 = 1.8 * 摄氏温度 + 32.0
// int main()
// {
//     using namespace std;
//     double Cel_Temp;
//     cout << "Please enter a celsius value: ";
//     cin >> Cel_Temp;
//     cout << Cel_Temp << " degrees Celsius is " << Cel_Temp * 1.8 + 32.0 << " degrees fahrenheit." << endl;
//     return 0;
// }

// 2.7.6 编写一个程序，其 main() 调用一个用户定义的函数（以光年为参数，并返回对应天文单位的值）。该程序按下面的格式要求用户输入光年值，并显示结果：
//  Enter the number of light years: 4.2
//  4.2 light years = 265608 astronomical unites.
// 天文单位是从地球到太阳的平均距离，光年是光一年走的距离。请使用 double 类型，转换公式为：1 光年 = 63240 天文单位
// int main(void)
// {
//     using namespace std;
//     double light_years_value = 0;
//     cout << "Enter the number of light years: ";
//     cin >> light_years_value;
//     cout << light_years_value << " light years = " << light_years_value * 63240.0 << " austronomical unites." << endl;
//     return 0;
// }

// 2.7.7 编写一个程序，要求用户输入小时数和分钟数。在 main() 函数中，将这两个值传递给一个 void 函数，后者以下面这样的格式显示这两个值：
// Enter the number of hours: 9
// Enter the number of minutes: 28
// Time: 9:28
// void Print_Time(int hours, int minutes);
// int main(void)
// {
//     using namespace std;
//     int Time_Hour = 0, Time_Minutes = 0;
//     cout<< "Enter the number of hours: ";
//     cin>>Time_Hour;
//     cout<<"Enter the number of minutes: ";
//     cin>>Time_Minutes;
//     Print_Time(Time_Hour, Time_Minutes);
//     return 0;
// }
// void Print_Time(int hours, int munites)
// {
//     using namespace std;
//     int show_hours = (hours + (munites / 60)) % 24;
//     int show_munites = munites % 60;
//     cout<< "Time: "<< show_hours<<":"<<show_munites;
// }

// 3.7.1 编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺和英寸，该程序使用下划线字符来指示输入位置。另外，使用一个 const 符号常量来表示转换因子。
// using namespace std;
// const int HEIGHT = 12;
// int main(void)
// {
//     int my_height = 0;
//     cout<<"Please enter your height(integer inch): __";
//     cin>>my_height;
//     cout<<"Your height is "<<my_height<<" inches "<< "or "<<my_height/12<<" feet.";
//     return 0;
// }

// 3.7.2 编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重。（使用3个变量来存储这些信息。）该程序报告其BMI（Body Mass Index，体重指数）。
// 为了计算 BMI该程序以英寸的方式指出用户的身高（1 英尺为 12 英寸），并将以英寸为单位的身高转换为以米为单位的身高（1英寸=0.0254米）。
// 然后，将以磅为单位的体重转换为以千克为单位的体重（1千克=2.2磅）。
// 最后，计算相应的 BMI ———体重（千克）除以身高（米）的平方。用符号常量表示各种转换因子。
#include <math.h>
using namespace std;
int main(void)
{
    int foot_height = 0, inch_height = 0, pound_weight = 0;
    cout << "Please enter your height(imperial, like 2 feet, 2 inches): " << endl;
    cin >> foot_height;
    cin >> inch_height;
    cout << "Please enter your weight(pounds): " << endl;
    cin >> pound_weight;
    cout << "Your BMI is: " << (pound_weight/2.2) / pow(((foot_height * 12 + inch_height) * 0.0254) , 2) << endl;
    return 0;
}

// 3.7.3 编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。1度为60分，1分等于60秒，请以符号常量的方式表示这些值。
// 对于每个输入值，应使用一个单独的变量去存储他。
// 下面是该程序运行时的情况：
//  Enter a latitude in degrees, minutes, and seconds:
//  First, enter the degrees:
//  Next, enter the minutes of arc:
// 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees

// 3.7.4 编写一个程序，要求用户以整数方式输入秒数（使用 long 或者 long long 变量存储），然后以天、小时、分钟和秒的方式显示这段时间。
// 使用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多少秒。
// 该程序的输出应与下面类似：
//  Enter the number of seconds: 31600000
//  31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
