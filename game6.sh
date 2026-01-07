n="5"
m="10"
for a in $(./range 0 10 1)
do
    if [ "$a" -eq 5 ];
    then
        echo number
    else
        echo $a
    fi
done 
