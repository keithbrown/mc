.// SKB o2m removal-/*----------------------------------------------------------------------------
.// SKB o2m removal- * File:  ${te_c.module_file}.${te_file.src_file_ext}
.// SKB o2m removal- *
.// SKB o2m removal- * UML Component Port Messages
.// SKB o2m removal- * Component/Module Name:  ${te_c.Name}
.// SKB o2m removal- *
.// SKB o2m removal- * ${te_copyright.body}
.// SKB o2m removal- *--------------------------------------------------------------------------*/
.// SKB o2m removal-.if ( "" != te_c.Descrip )
.// SKB o2m removal-/*
.// SKB o2m removal- ${te_c.Descrip}
.// SKB o2m removal- */
.// SKB o2m removal-.end if
.// SKB o2m removal-
.// SKB o2m removal-#include "${te_file.types}.${te_file.hdr_file_ext}"
.// SKB o2m removal-${include_files}\
.// SKB o2m removal-.if ( te_c.internal_behavior )
.// SKB o2m removal-#include "${te_c.classes_file}.${te_file.hdr_file_ext}"
.// SKB o2m removal-  .if ( ( te_sys.AUTOSAR ) or ( te_sys.VFB ) )
.// SKB o2m removal-#ifdef ${te_thread.AUTOSAR_enabled}
.// SKB o2m removal-#include "Rte_co_${te_c.Name}.${te_file.hdr_file_ext}"
.// SKB o2m removal-    .if ( empty te_class )
.// SKB o2m removal-#define MC3020_AUTOSAR_RUNNABLE_NUMBER 0
.// SKB o2m removal-    .else
.// SKB o2m removal-#define MC3020_AUTOSAR_RUNNABLE_NUMBER ${te_class.Task}
.// SKB o2m removal-    .end if
.// SKB o2m removal-static void* cache_Rte_self;
.// SKB o2m removal-
.// SKB o2m removal-/*
.// SKB o2m removal- * This is the AUTOSAR linkage for the ${te_c.Name} component timer.
.// SKB o2m removal- */
.// SKB o2m removal-FUNC(void, RTE_APPL_CODE)
.// SKB o2m removal-ib_${te_c.Name}_ru_${te_c.Name}Timer( Rte_Instance self )
.// SKB o2m removal-{
.// SKB o2m removal-  u1_t t = MC3020_AUTOSAR_RUNNABLE_NUMBER;
.// SKB o2m removal-  #if ${te_tim.max_timers} > 0
.// SKB o2m removal-  if ( 0 == MC3020_AUTOSAR_RUNNABLE_NUMBER ) {
.// SKB o2m removal-    TIM_update();
.// SKB o2m removal-  }
.// SKB o2m removal-  #endif
.// SKB o2m removal-  ooa_loop( &t );
.// SKB o2m removal-}
.// SKB o2m removal-
.// SKB o2m removal-FUNC(void, RTE_APPL_CODE)
.// SKB o2m removal-ib_${te_c.Name}_ru_${te_c.Name}_Initialize( Rte_Instance self )
.// SKB o2m removal-{
.// SKB o2m removal-  /* Initialize the system.  */
.// SKB o2m removal-  cache_Rte_self = (void *) self;
.// SKB o2m removal-}
.// SKB o2m removal-
.// SKB o2m removal-
.// SKB o2m removal-#endif
.// SKB o2m removal-  .end if
.// SKB o2m removal-.end if
.// SKB o2m removal-${message_definitions}
.if ( te_c.internal_behavior )
.include "${te_file.arc_path}/t.domain.functions.c"
.// SKB o2m removal-.include "${te_file.arc_path}/t.domain_init.c"
.end if
.// SKB o2m removal-.if ( "TLM" == te_sys.SystemCPortsType )
.// SKB o2m removal-#if 0
.// SKB o2m removal-/* disabled by default */
.// SKB o2m removal-  .include "${te_file.arc_path}/t.component.ports.isr.c"
.// SKB o2m removal-${portisr}\
.// SKB o2m removal-}
.// SKB o2m removal-#endif
.// SKB o2m removal-.end if
