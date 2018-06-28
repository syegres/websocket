// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// wsCreate
SEXP wsCreate(std::string uri, Rcpp::Function onMessage, Rcpp::Function onOpen, Rcpp::Function onClose, Rcpp::Function onFail, Rcpp::Nullable<Rcpp::CharacterVector> accessLogChannels, Rcpp::Nullable<Rcpp::CharacterVector> errorLogChannels);
RcppExport SEXP _websocket_wsCreate(SEXP uriSEXP, SEXP onMessageSEXP, SEXP onOpenSEXP, SEXP onCloseSEXP, SEXP onFailSEXP, SEXP accessLogChannelsSEXP, SEXP errorLogChannelsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type uri(uriSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onMessage(onMessageSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onOpen(onOpenSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onClose(onCloseSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onFail(onFailSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type accessLogChannels(accessLogChannelsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type errorLogChannels(errorLogChannelsSEXP);
    rcpp_result_gen = Rcpp::wrap(wsCreate(uri, onMessage, onOpen, onClose, onFail, accessLogChannels, errorLogChannels));
    return rcpp_result_gen;
END_RCPP
}
// wsAppendHeader
void wsAppendHeader(SEXP client_xptr, std::string key, std::string value);
RcppExport SEXP _websocket_wsAppendHeader(SEXP client_xptrSEXP, SEXP keySEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type client_xptr(client_xptrSEXP);
    Rcpp::traits::input_parameter< std::string >::type key(keySEXP);
    Rcpp::traits::input_parameter< std::string >::type value(valueSEXP);
    wsAppendHeader(client_xptr, key, value);
    return R_NilValue;
END_RCPP
}
// wsConnect
void wsConnect(SEXP client_xptr);
RcppExport SEXP _websocket_wsConnect(SEXP client_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type client_xptr(client_xptrSEXP);
    wsConnect(client_xptr);
    return R_NilValue;
END_RCPP
}
// wsRestart
void wsRestart(SEXP client_xptr);
RcppExport SEXP _websocket_wsRestart(SEXP client_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type client_xptr(client_xptrSEXP);
    wsRestart(client_xptr);
    return R_NilValue;
END_RCPP
}
// wsPoll
void wsPoll(SEXP client_xptr);
RcppExport SEXP _websocket_wsPoll(SEXP client_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type client_xptr(client_xptrSEXP);
    wsPoll(client_xptr);
    return R_NilValue;
END_RCPP
}
// wsSend
void wsSend(SEXP client_xptr, SEXP msg);
RcppExport SEXP _websocket_wsSend(SEXP client_xptrSEXP, SEXP msgSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type client_xptr(client_xptrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type msg(msgSEXP);
    wsSend(client_xptr, msg);
    return R_NilValue;
END_RCPP
}
// wsReset
void wsReset(SEXP client_xptr);
RcppExport SEXP _websocket_wsReset(SEXP client_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type client_xptr(client_xptrSEXP);
    wsReset(client_xptr);
    return R_NilValue;
END_RCPP
}
// wsClose
void wsClose(SEXP client_xptr);
RcppExport SEXP _websocket_wsClose(SEXP client_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type client_xptr(client_xptrSEXP);
    wsClose(client_xptr);
    return R_NilValue;
END_RCPP
}
// wsStopped
bool wsStopped(SEXP client_xptr);
RcppExport SEXP _websocket_wsStopped(SEXP client_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type client_xptr(client_xptrSEXP);
    rcpp_result_gen = Rcpp::wrap(wsStopped(client_xptr));
    return rcpp_result_gen;
END_RCPP
}
// wsState
std::string wsState(SEXP client_xptr);
RcppExport SEXP _websocket_wsState(SEXP client_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type client_xptr(client_xptrSEXP);
    rcpp_result_gen = Rcpp::wrap(wsState(client_xptr));
    return rcpp_result_gen;
END_RCPP
}
// wsUpdateLogChannels
void wsUpdateLogChannels(SEXP client_xptr, std::string accessOrError, std::string setOrClear, Rcpp::Nullable<Rcpp::CharacterVector> logChannels);
RcppExport SEXP _websocket_wsUpdateLogChannels(SEXP client_xptrSEXP, SEXP accessOrErrorSEXP, SEXP setOrClearSEXP, SEXP logChannelsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type client_xptr(client_xptrSEXP);
    Rcpp::traits::input_parameter< std::string >::type accessOrError(accessOrErrorSEXP);
    Rcpp::traits::input_parameter< std::string >::type setOrClear(setOrClearSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type logChannels(logChannelsSEXP);
    wsUpdateLogChannels(client_xptr, accessOrError, setOrClear, logChannels);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_websocket_wsCreate", (DL_FUNC) &_websocket_wsCreate, 7},
    {"_websocket_wsAppendHeader", (DL_FUNC) &_websocket_wsAppendHeader, 3},
    {"_websocket_wsConnect", (DL_FUNC) &_websocket_wsConnect, 1},
    {"_websocket_wsRestart", (DL_FUNC) &_websocket_wsRestart, 1},
    {"_websocket_wsPoll", (DL_FUNC) &_websocket_wsPoll, 1},
    {"_websocket_wsSend", (DL_FUNC) &_websocket_wsSend, 2},
    {"_websocket_wsReset", (DL_FUNC) &_websocket_wsReset, 1},
    {"_websocket_wsClose", (DL_FUNC) &_websocket_wsClose, 1},
    {"_websocket_wsStopped", (DL_FUNC) &_websocket_wsStopped, 1},
    {"_websocket_wsState", (DL_FUNC) &_websocket_wsState, 1},
    {"_websocket_wsUpdateLogChannels", (DL_FUNC) &_websocket_wsUpdateLogChannels, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_websocket(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
