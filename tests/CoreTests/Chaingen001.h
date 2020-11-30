// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2017-2021 The Cycere developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once 
#include "Chaingen.h"

class gen_simple_chain_001: public test_chain_unit_base 
{
public: 
  gen_simple_chain_001();
  bool generate(std::vector<test_event_entry> &events);
  bool verify_callback_1(Quid::core& c, size_t ev_index, const std::vector<test_event_entry> &events); 
  bool verify_callback_2(Quid::core& c, size_t ev_index, const std::vector<test_event_entry> &events); 
};

class one_block: public test_chain_unit_base
{
  Quid::AccountBase alice;
public:
  one_block();
  bool generate(std::vector<test_event_entry> &events);
  bool verify_1(Quid::core& c, size_t ev_index, const std::vector<test_event_entry> &events);
};