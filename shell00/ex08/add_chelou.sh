#!/bin/bash
echo "$FT_NBR1 + $FT_NBR2" | tr "\'\"\?\!" "0123" | tr "mrdoc" "01234" | xargs -I {} echo "ibase=5; {}" | bc | tr "0123456789ABC" "gtaio luSnemf"
