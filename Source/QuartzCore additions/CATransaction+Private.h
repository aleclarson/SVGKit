#import <QuartzCore/CATransaction.h>

typedef enum {
  kCATransactionPhasePreLayout,
  kCATransactionPhasePreCommit,
  kCATransactionPhasePostCommit,
} CATransactionPhase;

@interface CATransaction (Private)
+ (void)addCommitHandler:(void(^)(void))block forPhase:(CATransactionPhase)phase;
@end
