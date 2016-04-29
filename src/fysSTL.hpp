// 	Author: Ruidong Dai
//	Email: ruidongd@outlook.com
//
//	Please make sure use fys namesapce when calling the mini STL
#ifndef FYSSTL_HPP
#define FYSSTL_HPP

namespace fys {

// start on April 28 2016
template <typename T> class vector {
public:
  vector();
  void push_back(const T *elemet);
  ~vector();
};

// template <typename T> class map {};
//}

#endif
