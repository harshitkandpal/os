echo -e "1.Add\n2.Subtract\n3.Multiply\n4.Divide"
echo "Select the operation"
read n
echo "Enter first number: "
read a
echo "Enter second number: "
read b

case $n in 
	1)
		z=$((a+b))
		echo "Sum: $z"
		;;
	2)
		z=$((a-b))
		echo "Subtraction: $z"
		;;
	3)
		z=$((a*b))
		echo "Product: $z"
		;;
	4)
		z=$((a/b))
		echo "Division: $z"
		;;
	*)
		echo "Invalid input"
		;;
esac
