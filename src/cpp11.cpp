// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// stat_functions.cpp
double ks_stat_presort(doubles joint, logicals labs, double power, double na);
extern "C" SEXP _twosamples_ks_stat_presort(SEXP joint, SEXP labs, SEXP power, SEXP na) {
  BEGIN_CPP11
    return cpp11::as_sexp(ks_stat_presort(cpp11::as_cpp<cpp11::decay_t<doubles>>(joint), cpp11::as_cpp<cpp11::decay_t<logicals>>(labs), cpp11::as_cpp<cpp11::decay_t<double>>(power), cpp11::as_cpp<cpp11::decay_t<double>>(na)));
  END_CPP11
}
// stat_functions.cpp
double kuiper_stat_presort(doubles joint, logicals labs, double power, double na);
extern "C" SEXP _twosamples_kuiper_stat_presort(SEXP joint, SEXP labs, SEXP power, SEXP na) {
  BEGIN_CPP11
    return cpp11::as_sexp(kuiper_stat_presort(cpp11::as_cpp<cpp11::decay_t<doubles>>(joint), cpp11::as_cpp<cpp11::decay_t<logicals>>(labs), cpp11::as_cpp<cpp11::decay_t<double>>(power), cpp11::as_cpp<cpp11::decay_t<double>>(na)));
  END_CPP11
}
// stat_functions.cpp
double cvm_stat_presort(doubles joint, logicals labs, double power, double na);
extern "C" SEXP _twosamples_cvm_stat_presort(SEXP joint, SEXP labs, SEXP power, SEXP na) {
  BEGIN_CPP11
    return cpp11::as_sexp(cvm_stat_presort(cpp11::as_cpp<cpp11::decay_t<doubles>>(joint), cpp11::as_cpp<cpp11::decay_t<logicals>>(labs), cpp11::as_cpp<cpp11::decay_t<double>>(power), cpp11::as_cpp<cpp11::decay_t<double>>(na)));
  END_CPP11
}
// stat_functions.cpp
double ad_stat_presort(doubles joint, logicals labs, double power, double na);
extern "C" SEXP _twosamples_ad_stat_presort(SEXP joint, SEXP labs, SEXP power, SEXP na) {
  BEGIN_CPP11
    return cpp11::as_sexp(ad_stat_presort(cpp11::as_cpp<cpp11::decay_t<doubles>>(joint), cpp11::as_cpp<cpp11::decay_t<logicals>>(labs), cpp11::as_cpp<cpp11::decay_t<double>>(power), cpp11::as_cpp<cpp11::decay_t<double>>(na)));
  END_CPP11
}
// stat_functions.cpp
double wass_stat_presort(doubles joint, logicals labs, double power, double na);
extern "C" SEXP _twosamples_wass_stat_presort(SEXP joint, SEXP labs, SEXP power, SEXP na) {
  BEGIN_CPP11
    return cpp11::as_sexp(wass_stat_presort(cpp11::as_cpp<cpp11::decay_t<doubles>>(joint), cpp11::as_cpp<cpp11::decay_t<logicals>>(labs), cpp11::as_cpp<cpp11::decay_t<double>>(power), cpp11::as_cpp<cpp11::decay_t<double>>(na)));
  END_CPP11
}
// stat_functions.cpp
double dts_stat_presort(doubles joint, logicals labs, double power, double na);
extern "C" SEXP _twosamples_dts_stat_presort(SEXP joint, SEXP labs, SEXP power, SEXP na) {
  BEGIN_CPP11
    return cpp11::as_sexp(dts_stat_presort(cpp11::as_cpp<cpp11::decay_t<doubles>>(joint), cpp11::as_cpp<cpp11::decay_t<logicals>>(labs), cpp11::as_cpp<cpp11::decay_t<double>>(power), cpp11::as_cpp<cpp11::decay_t<double>>(na)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_twosamples_ad_stat_presort",     (DL_FUNC) &_twosamples_ad_stat_presort,     4},
    {"_twosamples_cvm_stat_presort",    (DL_FUNC) &_twosamples_cvm_stat_presort,    4},
    {"_twosamples_dts_stat_presort",    (DL_FUNC) &_twosamples_dts_stat_presort,    4},
    {"_twosamples_ks_stat_presort",     (DL_FUNC) &_twosamples_ks_stat_presort,     4},
    {"_twosamples_kuiper_stat_presort", (DL_FUNC) &_twosamples_kuiper_stat_presort, 4},
    {"_twosamples_wass_stat_presort",   (DL_FUNC) &_twosamples_wass_stat_presort,   4},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_twosamples(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
