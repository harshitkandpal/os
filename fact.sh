echo "Enter the number: "
read n
fact=1
while [ 0 -lt $n ]
do 
	fact=$((fact*n))
	n=$((n-1))
done 
echo "$fact"
