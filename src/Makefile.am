AM_CFLAGS = $(zlib_CFLAGS) $(curl_CFLAGS) -I$(top_srcdir)/include
AM_LDFLAGS = $(zlib_LIBS) $(curl_LIBS)

lib_LTLIBRARIES = libpartialzip-1.0.la
libpartialzip_1_0_la_CFLAGS = $(AM_CFLAGS)
libpartialzip_1_0_la_LDFLAGS = $(AM_LDFLAGS)
libpartialzip_1_0_la_SOURCES = libpartialzip.c