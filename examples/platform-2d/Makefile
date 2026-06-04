APPNAME=platform-2d

all: $(APPNAME).cia

icon.icn: assets/icon.png
	bannertool makesmdh \
		-s "$(APPNAME)" \
		-l "$(APPNAME)" \
		-p "3DS-SDK" \
		-i assets/icon.png \
		-o icon.icn

$(APPNAME).cia: icon.icn
	makerom \
		-f cia \
		-o $(APPNAME).cia \
		-icon icon.icn

clean:
	rm -f *.icn *.cia
