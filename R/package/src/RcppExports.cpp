// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// E_num
int E_num(NumericVector& rides);
RcppExport SEXP _eddington_E_num(SEXP ridesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type rides(ridesSEXP);
    rcpp_result_gen = Rcpp::wrap(E_num(rides));
    return rcpp_result_gen;
END_RCPP
}
// E_cum
IntegerVector E_cum(NumericVector& rides);
RcppExport SEXP _eddington_E_cum(SEXP ridesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type rides(ridesSEXP);
    rcpp_result_gen = Rcpp::wrap(E_cum(rides));
    return rcpp_result_gen;
END_RCPP
}
// E_req
List E_req(NumericVector& rides);
RcppExport SEXP _eddington_E_req(SEXP ridesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type rides(ridesSEXP);
    rcpp_result_gen = Rcpp::wrap(E_req(rides));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_eddington_E_num", (DL_FUNC) &_eddington_E_num, 1},
    {"_eddington_E_cum", (DL_FUNC) &_eddington_E_cum, 1},
    {"_eddington_E_req", (DL_FUNC) &_eddington_E_req, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_eddington(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
