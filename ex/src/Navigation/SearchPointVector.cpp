#include "SearchPointVector.hpp"
#include "Navigation/ConvexHull/GrahamScan.hpp"
#include <algorithm>
#include <functional>

bool prune_interior(SearchPointVector& spv)
{
  bool changed=false;
  GrahamScan gs(spv);
  spv = gs.prune_interior(&changed);
  return changed;
}

void project(SearchPointVector& spv, const TaskProjection& tp)
{
  std::for_each(spv.begin(), spv.end(), 
                std::bind2nd(std::mem_fun_ref(&SearchPoint::project), tp));
}
