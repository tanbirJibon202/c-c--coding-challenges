// #include <bits/stdc++.h>
// using namespace std;
// struct data
// {
//     string name;
//     int roll;
//     int mark;
// };
// void solve() {
//     vector<data> student(5);
//     for (int i = 0; i < student.size(); i++)
//     {
//         cin >> student[i].name
//             >> student[i].roll
//             >> student[i].mark;
//     }
//     for (int i = 0; i < student.size(); i++)
//     {
//         cout << student[i].name << " "
//              << student[i].roll << " "
//              << student[i].mark << endl;
//     }
// }
// int main() {
//     solve();
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// struct data
// {
//     string name;
//     int roll;
//     int mark;

//     void input() {
//         cin >> name >> roll >> mark;
//     }

//     void output() {
//         cout << name << " "
//              << roll << " "
//              << mark << endl;
//     }
// };

// void solve() {
//     data student_1, student_2;

//     student_1.input();
//     student_2.input();

//     student_1.output();
//     student_2.output();
// }

// int main() {
//     solve();
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// struct data
// {
//     string name;
//     int roll;
//     int mid_1, mid_2;
//     int mark;


//     void input() {
//         cin >> name >> roll >> mid_1>>mid_2;
//     }

//     void output() {
//         cout << name <<"\n"
//              << roll <<"\n"
//              << calc()<<"\n";
//      }
//      int calc(){
//        return mark = max(mid_1, mid_2);
//      }
// };

// void solve() {
//     data student_1, student_2;

//     student_1.input();
//     student_2.input();

//     student_1.output();
//     student_2.output();
// }

// bool cmp(int x, int y){
//     if(x<y) return true;
//     else return false;
// }

// int main() {
//     solve();
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

struct data
{
    string name;
    int roll;
    int mid_1, mid_2;

    void input() {
        cin >> name >> roll >> mid_1 >> mid_2;
    }

    int calc() {
        return max(mid_1, mid_2);
    }

    void output() {
        cout << name << "\n"
             << roll << "\n"
             << calc() << "\n";
    }
};

bool cmp(data x, data y){
    return x.calc() < y.calc();
}

void solve() {
    data student_1, student_2;

    student_1.input();
    student_2.input();

    student_1.output();
    student_2.output();

    if(cmp(student_1, student_2))
        cout << student_2.name << endl;
    else
        cout << student_1.name << endl;
}
int main() {
    solve();
    return 0;
}