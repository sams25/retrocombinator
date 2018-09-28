// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_simulate_without_flags_random
void rcpp_simulate_without_flags_random(size_t num_seq, size_t seq_length, std::string point_mutation_model, size_t num_jumps, double timestep, double burst_probability, double burst_mean, size_t max_active_copies, double recomb_mean, std::string file_out, size_t num_out_tags, size_t num_out_init, size_t num_out_seqs, size_t num_out_pair, bool to_randomise, bool to_seed, size_t seed, size_t sequence_numbering, size_t family_numbering);
RcppExport SEXP _rcombinator_rcpp_simulate_without_flags_random(SEXP num_seqSEXP, SEXP seq_lengthSEXP, SEXP point_mutation_modelSEXP, SEXP num_jumpsSEXP, SEXP timestepSEXP, SEXP burst_probabilitySEXP, SEXP burst_meanSEXP, SEXP max_active_copiesSEXP, SEXP recomb_meanSEXP, SEXP file_outSEXP, SEXP num_out_tagsSEXP, SEXP num_out_initSEXP, SEXP num_out_seqsSEXP, SEXP num_out_pairSEXP, SEXP to_randomiseSEXP, SEXP to_seedSEXP, SEXP seedSEXP, SEXP sequence_numberingSEXP, SEXP family_numberingSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< size_t >::type num_seq(num_seqSEXP);
    Rcpp::traits::input_parameter< size_t >::type seq_length(seq_lengthSEXP);
    Rcpp::traits::input_parameter< std::string >::type point_mutation_model(point_mutation_modelSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_jumps(num_jumpsSEXP);
    Rcpp::traits::input_parameter< double >::type timestep(timestepSEXP);
    Rcpp::traits::input_parameter< double >::type burst_probability(burst_probabilitySEXP);
    Rcpp::traits::input_parameter< double >::type burst_mean(burst_meanSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_active_copies(max_active_copiesSEXP);
    Rcpp::traits::input_parameter< double >::type recomb_mean(recomb_meanSEXP);
    Rcpp::traits::input_parameter< std::string >::type file_out(file_outSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_out_tags(num_out_tagsSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_out_init(num_out_initSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_out_seqs(num_out_seqsSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_out_pair(num_out_pairSEXP);
    Rcpp::traits::input_parameter< bool >::type to_randomise(to_randomiseSEXP);
    Rcpp::traits::input_parameter< bool >::type to_seed(to_seedSEXP);
    Rcpp::traits::input_parameter< size_t >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< size_t >::type sequence_numbering(sequence_numberingSEXP);
    Rcpp::traits::input_parameter< size_t >::type family_numbering(family_numberingSEXP);
    rcpp_simulate_without_flags_random(num_seq, seq_length, point_mutation_model, num_jumps, timestep, burst_probability, burst_mean, max_active_copies, recomb_mean, file_out, num_out_tags, num_out_init, num_out_seqs, num_out_pair, to_randomise, to_seed, seed, sequence_numbering, family_numbering);
    return R_NilValue;
END_RCPP
}
// rcpp_simulate_with_flags_random
void rcpp_simulate_with_flags_random(size_t num_seq, size_t seq_length, std::string point_mutation_model, size_t num_sensitive_posns, double inactive_probability, size_t num_jumps, double timestep, double burst_probability, double burst_mean, size_t max_active_copies, size_t max_total_copies, double recomb_mean, double selection_threshold, double fam_proportion, double fam_percentage, std::string file_out, size_t num_out_tags, size_t num_out_init, size_t num_out_seqs, size_t num_out_pair, bool to_randomise, bool to_seed, size_t seed, size_t sequence_numbering, size_t family_numbering);
RcppExport SEXP _rcombinator_rcpp_simulate_with_flags_random(SEXP num_seqSEXP, SEXP seq_lengthSEXP, SEXP point_mutation_modelSEXP, SEXP num_sensitive_posnsSEXP, SEXP inactive_probabilitySEXP, SEXP num_jumpsSEXP, SEXP timestepSEXP, SEXP burst_probabilitySEXP, SEXP burst_meanSEXP, SEXP max_active_copiesSEXP, SEXP max_total_copiesSEXP, SEXP recomb_meanSEXP, SEXP selection_thresholdSEXP, SEXP fam_proportionSEXP, SEXP fam_percentageSEXP, SEXP file_outSEXP, SEXP num_out_tagsSEXP, SEXP num_out_initSEXP, SEXP num_out_seqsSEXP, SEXP num_out_pairSEXP, SEXP to_randomiseSEXP, SEXP to_seedSEXP, SEXP seedSEXP, SEXP sequence_numberingSEXP, SEXP family_numberingSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< size_t >::type num_seq(num_seqSEXP);
    Rcpp::traits::input_parameter< size_t >::type seq_length(seq_lengthSEXP);
    Rcpp::traits::input_parameter< std::string >::type point_mutation_model(point_mutation_modelSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_sensitive_posns(num_sensitive_posnsSEXP);
    Rcpp::traits::input_parameter< double >::type inactive_probability(inactive_probabilitySEXP);
    Rcpp::traits::input_parameter< size_t >::type num_jumps(num_jumpsSEXP);
    Rcpp::traits::input_parameter< double >::type timestep(timestepSEXP);
    Rcpp::traits::input_parameter< double >::type burst_probability(burst_probabilitySEXP);
    Rcpp::traits::input_parameter< double >::type burst_mean(burst_meanSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_active_copies(max_active_copiesSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_total_copies(max_total_copiesSEXP);
    Rcpp::traits::input_parameter< double >::type recomb_mean(recomb_meanSEXP);
    Rcpp::traits::input_parameter< double >::type selection_threshold(selection_thresholdSEXP);
    Rcpp::traits::input_parameter< double >::type fam_proportion(fam_proportionSEXP);
    Rcpp::traits::input_parameter< double >::type fam_percentage(fam_percentageSEXP);
    Rcpp::traits::input_parameter< std::string >::type file_out(file_outSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_out_tags(num_out_tagsSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_out_init(num_out_initSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_out_seqs(num_out_seqsSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_out_pair(num_out_pairSEXP);
    Rcpp::traits::input_parameter< bool >::type to_randomise(to_randomiseSEXP);
    Rcpp::traits::input_parameter< bool >::type to_seed(to_seedSEXP);
    Rcpp::traits::input_parameter< size_t >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< size_t >::type sequence_numbering(sequence_numberingSEXP);
    Rcpp::traits::input_parameter< size_t >::type family_numbering(family_numberingSEXP);
    rcpp_simulate_with_flags_random(num_seq, seq_length, point_mutation_model, num_sensitive_posns, inactive_probability, num_jumps, timestep, burst_probability, burst_mean, max_active_copies, max_total_copies, recomb_mean, selection_threshold, fam_proportion, fam_percentage, file_out, num_out_tags, num_out_init, num_out_seqs, num_out_pair, to_randomise, to_seed, seed, sequence_numbering, family_numbering);
    return R_NilValue;
END_RCPP
}
// rcpp_simulate_without_flags_specified
void rcpp_simulate_without_flags_specified(std::vector<std::string> init_seqs, size_t init_seq_index, std::string point_mutation_model, size_t num_jumps, double timestep, double burst_probability, double burst_mean, size_t max_active_copies, double recomb_mean, std::string file_out, size_t num_out_tags, size_t num_out_init, size_t num_out_seqs, size_t num_out_pair, bool to_randomise, bool to_seed, size_t seed, size_t sequence_numbering, size_t family_numbering);
RcppExport SEXP _rcombinator_rcpp_simulate_without_flags_specified(SEXP init_seqsSEXP, SEXP init_seq_indexSEXP, SEXP point_mutation_modelSEXP, SEXP num_jumpsSEXP, SEXP timestepSEXP, SEXP burst_probabilitySEXP, SEXP burst_meanSEXP, SEXP max_active_copiesSEXP, SEXP recomb_meanSEXP, SEXP file_outSEXP, SEXP num_out_tagsSEXP, SEXP num_out_initSEXP, SEXP num_out_seqsSEXP, SEXP num_out_pairSEXP, SEXP to_randomiseSEXP, SEXP to_seedSEXP, SEXP seedSEXP, SEXP sequence_numberingSEXP, SEXP family_numberingSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type init_seqs(init_seqsSEXP);
    Rcpp::traits::input_parameter< size_t >::type init_seq_index(init_seq_indexSEXP);
    Rcpp::traits::input_parameter< std::string >::type point_mutation_model(point_mutation_modelSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_jumps(num_jumpsSEXP);
    Rcpp::traits::input_parameter< double >::type timestep(timestepSEXP);
    Rcpp::traits::input_parameter< double >::type burst_probability(burst_probabilitySEXP);
    Rcpp::traits::input_parameter< double >::type burst_mean(burst_meanSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_active_copies(max_active_copiesSEXP);
    Rcpp::traits::input_parameter< double >::type recomb_mean(recomb_meanSEXP);
    Rcpp::traits::input_parameter< std::string >::type file_out(file_outSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_out_tags(num_out_tagsSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_out_init(num_out_initSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_out_seqs(num_out_seqsSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_out_pair(num_out_pairSEXP);
    Rcpp::traits::input_parameter< bool >::type to_randomise(to_randomiseSEXP);
    Rcpp::traits::input_parameter< bool >::type to_seed(to_seedSEXP);
    Rcpp::traits::input_parameter< size_t >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< size_t >::type sequence_numbering(sequence_numberingSEXP);
    Rcpp::traits::input_parameter< size_t >::type family_numbering(family_numberingSEXP);
    rcpp_simulate_without_flags_specified(init_seqs, init_seq_index, point_mutation_model, num_jumps, timestep, burst_probability, burst_mean, max_active_copies, recomb_mean, file_out, num_out_tags, num_out_init, num_out_seqs, num_out_pair, to_randomise, to_seed, seed, sequence_numbering, family_numbering);
    return R_NilValue;
END_RCPP
}
// rcpp_simulate_with_flags_specified
void rcpp_simulate_with_flags_specified(std::vector<std::string> init_seqs, size_t init_seq_index, std::string point_mutation_model, size_t num_sensitive_posns, double inactive_probability, size_t num_jumps, double timestep, double burst_probability, double burst_mean, size_t max_active_copies, size_t max_total_copies, double recomb_mean, double selection_threshold, double fam_proportion, double fam_percentage, std::string file_out, size_t num_out_tags, size_t num_out_init, size_t num_out_seqs, size_t num_out_pair, bool to_randomise, bool to_seed, size_t seed, size_t sequence_numbering, size_t family_numbering);
RcppExport SEXP _rcombinator_rcpp_simulate_with_flags_specified(SEXP init_seqsSEXP, SEXP init_seq_indexSEXP, SEXP point_mutation_modelSEXP, SEXP num_sensitive_posnsSEXP, SEXP inactive_probabilitySEXP, SEXP num_jumpsSEXP, SEXP timestepSEXP, SEXP burst_probabilitySEXP, SEXP burst_meanSEXP, SEXP max_active_copiesSEXP, SEXP max_total_copiesSEXP, SEXP recomb_meanSEXP, SEXP selection_thresholdSEXP, SEXP fam_proportionSEXP, SEXP fam_percentageSEXP, SEXP file_outSEXP, SEXP num_out_tagsSEXP, SEXP num_out_initSEXP, SEXP num_out_seqsSEXP, SEXP num_out_pairSEXP, SEXP to_randomiseSEXP, SEXP to_seedSEXP, SEXP seedSEXP, SEXP sequence_numberingSEXP, SEXP family_numberingSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type init_seqs(init_seqsSEXP);
    Rcpp::traits::input_parameter< size_t >::type init_seq_index(init_seq_indexSEXP);
    Rcpp::traits::input_parameter< std::string >::type point_mutation_model(point_mutation_modelSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_sensitive_posns(num_sensitive_posnsSEXP);
    Rcpp::traits::input_parameter< double >::type inactive_probability(inactive_probabilitySEXP);
    Rcpp::traits::input_parameter< size_t >::type num_jumps(num_jumpsSEXP);
    Rcpp::traits::input_parameter< double >::type timestep(timestepSEXP);
    Rcpp::traits::input_parameter< double >::type burst_probability(burst_probabilitySEXP);
    Rcpp::traits::input_parameter< double >::type burst_mean(burst_meanSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_active_copies(max_active_copiesSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_total_copies(max_total_copiesSEXP);
    Rcpp::traits::input_parameter< double >::type recomb_mean(recomb_meanSEXP);
    Rcpp::traits::input_parameter< double >::type selection_threshold(selection_thresholdSEXP);
    Rcpp::traits::input_parameter< double >::type fam_proportion(fam_proportionSEXP);
    Rcpp::traits::input_parameter< double >::type fam_percentage(fam_percentageSEXP);
    Rcpp::traits::input_parameter< std::string >::type file_out(file_outSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_out_tags(num_out_tagsSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_out_init(num_out_initSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_out_seqs(num_out_seqsSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_out_pair(num_out_pairSEXP);
    Rcpp::traits::input_parameter< bool >::type to_randomise(to_randomiseSEXP);
    Rcpp::traits::input_parameter< bool >::type to_seed(to_seedSEXP);
    Rcpp::traits::input_parameter< size_t >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< size_t >::type sequence_numbering(sequence_numberingSEXP);
    Rcpp::traits::input_parameter< size_t >::type family_numbering(family_numberingSEXP);
    rcpp_simulate_with_flags_specified(init_seqs, init_seq_index, point_mutation_model, num_sensitive_posns, inactive_probability, num_jumps, timestep, burst_probability, burst_mean, max_active_copies, max_total_copies, recomb_mean, selection_threshold, fam_proportion, fam_percentage, file_out, num_out_tags, num_out_init, num_out_seqs, num_out_pair, to_randomise, to_seed, seed, sequence_numbering, family_numbering);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rcombinator_rcpp_simulate_without_flags_random", (DL_FUNC) &_rcombinator_rcpp_simulate_without_flags_random, 19},
    {"_rcombinator_rcpp_simulate_with_flags_random", (DL_FUNC) &_rcombinator_rcpp_simulate_with_flags_random, 25},
    {"_rcombinator_rcpp_simulate_without_flags_specified", (DL_FUNC) &_rcombinator_rcpp_simulate_without_flags_specified, 19},
    {"_rcombinator_rcpp_simulate_with_flags_specified", (DL_FUNC) &_rcombinator_rcpp_simulate_with_flags_specified, 25},
    {NULL, NULL, 0}
};

RcppExport void R_init_rcombinator(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
