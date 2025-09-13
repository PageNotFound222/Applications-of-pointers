#include <iostream>
using namespace std;
int salary(double*sal){
    *sal=0.2*(*sal)+(*sal);
    return 0;
}
int main() {
    int yr,profit;
    double curr_sal;
    string curr_proj;
    cout<<"Enter Details for eligibilty of increment in salary"<<endl;
    cout<<"Enter your current salary"<<endl;
    cin>>curr_sal;
    cout<<"Enter the years worked"<<endl;
    cin>>yr;
    cout<<"Enter the profit earned in the working period"<<endl;
    cin>>profit;
    cout<<"Do you have a research project in pipeline(Yes/No)"<<endl;
    cin>>curr_proj;
    cout<<"What is the total number of projects you have worked on till now?"<<endl;
    int tot_proj;
    cin>>tot_proj;
    bool eligible=false;
    if(yr>=1 || profit>=100000 || curr_proj=="Yes" || tot_proj>=2){
        eligible=true;
    }
    if(eligible){
        float new_sal=curr_sal+salary(&curr_sal);
        cout<<"you are eligible for a salary increment.\n";
        cout<<"Your new salary will be:"<<new_sal<<endl;
    } else{
        cout<<"you are not eligible for a salary increment at this time.\n";
    }
    return 0;
}
/*
output:
Enter Details for eligibilty of increment in salary
Enter your current salary
200000
Enter the years worked
3
Enter the profit earned in the working period
120000
Do you have a research project in pipeline(Yes/No)
Yes
What is the total number of projects you have worked on till now?
3
you are eligible for a salary increment.
Your new salary will be:240000
*/
