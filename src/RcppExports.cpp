// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/slasso.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// lbfgsOptim
Rcpp::NumericVector lbfgsOptim(SEXP call_eval, SEXP call_grad, Rcpp::NumericVector vars, SEXP env, int N, int invisible, int m, lbfgsfloatval_t epsilon, int past, lbfgsfloatval_t delta, int max_iterations, int linesearch, int max_linesearch, lbfgsfloatval_t min_step, lbfgsfloatval_t max_step, lbfgsfloatval_t ftol, lbfgsfloatval_t wolfe, lbfgsfloatval_t gtol, lbfgsfloatval_t xtol, lbfgsfloatval_t lambda, Rcpp::NumericVector weight, int orthantwise_start, int orthantwise_end);
RcppExport SEXP _slasso_lbfgsOptim(SEXP call_evalSEXP, SEXP call_gradSEXP, SEXP varsSEXP, SEXP envSEXP, SEXP NSEXP, SEXP invisibleSEXP, SEXP mSEXP, SEXP epsilonSEXP, SEXP pastSEXP, SEXP deltaSEXP, SEXP max_iterationsSEXP, SEXP linesearchSEXP, SEXP max_linesearchSEXP, SEXP min_stepSEXP, SEXP max_stepSEXP, SEXP ftolSEXP, SEXP wolfeSEXP, SEXP gtolSEXP, SEXP xtolSEXP, SEXP lambdaSEXP, SEXP weightSEXP, SEXP orthantwise_startSEXP, SEXP orthantwise_endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type call_eval(call_evalSEXP);
    Rcpp::traits::input_parameter< SEXP >::type call_grad(call_gradSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type vars(varsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type env(envSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type invisible(invisibleSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type past(pastSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< int >::type max_iterations(max_iterationsSEXP);
    Rcpp::traits::input_parameter< int >::type linesearch(linesearchSEXP);
    Rcpp::traits::input_parameter< int >::type max_linesearch(max_linesearchSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type min_step(min_stepSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type max_step(max_stepSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type ftol(ftolSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type wolfe(wolfeSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type gtol(gtolSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type xtol(xtolSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< int >::type orthantwise_start(orthantwise_startSEXP);
    Rcpp::traits::input_parameter< int >::type orthantwise_end(orthantwise_endSEXP);
    rcpp_result_gen = Rcpp::wrap(lbfgsOptim(call_eval, call_grad, vars, env, N, invisible, m, epsilon, past, delta, max_iterations, linesearch, max_linesearch, min_step, max_step, ftol, wolfe, gtol, xtol, lambda, weight, orthantwise_start, orthantwise_end));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_slasso_lbfgsOptim", (DL_FUNC) &_slasso_lbfgsOptim, 23},
    {NULL, NULL, 0}
};

RcppExport void R_init_slasso(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
