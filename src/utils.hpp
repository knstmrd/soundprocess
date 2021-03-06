#ifndef SP_UTILS_HPP
#define SP_UTILS_HPP

#include <armadillo>
#include <iostream>
#include <string>
#include <vector>
#include "AudioFile.h"

AudioFile<double> load_audio(const std::string &filename);

std::vector<arma::vec> convert_audio(const AudioFile<double> &audio_file);

AudioFile<double> convert_audio(const std::vector<arma::vec> &audio, unsigned int sample_rate=44100, unsigned int bit_depth=16);

void write_audio(const std::vector<arma::vec> &audio, const std::string &filename, unsigned int sample_rate=44100, unsigned int bit_depth=16);

void write_audio(AudioFile<double> &audio_file, const std::string &filename);

void pad_audio(std::vector<arma::vec> &audio, unsigned int n_zeros, bool end=true);

#endif
