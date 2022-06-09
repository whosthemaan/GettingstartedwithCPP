#include <iostream>
using namespace std;

int main()
{
//    string first, second;
    
//    while(/*getline(cin, line)*/cin >> line)
//        cout << line <<endl;
    /* ------------------- Exercise 3.3 ------------------ */
//    cin >> first >> second;
//    if(first==second)
//    {
//        cout << first << " and " << second << " are equal.";
//    }
//    else if(first>second)
//    {
//        cout << first << " is greater than " << second;
//    }
//    else
//    {
//        cout << second << " is greater than " << first;
//    }
//    
    /* -------------------- Exercise 3.4 --------------------- */
//    auto len1 = first.size();
//    auto len2 = second.size();
//    
//    if(len1==len2)
//    {
//        cout << "Length of both strings is equal";
//    }
//    else if(len1>len2)
//    {
//        cout << first << " is longer than " <<second;
//    }
//    else{
//        cout << second << " is longer than " <<first;
//    }
    
    /* -------------------- Exercise 3.5 ---------------------- */
    
//    string word, con;
//    
//    while(cin >> word)
//    {
//        if(word=="\n")
//        {
//            break;
//        }
//        con += word;
//    }
//    cout << con;

//    string str("random string");
//    for(auto c : str)
//    {
//        cout << c <<endl;
//    }

//    string s("Hello World!!!");
//
//for (auto &d : s)
//{ // for every char in s (note: c is a reference)
//    cout << typeid(s).name();
//}
    // capitilize the first word of string
//    for (decltype(s.size()) index = 0;
//        index != s.size() && !isspace(s[index]); ++index)
//            s[index] =  toupper(s[index]);
//    cout << s;

//    const string hexdigits = "0123456789ABCDEF";
//    cout << "Enter a series of number between 0 and 15" << "seperated by spaces. Hit Enter when done: " <<endl;
//    string result;
//    string::size_type n;
//    while(cin>>n)
//        if(n<hexdigits.size())
//            result += hexdigits[n];
//    cout << "Your hex number is " << result <<endl;

/* --------------- Exercise 3.6 ------------------- */
//    string s = "Hello World";
//    for (auto &d : s)
//        d = 'X';
//    cout << s;

/* --------------- Exercise 3.7 ------------------- */   
//    string s = "Hello World";
//    for (char &d : s)
//        d = 'X';
//    cout << s;

/* --------------- Exercise 3.8 ------------------- */  
//    string s = "Hello World";
    
//    decltype(s.size()) index = 0;
//    while(index<s.size())
//    {
//        cout << s[index]<<endl;
//        index++;
//    }

//    for (decltype(s.size()) index = 0; index != s.size(); ++index)
//            s[index] =  'X';
//    cout << s;

/* --------------- Exercise 3.10 ------------------- */
//    string line, modified;
//    getline(cin, line);
//    for(auto c : line)
//    {
//        if(!ispunct(c))
//            modified += c;
//    }
//    cout << modified << endl;

    const string s = "Keep out!";
    auto &c = s;
    cout << typeid(c).name();  
 
    return 0;
}