#-----------------------------------------------------------------------------#
# Makefile.am for w_scan-20090524; generated by ./bootstrap.sh
# please send bug reports to http://wirbel.htpc-forum.de
#
#
# Simple MPEG/DVB parser to achieve network/service information without initial
# tuning data.
#
# The project's page is http://wirbel.htpc-forum.de/w_scan/index2.html
#-----------------------------------------------------------------------------#

include Makefile.add

AUTOMAKE_OPTIONS	= dist-bzip2 no-dist-gzip
bin_PROGRAMS	= w_scan
w_scan_SOURCES	= atsc_psip_section.c atsc_psip_section.h config.h countries.c countries.h descriptors.c
w_scan_SOURCES += descriptors.h diseqc.c diseqc.h dump-dvbscan.c dump-dvbscan.h
w_scan_SOURCES += dump-vdr.c dump-vdr.h dump-xine.c dump-xine.h dump-mplayer.c dump-mplayer.h dump-vlc-m3u.c
w_scan_SOURCES += dump-vlc-m3u.h dvbscan.c dvbscan.h extended_frontend.h lnb.c lnb.h parse-dvbscan.c
w_scan_SOURCES += parse-dvbscan.h satellites.c satellites.h scan.c scan.h section.c section.h si_types.h
w_scan_SOURCES += tools.h tools.c emulate.c emulate.h dump-xml.h dump-xml.c
w_scan_SOURCES += version.h iconv_codes.c iconv_codes.h char-coding.c char-coding.h satellites.dat
bin_SCRIPTS	= 
dist_man_MANS	= doc/w_scan.1
EXTRA_DIST	= doc

AM_LDFLAGS =  -lrt
AM_CFLAGS = -Wall -Wextra -Wno-comment -Wswitch-default -Wno-unused-parameter
