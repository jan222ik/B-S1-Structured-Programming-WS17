public Integer validdatetest(Integer day, String month, Integer year, )
	boolean valid = false
	Integer[] daysInMonth = {0,31,28,31,30,31,30,31,31,30,31,30,31}
	Integer i = 1
	String[] namesOfMonths = {"","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"}
	Integer dayInYear = 0
	if (year % 4==0)
		daysInMonth[3]+=1
		if (year % 100==0)
			daysInMonth[3]-=1
			if (year % 400==0)
				daysInMonth[3]+=1
			end
		end
	end
	i = 1
	while (i < 13)
		if (namesOfMonths[i] == month)                   
			if ((daysInMonth[i] >= day)&&(day > 0))
				dayInYear += day
				valid = true                      
			end                                  
		end                
		if (valid != true)
			dayInYear = dayInYear + daysInMonth[i]                     
		end
		i+=1                
	end	
	if (valid == false){
			printf("ERROR - THE INSERT DATE IS NOT VALID")
			dayInYear = -1
		end
	return dayInYear
end
