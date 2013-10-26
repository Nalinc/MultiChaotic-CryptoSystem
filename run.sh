if [ "$1" == "" ];
then
	./main
	gnuplot ./GNUPlot/*.gpl 
	eog img_arnold.png

elif [ "$1" == "-p" -a "$2" == "arnold" ];
then
	gnuplot ./GNUPlot/arnold_plot.gpl 
	eog img_arnold.png

elif [ "$1" == "-p" -a "$2" == "rossler" ];
then
	gnuplot ./GNUPlot/rossler_plot.gpl 
	eog img_rossler.png

else
   echo "err..Invalid Parameter"
   
fi
