.//============================================================================
.// External Entity bridge process skeleton generator.
.//============================================================================
.//
.//
.//
.// SKB o2m removal-.invoke include_files = ClassAddIncludeFiles( te_c, false )
.// SKB o2m removal-.for each te_ee in te_ees
.// SKB o2m removal-  .select many te_brgs related by te_ee->S_EE[R2020]->S_BRG[R19]->TE_BRG[R2025]
.// SKB o2m removal-    .//
.// SKB o2m removal-    .// Generate declaration file.
.// SKB o2m removal-    .// Note: The order of these is important.  The body is generated first
.// SKB o2m removal-    .//       to ensure that the data types are marked as used.
.// SKB o2m removal-    .invoke ee_body = TE_BRG_CreateDeclarations( te_ee, te_brgs )
.// SKB o2m removal-    .invoke includes = AddBridgeIncludeFiles( te_sys, te_ee, true )
.// SKB o2m removal-    .include "${arc_path}/t.ee.h"
.// SKB o2m removal-    .emit to file "${te_file.system_include_path}/${te_ee.Include_File}"
.// SKB o2m removal-    .//
.// SKB o2m removal-    .// Generate skeleton implementation file.
.// SKB o2m removal-    .invoke ee_body = TE_BRG_CreateDefinition( te_sys, te_ee, te_brgs )
.// SKB o2m removal-    .invoke includes = AddBridgeIncludeFiles( te_sys, te_ee, false )
.// SKB o2m removal-    .include "${arc_path}/t.ee.c"
.// SKB o2m removal-    .emit to file "${te_file.system_source_path}/${te_ee.file}.${te_file.src_file_ext}"
.// SKB o2m removal-.end for
.//
