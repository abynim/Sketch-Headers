//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BCNetworkTime, NSDate, NSString, NSURL;

@protocol BCLicense <NSObject>
+ (long long)provider;
@property(readonly, nonatomic) BOOL hasCloudPrivileges;
@property(readonly, nonatomic) BOOL updatesHaveExpired;
@property(readonly, nonatomic) NSDate *updateExpirationDate;
@property(readonly, nonatomic) BOOL hasExpiredOrIsAboutToExpire;
@property(readonly, nonatomic) BOOL requiresRefresh;
@property(readonly, nonatomic) BOOL shouldRefresh;
@property(readonly, nonatomic) double remainingTimeInterval;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) BCNetworkTime *networkTime;
@property(readonly, nonatomic) NSString *deviceID;
@property(readonly, nonatomic) NSString *email;
@property(readonly, nonatomic) NSString *licenseID;
- (void)log;
- (BOOL)saveToURL:(NSURL *)arg1 error:(id *)arg2;
@end

