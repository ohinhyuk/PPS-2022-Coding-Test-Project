// Programmers 12901
// Title : 2016년
// URL : https://school.programmers.co.kr/learn/courses/30/lessons/12901

#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int a, int b) {
    string answer = "";
    int arr[12] = { 31 , 29 ,31 , 30 , 31, 30 , 31, 31 , 30 , 31 , 30, 31};
    int days = 0;
    for(int i = 0 ; i < a-1 ; ++i ) days += arr[i];
    days += (b-1);
    
    int yoil = (days % 7);
    
    switch(yoil){
        case 0:
            answer = "FRI";
            break;
        case 1:
            answer = "SAT";
            break;
        case 2:
            answer = "SUN";
            break;
        case 3:
            answer = "MON";
            break;
        case 4:
            answer = "TUE";
            break;
        case 5:
            answer = "WED";
            break;
        case 6:
            answer = "THU";
            break;
    }
    
    return answer;
}