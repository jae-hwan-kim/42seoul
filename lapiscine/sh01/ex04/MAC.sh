ifconfig | awk '/ether/' | awk '{print $1, $2}'| grep "^ether" | awk '{print $2}'
