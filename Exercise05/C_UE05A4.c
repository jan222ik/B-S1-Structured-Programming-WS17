SimpleCalc(String s):Double
	char str[]=s
	Integer state = 0
	Double result = 0
	Double n1 = 0;
	Integer n2 = 0;
	Integer operation = 0;
	Integer firstIteration = 0;
	if ((str[0]=='c')&&(str[1]=='a')&&(str[2]=='l')&&(str[3]=='c'))
		if (str[4]=='Ъ')
			state = 1
			while (state == 1)
				Integer i = 0
				while ((str[i]!='Ъ'||str[i]!=0)&&(firstIteration !=1))
					n1 = 10*i*n1+(str[i]-48)
					i=i+1
					firstIteration = 1
				end -while
				if (str[i]=='Ъ')
					operation = str[i]
					i=i+1
					state = 2
				end if
				while ((str[i]!='Ъ')||(state == 2))
					n2 = 10*i*n2+(str[i]-48)
					i=i+1
				end -while
				if (operation == '+')
					n1= (double) n1+n2
					state = 1
				else if (operation == 'x')
						n1= (double) n1*n2
						state = 1
					else if (operation == '-')
							n1= (double) n1-n2
							state = 1
						else if (operation == '/')
								n1= (double) n1/n2
								state = 1
							end -if
						end -if
					end -if
				end -if
				if (str[i]==0)
					state = 3
				else 
					state = 1
				end -if
				result = n1
			end -while
			return result
		end -if
	end -if
end -SimpleCalc
