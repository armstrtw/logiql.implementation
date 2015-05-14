#pragma once

#include <boost/date_time/gregorian/gregorian.hpp>
#include <logiql/fixed.income/bonds/fixed.coupon.bond.hpp>
#include <logiql.implementation/calendars.hpp>

namespace logiql {
  namespace bonds {
    class USTresury : public FixedCouponBond<ActualActual,Following,BackwardFromMaturity> {
    public:
      USTresury(date issue_date, date maturity_date, double coupon):
        FixedCouponBond<ActualActual,Following,BackwardFromMaturity>(issue_date, maturity_date, coupon, PaymentFrequencyT::SemiAnnual, 100, calendars::US::Settlement) {}
    };

  }
}
