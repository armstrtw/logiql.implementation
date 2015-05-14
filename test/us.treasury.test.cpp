#include <logiql.implementation/bonds.hpp>

using namespace logiql;
using std::cout;
using std::endl;

void printCashflows(Investment& b, date settle_date) {
  cout << "Cashflows:" << endl;
  CashFlowsT b_cfs = b.cashflows(settle_date);
  for ( auto cf : b_cfs) {
    std::cout << cf.first << " " << cf.second << std::endl;
  }
}

int main() {
  // 912828J27
  // Issue Date 02/17/15
  // Maturity Date 02/15/25
  // Coupon 2.000
  // Cpn Frequency S/A
  // Day Count ACT/ACT
  // Price 98-28+	(98.890625)
  // Settle 05/11/15
  // Street Convention	2.1262576
  // US Government Equivalent	2.1260990
  // True Yield	2.1245324
  // Equiv	1	/Yr Compound	2.1375600
  // Duration 8.872
  // Modified Duration 8.779
  // Risk 8.722
  // Convexity 0.864

  bonds::USTresury ct10(date(2015,2,17),date(2025,02,15),2.0);

  date this_settle_date(2015,5,11);
  cout << "years to maturity:" << ct10.yearsToMaturity(this_settle_date) << endl;
  cout << "accrued:" << ct10.accruedInterest(this_settle_date) << endl;
  //cout << "dirty price:" << ct10.dirtyPrice(this_settle_date,2.1262576) << endl;
  //cout << "clean price:" << ct10.cleanPrice(this_settle_date,2.1262576) << endl;

  cout << "mod duration:" << ct10.modifiedDuration(this_settle_date,2.1262576) << endl;
  cout << "yield from price: " << ct10.yield(this_settle_date, 98.890625) << endl;
  //cout << "yield to maturity:" << ct10.yield(this_settle_date, 93.6862237) << endl;
  //cout << ActualActual::yearFraction(date(2015,Feb,15),this_settle_date) << endl;

  printCashflows(ct10,this_settle_date);
  std::cout << "------------" << std::endl;


  return 0;
}
