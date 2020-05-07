valuesComperison(Integer a1[],Integer a2[]):boolean
	Boolean result = false;
	if (a1[].length == a2[].length)
		for (int i = 0; i < a1.length; i+=1)
			if ((a1[i]== a2[i])OR(a1[i]==
		(a2[i]*-1))OR (a2[i]== (a1[i]*-1))OR(a1[i]== 0)OR(a2[i]== 0))
				result = true
			else
				result = false
			end -if
		end -for
	end -if
	return result
end -valuesComperison