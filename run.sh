
if [ "$1" == "-GUI" ];
then
	./GUI-Build/./hello

elif [ "$1" == "-p" -a "$2" == "chaos" ];
then
	gnuplot ./GNUPlot/arnold_plot.gpl 
	eog img_arnold.png

elif [ "$1" == "-sync" ];
then
	./main -sync

elif [ "$1" == "-CLI" ];
then
	./main -CLI sample.dat   #shud wrk on txt

elif [ "$1" == "-et" ];
then
	./main -et $2

elif [ "$1" == "-ei" ];
then
	./main -ei $2

elif [ "$1" == "-ea" ];
then
	./main -ea $2

elif [ "$1" == "-ev" ];
then
	./main -ev $2

elif [ "$1" == "-dt" ];
then
	./main -dt $2

elif [ "$1" == "-di" ];
then
	./main -di $2

elif [ "$1" == "-da" ];
then
	./main -da $2

elif [ "$1" == "-dv" ];
then
	./main -dv $2

elif [ "$1" == "-help" -o "$1" == "" ];
then

        echo -e "\n#CheatSheet"
        echo -e "#Multi Chaotic Crypto-System\n"
	echo "#COMMAND LINE USAGE:"
	echo -e "\t ./run.sh -GUI\t\t\t\t:Enables GUI Mode"
	echo -e "\t ./run.sh -CLI\t\t\t\t:Enables CLI Mode & encrypts text(by default)"	
	echo -e "\t ./run.sh -help\t\t\t\t:Displays usage/help section"
	echo -e "\t ./run.sh -sync\t\t\t\t:(Re)Synchronizes chaotic systems"
	echo -e "\t ./run.sh -p chaos\t\t\t:Plots Chaotic Maps"
	echo -e "\n\t ./run.sh -et <filename>\t\t:Encrypts Text as given in <filename>"
    echo -e "\t ./run.sh -ei <filename>\t\t:Encrypts Image named <filename>"
   	echo -e "\t ./run.sh -e[a|v] <filename>\t\t:Encrypts audio/video named <filename>"
	echo -e "\n\t ./run.sh -dt <filename>\t\t:Decrypts Text as given in <filename>"
	echo -e "\t ./run.sh -di <filename>\t\t:Decrypts Image named <filename>"	   
	echo -e "\t ./run.sh -d[a|v] <filename>\t\t:Decrypts audio/video named <filename>\n"
else
	echo "run.sh: Not a valid command "
	echo -e "\nsee 'run.sh -help' to know more!\n"
fi
