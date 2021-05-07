awk '{print;if (substr($0,0,11) == "int main (") {print "initialize();"};}'
