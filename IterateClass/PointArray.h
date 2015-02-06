#ifndef POINTARRAY_H__
#define POINTARRAY_H__

#include <vector>
// based on article here
// http://www.cprogramming.com/c++11/c++11-ranged-for-loop.html

struct point
{

  float x;
  float y;
  float z;
};

// pre declare the point array class for our iterator
class PointArray;


class PArrayIter
{
public:
    PArrayIter (const PointArray* _vec, int _pos)
        : m_pos( _pos ), m_vec( _vec )
    { }

    // these three methods form the basis of an iterator for use with
    // a range-based for loop
    bool operator!= (const PArrayIter& other) const
    {
        return m_pos != other.m_pos;
    }

    // this method must be defined after the definition of PointArray
    // since it needs to use it
    point operator* () const;

    const PArrayIter& operator++ ()
    {
        ++m_pos;
        // although not strictly necessary for a range-based for loop
        // following the normal convention of returning a value from
        // operator++ is a good idea.
        return *this;
    }

    private:
      int m_pos;
      const PointArray *m_vec;
};


class PointArray
{
  public :
  PointArray(int _size)
  {
    m_points.resize(_size);
  }

  void fillRandom()
  {
    for(auto &m : m_points)
    {
      m.x=rand();
      m.y=rand();
      m.z=rand();
    }
  }


    point get (int _col) const
    {
        return m_points[ _col ];
    }

    PArrayIter begin () const
    {
        return PArrayIter( this, 0 );
    }

    PArrayIter end () const
    {
        return PArrayIter( this, m_points.size() );
    }


  private :

    std::vector<point> m_points;
};



point PArrayIter::operator* () const
{
   return m_vec->get( m_pos );
}


#endif
