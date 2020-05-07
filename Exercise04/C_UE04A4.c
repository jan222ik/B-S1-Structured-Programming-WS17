deleteNegativeValues(Integer a1[]):Integer[],Integer
	Integer a2[a1[].length]={0}
	Integer nextEmpty=0
	validDigits = 0
	Integer i = 0
	while ((i < a1[].length)AND(a1[].length != 0))
		if (a1[i]>=0)
				validDigits +=1
				a2[nextEmpty] = a1[i]
				nextEmpty+=1
		end -if
		i+=1
	end -while	
	return a2[],validDigits
end -deleteNegativeValues