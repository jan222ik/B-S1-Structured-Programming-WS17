checksum(Integer arraylength, Integer array[arraylength] ): Integer
	Integer result = 0
	for (Integer i=0;i<arraylength;i+=1)
		result += array[i]
	end
	return result%256
end