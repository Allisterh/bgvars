// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// bgvaralg
Rcpp::List bgvaralg(Rcpp::List object);
RcppExport SEXP _bgvars_bgvaralg(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(bgvaralg(object));
    return rcpp_result_gen;
END_RCPP
}
// bgvartvpalg
Rcpp::List bgvartvpalg(Rcpp::List object);
RcppExport SEXP _bgvars_bgvartvpalg(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(bgvartvpalg(object));
    return rcpp_result_gen;
END_RCPP
}
// bgvecalg
Rcpp::List bgvecalg(Rcpp::List object);
RcppExport SEXP _bgvars_bgvecalg(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(bgvecalg(object));
    return rcpp_result_gen;
END_RCPP
}
// bgvectvpalg
Rcpp::List bgvectvpalg(Rcpp::List object);
RcppExport SEXP _bgvars_bgvectvpalg(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(bgvectvpalg(object));
    return rcpp_result_gen;
END_RCPP
}
// gir
arma::mat gir(Rcpp::List A, int h, int impulse, int response);
RcppExport SEXP _bgvars_gir(SEXP ASEXP, SEXP hSEXP, SEXP impulseSEXP, SEXP responseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< int >::type impulse(impulseSEXP);
    Rcpp::traits::input_parameter< int >::type response(responseSEXP);
    rcpp_result_gen = Rcpp::wrap(gir(A, h, impulse, response));
    return rcpp_result_gen;
END_RCPP
}
// ir
arma::vec ir(Rcpp::List A, int h, std::string type, int impulse, int response);
RcppExport SEXP _bgvars_ir(SEXP ASEXP, SEXP hSEXP, SEXP typeSEXP, SEXP impulseSEXP, SEXP responseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    Rcpp::traits::input_parameter< int >::type impulse(impulseSEXP);
    Rcpp::traits::input_parameter< int >::type response(responseSEXP);
    rcpp_result_gen = Rcpp::wrap(ir(A, h, type, impulse, response));
    return rcpp_result_gen;
END_RCPP
}
// vardecomp
arma::mat vardecomp(Rcpp::List A, int h, int response);
RcppExport SEXP _bgvars_vardecomp(SEXP ASEXP, SEXP hSEXP, SEXP responseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< int >::type response(responseSEXP);
    rcpp_result_gen = Rcpp::wrap(vardecomp(A, h, response));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bgvars_bgvaralg", (DL_FUNC) &_bgvars_bgvaralg, 1},
    {"_bgvars_bgvartvpalg", (DL_FUNC) &_bgvars_bgvartvpalg, 1},
    {"_bgvars_bgvecalg", (DL_FUNC) &_bgvars_bgvecalg, 1},
    {"_bgvars_bgvectvpalg", (DL_FUNC) &_bgvars_bgvectvpalg, 1},
    {"_bgvars_gir", (DL_FUNC) &_bgvars_gir, 4},
    {"_bgvars_ir", (DL_FUNC) &_bgvars_ir, 5},
    {"_bgvars_vardecomp", (DL_FUNC) &_bgvars_vardecomp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_bgvars(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
