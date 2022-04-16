cd /Users/zhaohua/Desktop/code/Shell\ code/virus
i=1
while :
do
    mkdir hahahaha${i}
    let i++
    if [ $i == 20000 ]
    then
        break
    fi
done