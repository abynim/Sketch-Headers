#import "NSObject.h"

@interface BCLicenseManager : NSObject
{
}

+ (void)handleLocalLicenseIsExpired;
+ (void)showRefreshingFailed:(int)arg1;
+ (void)showRegistrationResult:(BOOL)arg1 status:(id)arg2;
+ (id)requestTrialLicense;
+ (long long)numberOfDaysLeftInTrialMode;
+ (id)tryToRefreshLicense:(id)arg1;
+ (BOOL)registerWithLicense:(id)arg1;
+ (BOOL)trialModeIsExpired;
+ (BOOL)isInTrialMode;
+ (void)updateLicense;

@end

