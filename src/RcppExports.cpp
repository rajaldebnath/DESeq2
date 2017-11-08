// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// fitDisp
Rcpp::List fitDisp(SEXP ySEXP, SEXP xSEXP, SEXP mu_hatSEXP, SEXP log_alphaSEXP, SEXP log_alpha_prior_meanSEXP, SEXP log_alpha_prior_sigmasqSEXP, SEXP min_log_alphaSEXP, SEXP kappa_0SEXP, SEXP tolSEXP, SEXP maxitSEXP, SEXP usePriorSEXP, SEXP weightsSEXP, SEXP useWeightsSEXP);
RcppExport SEXP _DESeq2_fitDisp(SEXP ySEXPSEXP, SEXP xSEXPSEXP, SEXP mu_hatSEXPSEXP, SEXP log_alphaSEXPSEXP, SEXP log_alpha_prior_meanSEXPSEXP, SEXP log_alpha_prior_sigmasqSEXPSEXP, SEXP min_log_alphaSEXPSEXP, SEXP kappa_0SEXPSEXP, SEXP tolSEXPSEXP, SEXP maxitSEXPSEXP, SEXP usePriorSEXPSEXP, SEXP weightsSEXPSEXP, SEXP useWeightsSEXPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ySEXP(ySEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type xSEXP(xSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type mu_hatSEXP(mu_hatSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type log_alphaSEXP(log_alphaSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type log_alpha_prior_meanSEXP(log_alpha_prior_meanSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type log_alpha_prior_sigmasqSEXP(log_alpha_prior_sigmasqSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type min_log_alphaSEXP(min_log_alphaSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type kappa_0SEXP(kappa_0SEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type tolSEXP(tolSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type maxitSEXP(maxitSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type usePriorSEXP(usePriorSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type weightsSEXP(weightsSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type useWeightsSEXP(useWeightsSEXPSEXP);
    rcpp_result_gen = Rcpp::wrap(fitDisp(ySEXP, xSEXP, mu_hatSEXP, log_alphaSEXP, log_alpha_prior_meanSEXP, log_alpha_prior_sigmasqSEXP, min_log_alphaSEXP, kappa_0SEXP, tolSEXP, maxitSEXP, usePriorSEXP, weightsSEXP, useWeightsSEXP));
    return rcpp_result_gen;
END_RCPP
}
// fitBeta
Rcpp::List fitBeta(SEXP ySEXP, SEXP xSEXP, SEXP nfSEXP, SEXP alpha_hatSEXP, SEXP contrastSEXP, SEXP beta_matSEXP, SEXP lambdaSEXP, SEXP weightsSEXP, SEXP useWeightsSEXP, SEXP tolSEXP, SEXP maxitSEXP, SEXP useQRSEXP, SEXP minmuSEXP);
RcppExport SEXP _DESeq2_fitBeta(SEXP ySEXPSEXP, SEXP xSEXPSEXP, SEXP nfSEXPSEXP, SEXP alpha_hatSEXPSEXP, SEXP contrastSEXPSEXP, SEXP beta_matSEXPSEXP, SEXP lambdaSEXPSEXP, SEXP weightsSEXPSEXP, SEXP useWeightsSEXPSEXP, SEXP tolSEXPSEXP, SEXP maxitSEXPSEXP, SEXP useQRSEXPSEXP, SEXP minmuSEXPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ySEXP(ySEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type xSEXP(xSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nfSEXP(nfSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type alpha_hatSEXP(alpha_hatSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type contrastSEXP(contrastSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type beta_matSEXP(beta_matSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type lambdaSEXP(lambdaSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type weightsSEXP(weightsSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type useWeightsSEXP(useWeightsSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type tolSEXP(tolSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type maxitSEXP(maxitSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type useQRSEXP(useQRSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type minmuSEXP(minmuSEXPSEXP);
    rcpp_result_gen = Rcpp::wrap(fitBeta(ySEXP, xSEXP, nfSEXP, alpha_hatSEXP, contrastSEXP, beta_matSEXP, lambdaSEXP, weightsSEXP, useWeightsSEXP, tolSEXP, maxitSEXP, useQRSEXP, minmuSEXP));
    return rcpp_result_gen;
END_RCPP
}
// fitDispGrid
Rcpp::List fitDispGrid(SEXP ySEXP, SEXP xSEXP, SEXP mu_hatSEXP, SEXP disp_gridSEXP, SEXP log_alpha_prior_meanSEXP, SEXP log_alpha_prior_sigmasqSEXP, SEXP usePriorSEXP, SEXP weightsSEXP, SEXP useWeightsSEXP);
RcppExport SEXP _DESeq2_fitDispGrid(SEXP ySEXPSEXP, SEXP xSEXPSEXP, SEXP mu_hatSEXPSEXP, SEXP disp_gridSEXPSEXP, SEXP log_alpha_prior_meanSEXPSEXP, SEXP log_alpha_prior_sigmasqSEXPSEXP, SEXP usePriorSEXPSEXP, SEXP weightsSEXPSEXP, SEXP useWeightsSEXPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ySEXP(ySEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type xSEXP(xSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type mu_hatSEXP(mu_hatSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type disp_gridSEXP(disp_gridSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type log_alpha_prior_meanSEXP(log_alpha_prior_meanSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type log_alpha_prior_sigmasqSEXP(log_alpha_prior_sigmasqSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type usePriorSEXP(usePriorSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type weightsSEXP(weightsSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type useWeightsSEXP(useWeightsSEXPSEXP);
    rcpp_result_gen = Rcpp::wrap(fitDispGrid(ySEXP, xSEXP, mu_hatSEXP, disp_gridSEXP, log_alpha_prior_meanSEXP, log_alpha_prior_sigmasqSEXP, usePriorSEXP, weightsSEXP, useWeightsSEXP));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_DESeq2_fitDisp", (DL_FUNC) &_DESeq2_fitDisp, 13},
    {"_DESeq2_fitBeta", (DL_FUNC) &_DESeq2_fitBeta, 13},
    {"_DESeq2_fitDispGrid", (DL_FUNC) &_DESeq2_fitDispGrid, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_DESeq2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
