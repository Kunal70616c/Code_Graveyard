line=12
for((a=line/2;a<=line;a=a+2))
do
	for((b=1;b<=line-a;b=b+2))
	do
		echo -ne " "
	done
	for((b=1;b<=a;b++))
	do
		echo -ne "*"
	done
	for((b=1;b<=line-a;b++))
	do
		echo -ne " "
	done
	for((b=1;b<=a-1;b++))
	do
		echo -ne "*"
	done
	echo " "
done
for((a=line;a>=0;a--))
do
	for((b=a;b<line;b++))
	do
		echo -ne " "
	done
	for((b=1;b <=(a*2)-1;b++))
	do
		echo -ne "*"
	done
	echo " "
done
	
	
