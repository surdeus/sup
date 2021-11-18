<mkconfig
<$MKINCDIR/std/cbuild
clean:
	rm -f $TARG $OFILES
install :V: $TARG
	mkdir -p $EXEDIR
	cp -f $TARG $EXEDIR/$PROGNAME
	sudo chown root $EXEDIR/$PROGNAME
	sudo chgrp root $EXEDIR/$PROGNAME
	sudo chmod 4111 $EXEDIR/$PROGNAME
uninstall :V:
	rm -f $EXEDIR/$PROGNAME
