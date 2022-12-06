row=5
for((i=1;i<=5;i++))
do
	for((j=i;j<=row;j++))
	do
		echo -ne " "
	done
	for((k=1;k<=i;k++))
	do
		echo -ne "* "
	done
	echo ""
done
