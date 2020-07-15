//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchCloudKit/NSCopying-Protocol.h>
#import <SketchCloudKit/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString;

@interface SCKAPISession : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_token;
    NSString *_userID;
    NSString *_tokenType;
    NSDate *_expirationDate;
    double _validityPeriod;
    NSString *_refreshToken;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)hasCurrent;
+ (void)invalidateCurrentCache;
+ (BOOL)removeCurrentWithError:(id *)arg1;
+ (BOOL)setCurrentSession:(id)arg1 error:(id *)arg2;
+ (void)getCurrentSessionAndRefreshIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)readCurrentSessionWithError:(id *)arg1;
+ (id)currentSessionWithError:(id *)arg1;
+ (id)currentSessionQueue;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly, nonatomic) double validityPeriod; // @synthesize validityPeriod=_validityPeriod;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
- (BOOL)isRefreshedByAuthentication:(id)arg1;
@property(readonly, nonatomic) NSString *httpAuthorizationValue;
@property(readonly, nonatomic) BOOL isValidInTheNearFuture;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSData *tokenData;
- (id)sessionWithRefreshToken:(id)arg1;
- (id)initWithTokenData:(id)arg1 forUserID:(id)arg2;
- (id)initWithOAuthDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1 ofType:(id)arg2 refreshToken:(id)arg3 forUserID:(id)arg4;
- (id)init;
@property(readonly, nonatomic) BOOL isCurrent;
- (BOOL)setCurrentWithError:(id *)arg1;

@end

