class Solution {
public:
    int dayOfYear(string date) {
        string year = date.substr(0,4);
        int year_i = stoi(year);
        
        string month = date.substr(5,2);
        if(month[0] == '0') month = month[1];
        
        int month_i = stoi(month);
        
        int arr[12] = {31 , 29 , 31 ,30 ,31 , 30 ,31 ,31 ,30 , 31, 30 , 31};
        
        if(year_i == 1900 || year_i % 4 != 0) arr[1] = 28;
        
        string day = date.substr(8,2);
        if(day[0] == '0') day = day[1];
        
        int day_i = stoi(day);
        
        for(int i = 0 ; i < month_i -1 ;++i){
            day_i += arr[i];
        }
        return day_i;
    }
};