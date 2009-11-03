#ifndef TASK_BEHAVIOUR_HPP
#define TASK_BEHAVIOUR_HPP

class TaskBehaviour 
{
public:
  TaskBehaviour():
    optimise_targets_range(true),
    optimise_targets_bearing(true),
    auto_mc(true),
    calc_cruise_efficiency(true),
    aat_min_time(3600*4.9)
    {}

  bool optimise_targets_range;
  bool optimise_targets_bearing;
  bool auto_mc;
  bool calc_cruise_efficiency;
  double aat_min_time;

  void all_off() {
    optimise_targets_range=false;
    optimise_targets_bearing=false;
    auto_mc=false;
    calc_cruise_efficiency=false;
  };

};

#endif
