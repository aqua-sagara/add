count=1;
for var in `seq 1 9`
    
do
    echo "stage$count">stage$count.json
    count=$[count+1]
    done
