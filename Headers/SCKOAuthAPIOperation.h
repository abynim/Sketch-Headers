//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchCloudKit/SCKAPIOperation.h>

@class SCKAPISession;

@interface SCKOAuthAPIOperation : SCKAPIOperation
{
    SCKAPISession *_authentication;
}

+ (id)executeRequest:(id)arg1 error:(id *)arg2;
+ (void)executeRequest:(id)arg1 requestCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)executeOAuthOperation:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) SCKAPISession *authentication; // @synthesize authentication=_authentication;
- (void)processData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)refreshAuthentication;
- (id)initWithRequest:(id)arg1;

@end

