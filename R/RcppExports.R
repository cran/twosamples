# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#' Order function in C++ using the STL
#'
#' Simply finds the order of a vector in c++. Mostly for internals.
#' @param x numeric vector
#' @return same length vector of integers representing order of input vector
#' @examples
#' vec = c(1,4,3,2)
#' order_stl(vec)
#' @export
order_stl <- function(x) {
    .Call(`_twosamples_order_stl`, x)
}

#' @describeIn ks_test Kolmogorov-Smirnov test statistic
#' @export
ks_stat <- function(a, b, power = 1.0) {
    .Call(`_twosamples_ks_stat`, a, b, power)
}

#' @describeIn kuiper_test  Kuiper Test statistic
#' @export
kuiper_stat <- function(a, b, power = 1.0) {
    .Call(`_twosamples_kuiper_stat`, a, b, power)
}

#' @describeIn cvm_test  Cramer-Von Mises Test statistic
#' @export
cvm_stat <- function(a, b, power = 2.0) {
    .Call(`_twosamples_cvm_stat`, a, b, power)
}

#' @describeIn ad_test  Anderson-Darling Test statistic
#' @export
ad_stat <- function(a, b, power = 2.0) {
    .Call(`_twosamples_ad_stat`, a, b, power)
}

#' @describeIn wass_test Wasserstein metric between two ECDFs
#' @export
wass_stat <- function(a, b, power = 1.0) {
    .Call(`_twosamples_wass_stat`, a, b, power)
}

#' @describeIn two_sample Test statistic based on a weighted area between ECDFs
#' @export
dts_stat <- function(a, b, power = 1.0) {
    .Call(`_twosamples_dts_stat`, a, b, power)
}

