/*Mehtode: FindWord();NextWordPos(); (COUNT()); printResult(); */


void countWords(String text, INTEGER n)
	String words[100]
	INTEGER iWords[100]
	INTEGER pos = 0
	INTEGER highestPOS = 0
	String word = ""
	while (pos < n) do
		int i = 0
		word = nextWord(text, pos, n)
		while (words[i] != word)
			if (i == highestPOS+1) then
				words[i] = word
				highestPOS++
			else
				i++
			end --if
		end --while
		iWords[i]+=1
	end --while
	printResult(words,iWords,highestPOS)
end countWords

INTEGER nextPos(String text, INTEGER pos, INTEGER n)
	while((text[pos]==' ')||(text[pos]==',')||(text[pos]=='.')&&(pos < n)) do
		pos++;
	end --while
end --nextPos

String nextWord(String text, INTEGER pos, INTEGER n)
	String rS = ""
	while ((text[pos]!=' ')&&(text[pos]!=',')&&(text[pos]!='.')&&(pos < n)) do
		rS = rS+text[pos]
		pos++
		end --while
	nextPos(text, pos, n)
	return rS
end --nextWord

printResult(INTEGER words[], INTEGER quant[], INTEGER high)
	for(INTEGER i = 0; i<=high; i++)
		write("%c: %d",word[i],quant[i])
	end --for
end --printResult
