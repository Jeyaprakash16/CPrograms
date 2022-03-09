#include<stdio.h> 
#include<stdlib.h> 
int valid_date(int date, int mon, int year);
 
 
int main(void)
{
    int day1, mon1, year1,
        day2, mon2, year2;
 
    int day_diff, mon_diff, year_diff;         
 
    printf(" (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &mon1, &day1, &year1);
    
    printf(" (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &mon2, &day2, &year2);
    
    if(!valid_date(day1, mon1, year1))
    {
        printf("\n");        
    }
    
    if(!valid_date(day2, mon2, year2))
    {
        printf("\n");
        exit(0);
    }       
    
    if(day2 < day1)
    {      
        
        if (mon2 == 3)
        {
            
            if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0)) 
            {
                day2 += 29;
            }
            
            else
            {
                day2 += 28;
            }                        
        }
        
        
        else if (mon2 == 5 || mon2 == 7 || mon2 == 10 || mon2 == 12) 
        {
           day2 += 30; 
        }
                
        
        else
        {
           day2 += 31;
        }
        
        mon2 = mon2 - 1;
    }
    
    if (mon2 < mon1)
    {
        mon2 += 12;
        year2 -= 1;
    }       
    