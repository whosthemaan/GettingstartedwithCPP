#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

//switch(ch) //count vowels in a single statement
//{
//    case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
//        ++vow_cnt;
//        break;
//    default:
//        ++nonvow_count;
//        break;
//}

int main()
{
    /* ------------ Exercise 5.5 -------------- */
//    int num = 101;
//    string grade;
//    if(num>=0 && num<=100)
//    {
//        if(num>=90)
//            grade = "A+";
//        else if(num>=80)
//            grade = "A";
//        else if(num>=70)
//            grade = "B";
//        else if(num>=60)
//            grade = "C";
//        else if(num>=50)
//            grade = "D";
//        else if(num>=40)
//            grade = "E";
//        else
//            grade = "F";
//    }
//    else
//        grade = "invalid score";
        
    /* ------------ Exercise 5.6 -------------- */
//    if(num>=0 && num <=100)
//        num>=90 ? grade = "A+" : num>=80 ? grade = "A" : num>=70 ? grade = "B" : num>=60 ? grade = "C" : num>=50 ? grade ="D" : num>=40 ? grade = "E" : grade="F";
//    else
//        grade="invalid score";

    /* ------------ Exercise 5.9 && 5.10 && 5.11-------------- */
//    string total;
//    getline(cin, total);
//    int a_cnt {}, e_cnt {}, i_cnt {}, o_cnt {}, u_cnt {}, special_characters {};
    
//    for(char inp:total)
//    {
//        if(inp == 'a' || inp == 'A')
//            a_cnt++;
//        else if(inp == 'e' || inp=='E') 
//            e_cnt++;
//        else if(inp == 'i' || inp=='I')
//            i_cnt++;
//        else if(inp == 'o' || inp=='O')
//            o_cnt++;
//        else if(inp == 'u' || inp=='U')
//            u_cnt++;
//        else if(inp == ' '|| inp=='\t' || inp=='\n')
//            special_characters++;
//    }

//    for(char inp:total)
//    {
//        if(inp == 'a' || inp == 'A')
//            a_cnt++;
//        else if(inp == 'e' || inp=='E') 
//            e_cnt++;
//        else if(inp == 'i' || inp=='I')
//            i_cnt++;
//        else if(inp == 'o' || inp=='O')
//            o_cnt++;
//        else if(inp == 'u' || inp=='U')
//            u_cnt++;
//        else if(inp == ' '|| inp=='\t' || inp=='\n')
//            special_characters++;
//    }
//            
//    cout << "A count is " << a_cnt <<endl;
//    cout << "E count is " << e_cnt <<endl;
//    cout << "I count is " << i_cnt <<endl;
//    cout << "O count is " << o_cnt <<endl;
//    cout << "U count is " << u_cnt <<endl;
//    cout << "Special character count is " <<special_characters <<endl;

//    unsigned evenCnt = 0, oddCnt = 0;
//    int digit = 22 % 10;
//    switch (digit) {
//        case 1: case 3: case 5: case 7: case 9:
//            oddCnt++;
//            break;
//        case 0: case 2: case 4: case 6: case 8: case 10:
//            evenCnt++;
//            break;
//    }
//    cout <<evenCnt<<endl;

    /* ------------ Exercise 5.14 -------------- */
    
//    while(cin >> input)
//    {
//        if(status = false) 
//        {
//            first_term = input;
//            status = true; 
//        }
//        else if(input == first_term)
//        {
//            cnt++;
//        }
//    }
    
    /* ------------ Exercise 5.17 -------------- */
//    vector<int> a {1,2,3,4,5,6,7,8};
//    vector<int> b {1,2,3,4,5,6,7};
//    
//    auto a_sz = a.size();
//    auto b_sz = b.size();
//    
//    bool sub = 0;
//    
//    if(a_sz >= b_sz)
//    {
//        for(decltype(b.size()) i=0;i<b_sz;i++)
//        {
//            if(a[i] == b[i])
//                sub = true;
//            else
//            {
//                sub = false;
//                break;
//            }
//        }
//    }
//    
//    else
//    {
//        for(decltype(a.size()) i=0;i<a_sz;i++)
//        {
//            if(a[i] == b[i])
//                sub = true;
//            else
//            {
//                sub = false;
//                break;
//            }
//        }
//    }
//    
//    return sub;

//    vector<int> v {1,2,3,4};
//    for(auto beg = v.begin(), end = v.end(); beg != end; beg++)
//    {
//        auto &r = *beg;
//        r *= 2;
//        cout << r<<endl;
//    }

/* -------------- Exercise 5.19 ----------- */
//int i1 {}, i2 {};
//    do
//    {
//        cin >> i1 >> i2;
//        i1 > i2 ? cout << "First integer is greater" <<endl : cout <<"Second integer is greater"<<endl;
//    } while(1);

/* -------------- Exercise 5.20 ----------- */
//    string input, previous, word = " ";
//    while(cin >> input && input!="done")
//    {
//        if(previous == input)
//        {
//            word = input;
//            break;
//        }
//        previous = input;
//    }
//        
//    word != " " ? (cout << word) : (cout << "No word was repeated");

/* -------------- Exercise 5.21 ----------- */
//    string input, previous, word = " ";
//    while(cin >> input && input!="done")
//    {
//        if(previous == input && isupper(input[0]))
//        {
//            word = input;
//            break;
//        }
//        previous = input;
//    }
//        
//    word != " " ? (cout << word) : (cout << "No word was repeated starting with an uppercase");

/* ----------- Exercise 5.22 ------------ */
//    do{
//        int sz = get_size();
//    }while(sz <= 0);

//throw runtime_error("Data must refer to same ISBN");

//try {
//    
//} catch (exception-declaration) {
//    
//} catch (exception-declaration) {
//    
//}

/* -------------- Exercise 5.23 ------------- */
//    int input1, input2;
//    cin >> input1 >> input2;
//    cout << input1/input2;
        
/* -------------- Exercise 5.24 ------------- */
//    double input1, input2;
//    cin >> input1 >> input2;
//    if(input1 == 0 || input2 == 0)
//        throw runtime_error("Zero is not accepted");
//    else
//        cout << input1/input2;

/* -------------- Exercise 5.25 ------------- */
//    double input1, input2;
//    cout << "Input two numbers: ";
//    while(cin >> input1 >> input2) 
//    {
//        try {
//                if(input2==0)
//                {
//                    throw runtime_error("Enter valid divisor");
//                }
//                cout << input1/input2<<endl;
//            
//                cout << "Input two integers: ";
//        }
//        catch (runtime_error error)
//        {
//            cout << error.what() << "\n" << "Try again with valid number: ";
//        }
//    }
    
    return 0;
}