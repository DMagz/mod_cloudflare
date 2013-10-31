#define MOD_QOS_NAME "mod_qos.c"

typedef struct {
  unsigned long ip;
} qs_conn_ctx;

typedef struct {
  qs_conn_ctx *cconf;
} qs_conn_base_ctx;

