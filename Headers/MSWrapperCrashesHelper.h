//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MSCrashHandlerSetupDelegate;

@interface MSWrapperCrashesHelper : NSObject
{
    id <MSCrashHandlerSetupDelegate> _crashHandlerSetupDelegate;
}

+ (void)sendErrorAttachments:(id)arg1 withIncidentIdentifier:(id)arg2;
+ (BOOL)sendCrashReportsOrAwaitUserConfirmationForFilteredIds:(id)arg1;
+ (id)unprocessedCrashReports;
+ (void)setAutomaticProcessing:(BOOL)arg1;
+ (id)getCrashHandlerSetupDelegate;
+ (void)setCrashHandlerSetupDelegate:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) __weak id <MSCrashHandlerSetupDelegate> crashHandlerSetupDelegate; // @synthesize crashHandlerSetupDelegate=_crashHandlerSetupDelegate;
- (void).cxx_destruct;

@end
