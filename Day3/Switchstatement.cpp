// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a no.:";
//     cin>>n;
//     switch (n)
//     {
//     case 1:
//     cout<<"First"<<endl;
//         break;
//     case 2:
//     cout<<"Second"<<endl;
//     break;
//     case 3:
//     cout<<"Third"<<endl;
//     break;
//     case 4:
//     cout<<"Fourth"<<endl;
//     break;
    
//     default:
//     cout<<"This is default case"<<endl;
//         break;
//     }
// }

//To Check Wheather a Given Character is Vowel or consonats.
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a char.:";
    cin>>ch;
    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'I':
    case 'i':
    case 'u':
    case 'U':
    case 'o':
    case 'O':
    cout<<"Vowels"<<endl;
    break;
    default:
    cout<<"Consonats"<<endl;
    break;
}
}