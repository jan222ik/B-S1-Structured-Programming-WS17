import java.util.*;
public class validdate
{

    /**
     * Constructor for objects of class validdate
     */
    public validdate()
    {
       testset1();
       testset2();
       testset3();
    }
    public void testset1(){
        System.out.println();
        System.out.println("29.Feb.12 ist der "+validdatetest(29,"Feb",12,true)+"Tag im Jahr, BSP für Schaltjahr %4");              System.out.println();
        System.out.println("29.Feb.12 ist der "+validdatetest(29,"Feb",12,false)+"Tag im Jahr, BSP für Schaltjahr %4");             System.out.println();        System.out.println();
        System.out.println("29.Feb.100 ist der "+validdatetest(29,"Feb",100,true)+"Tag im Jahr, BSP für Schaltjahr %100");          System.out.println();
        System.out.println("29.Feb.100 ist der "+validdatetest(29,"Feb",100,false)+"Tag im Jahr, BSP für Schaltjahr %100");         System.out.println();        System.out.println();
        System.out.println("29.Feb.2000 ist der "+validdatetest(29,"Feb",2000,true)+ "Tag im Jahr, BSP für Schaltjahr %400");       System.out.println();
        System.out.println("29.Feb.2000 ist der "+validdatetest(29,"Feb",2000,false)+ "Tag im Jahr, BSP für Schaltjahr %400");      System.out.println();        System.out.println();
        System.out.println("29.Feb.2001 ist der "+validdatetest(29,"Feb",2001,true)+"Tag im Jahr, BSP für falsche Schaltjahr");     System.out.println();
        System.out.println("29.Feb.2001 ist der "+validdatetest(29,"Feb",2001,false)+"Tag im Jahr, BSP für falsche Schaltjahr");    System.out.println();
        System.out.println("29.Feb.1423 ist der "+validdatetest(29,"Feb",1423,true)+"Tag im Jahr, BSP für falsche Schaltjahr");     System.out.println();
    }
    public void testset2(){
        System.out.println("Testset: Ausgelasse Tage in julianischer Kalender");   System.out.println();
        System.out.println("29.Feb.-11 ist der "+validdatetest(29,"Feb",-11,true)+"Tag im Jahr, BSP für Schaltjahr falsche Berechnung");            System.out.println();
        System.out.println("29.Feb.-5 ist der "+validdatetest(29,"Feb",-5,true)+"Tag im Jahr, BSP für Schaltjahr: ausgelassen von Augustus");       System.out.println();
        System.out.println("29.Feb.-1 ist der "+validdatetest(29,"Feb",-1,true)+"Tag im Jahr, BSP für Schaltjahr: ausgelassen von Augustus");       System.out.println();
        System.out.println("29.Feb.4 ist der "+validdatetest(29,"Feb",4,true)+"Tag im Jahr, BSP für Schaltjahr: ausgelassen von Augustus");         System.out.println();
        System.out.println("29.Feb.8 ist der "+validdatetest(29,"Feb",8,true)+"Tag im Jahr, BSP für Schaltjahr: ausgelassen von Augustus");         System.out.println();
        System.out.println("13.Oct.1582 ist der "+validdatetest(13,"Oct",1582,true)+"Tag im Jahr, BSP für ausgelassene Tage im Jahr 1582");         System.out.println();
    }
    public void testset3(){
        System.out.println("TESTSET: FALSCHE Eingaben");    System.out.println();
        System.out.println("31.Jun.2017 ist der "+validdatetest(31,"Jun",2017,true)+"Tag im Jahr, BSP für falsche Eingabe: Tag");   System.out.println();
        System.out.println("31.Jun.2017 ist der "+validdatetest(31,"Jun",2017,false)+"Tag im Jahr, BSP für falsche Eingabe: Tag");  System.out.println();
        System.out.println("31.Jun.1582 ist der "+validdatetest(31,"Jun",1582,true)+"Tag im Jahr, BSP für falsche Eingabe: Tag");   System.out.println();
        System.out.println("31.Jun.-23 ist der "+validdatetest(31,"Jun",-23,false)+"Tag im Jahr, BSP für falsche Eingabe: Tag");    System.out.println();
        System.out.println("11.ANA.2017 ist der "+validdatetest(13,"ANA",2017,true)+"Tag im Jahr, BSP für falsche Eingabe: Monat"); System.out.println();
        System.out.println("11.ANA.1582 ist der "+validdatetest(13,"ANA",1582,true)+"Tag im Jahr, BSP für falsche Eingabe: Monat"); System.out.println();
        System.out.println("11.ANA.-23 ist der "+validdatetest(31,"Jun",2017,true)+"Tag im Jahr, BSP für falsche Eingabe: Monat");  System.out.println();
    }
    public void testSelf(int d, String m, int y, boolean type){
        System.out.println();
        System.out.println(d+"."+m+"."+y+" ist der "+validdatetest(d,m,y,type)+"Tag im Jahr nach julianischen Kalender:"+type);     System.out.println();
    }    
    public int validdatetest(int d, String m, int y, boolean typejulianbefore1582){
        boolean isLeapYear = false;
        int sizeofDaysInMonth = 13;
        boolean valid = false;
        int year = y;
        String month = m;
        int day = d;
        System.out.println("NEW DATE:"+day+month+year+"julK"+typejulianbefore1582+"START");
        int[] daysInMonth = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        int i = 1;
        String[] namesOfMonths = {"","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
        int dayInYear = 0;
        if ((year > 1582)||(typejulianbefore1582 == false)){
            i = 1;
            if ((year%4)==0){
                daysInMonth[2]= 29;
                if ((year%100)==0){
                    daysInMonth[2]= 28;
                    if ((year%400==0)){
                        daysInMonth[2]= 29;
                    }
                }
            }
            while (i < 13){
                if (namesOfMonths[i] == month){                    
                    if ((daysInMonth[i] >= day)&&(day > 0)){
                        dayInYear += day;
                        valid = true;                      
                    }                                  
                }                
                if (valid != true) {
                    dayInYear = dayInYear + daysInMonth[i];                     
                }
                i+=1;                
            }
        } else {
            if (year == 1582){
                i = 1;
                if ((year%4)==0){
                      daysInMonth[2]= 29;
                      if ((year%100)==0){
                          daysInMonth[2]= 28;
                          if ((year%400==0)){
                              daysInMonth[2]= 29;
                            }
                        }
                }
                daysInMonth[10]-=11;
                while (i < 13){
                    if (namesOfMonths[i] == month){
                        if ((daysInMonth[i] >= day)&&(day > 0)&&(i!=10)){
                            dayInYear += day;
                            valid = true; ;
                        } else {
                            if ((day > 0)&&(daysInMonth[10]<=day)&&(day < 5)&& (day > 14)){
                                dayInYear += day;
                                valid = true;
                            } else {
                                if (namesOfMonths[10]==month){
                                    printf("The 5. to 15. of October 1582 were left out to compensate for mistakes in calculations of the Julian calendar ");
                                }
                                 
                            }
                        }
                    }
                    if(valid!=true){
                        dayInYear += daysInMonth[i];
                    }
                    i+=1;
                }
            } else {
                if ((year < 1582)&& (year>0)) {
                    if ((year%4==0) && (year!=4) && (year!=8)){
                        daysInMonth[2]= 29;
                    }
                    i = 1;
                    while (i < 13){
                        if (namesOfMonths[i] == month){
                            if ((daysInMonth[i] >= day)&&(day > 0)){
                                dayInYear += day;
                                valid = true;
                            }                            
                        }
                        if(valid!=true){
                            dayInYear += daysInMonth[i];
                        }
                        i+=1;
                    }
                } else {
                    if (year > -45){
                        if ((year % 3==0)&&(year!=1)&&(year!=5)){
                            daysInMonth[2]= 29;
                        }
                        i = 1;
                        while (i < 13){
                            if (namesOfMonths[i] == month){
                                if ((daysInMonth[i] >= day)&&(day > 0)){
                                    dayInYear += day;
                                }
                            }
                            if(valid!=true){
                                dayInYear += daysInMonth[i];
                            }
                            i+=1;
                        }
                    } else  {  
                        printf("This year is not defined");
                    }
                }
            }
        }
        if (valid == false){
                printf("ERROR - THE DATE IS NOT VALID");
                dayInYear = -1;
            }
        System.out.println("DATE:"+day+month+year+" DONE - return value:" + dayInYear);
        return dayInYear;
    }
    
    public void printf (String s){
        System.out.println(s);
    }
}
