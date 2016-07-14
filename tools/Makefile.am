AM_CFLAGS = $(curl_CFLAGS) $(zlib_CFLAGS) $(crippy_CFLAGS) -I$(top_srcdir)/include
AM_LDFLAGS = $(curl_LIBS) $(zlib_LIBS) $(crippy_LIBS)

bin_PROGRAMS = partialzip
partialzip_SOURCES = partialzip.c
partialzip_CFLAGS = $(AM_CFLAGS)
partialzip_LDFLAGS = $(AM_LDFLAGS)
partialzip_LDADD = $(top_builddir)/src/libpartialzip-1.0.la
