/* -*- c++ -*- */
/* 
 * Copyright 2013 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_OFDM_ALLOCATION_SRC_H
#define INCLUDED_OFDM_ALLOCATION_SRC_H

#include <ofdm/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace ofdm {

    /*!
     * \brief Source block for all control vectors, e.g., bitloading.
     * \ingroup ofdm
     *
     */
    class OFDM_API allocation_src : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<allocation_src> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of ofdm::allocation_src.
       *
       * To avoid accidental use of raw pointers, ofdm::allocation_src's
       * constructor is in a private implementation
       * class. ofdm::allocation_src::make is the public interface for
       * creating new instances.
       */
      static sptr make(int subcarriers, int data_symbols, char *address);
    };

  } // namespace ofdm
} // namespace gr

#endif /* INCLUDED_OFDM_ALLOCATION_SRC_H */
