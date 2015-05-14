#pragma once

#include <boost/date_time/gregorian/gregorian.hpp>
#include <logiql/calendar.hpp>
#include <logiql.implementation/holidays.hpp>

namespace logiql {
  namespace calendars {
    namespace US {

      const Calendar Settlement({
          Saturday, Sunday,
            holidays::global::new_years_day,
            holidays::US::mlk_day,
            holidays::US::presidents_day,
            holidays::US::memorial_day,
            holidays::US::independence_day,
            holidays::US::labor_day,
            holidays::US::columbus_day,
            holidays::US::veterans_day,
            holidays::US::thanksgiving_day,
            holidays::global::christmas_day
            });

    } // namespace US
  } // namespace calendars
} // namespace logiql
