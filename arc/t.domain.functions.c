.//
.if ( te_sys.InstanceLoading )
extern void mark_pass( c_t * );
#define T_T(x) ( 0 == x ) ? s : strcat(s,x)
.end if
.// SKB o2m removal-/*
.// SKB o2m removal- * UML Domain Functions (Synchronous Services)
.// SKB o2m removal- */
.if ( not_empty ilb_te_sync )
#include "${te_file.ilb}.${te_file.hdr_file_ext}"
.end if
${function_definitions}
.//
