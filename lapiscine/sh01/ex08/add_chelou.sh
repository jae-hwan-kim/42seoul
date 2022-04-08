echo "$FT_NBR1+$FT_NBR2" | tr "\'" '0' | tr '\' '1' | tr '"?!' '234' | tr 'mrdoc' '01234' | sed "s/^/obase=D;ibase=5;/" | bc | tr '0123456789ABC' 'gtaio luSnemf'
