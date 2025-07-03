# aebar script (C) by kurumi
#!/bin/bash

ACTIVE=''
END='10'
ITERATION=0

wmctrl -d | while read -r line; do
    ((ITERATION++))
    
    if [[ "$line" == *'*'* ]]; then
        name="$ACTIVE"
    else
        if (( ITERATION == 10 )); then
            name="$END"
        else
            name="$ITERATION"
        fi
    fi

    printf " %s" "$name"
done
