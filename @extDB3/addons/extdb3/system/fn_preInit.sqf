diag_log "---------------------------------------------------------------------";
diag_log "---------------------------------------------------------------------";
private  _result = "extDB3" callExtension "9:VERSION";
if (_result == "") then
{
  diag_log "extDB3 Failed to Load, Check Requirements @ https://github.com/SteezCram/extDB3/wiki/Instalation";
  diag_log "";
  diag_log "If you are running this on a client, Battleye will random block extensions. Try Disable Battleye";
  extDB3_var_loaded = compileFinal "false";
} else {
  diag_log "extDB3 Loaded";
  extDB3_var_loaded = compileFinal "true";
};
diag_log "---------------------------------------------------------------------";
diag_log "---------------------------------------------------------------------";
