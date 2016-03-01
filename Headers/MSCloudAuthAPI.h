//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCloudAPI.h"

@interface MSCloudAuthAPI : MSCloudAPI
{
}

- (void)resetAccountWithToken:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)recoverAccountWithEmail:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resendVerificationTokeWithAuth:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)verifyAccountWithToken:(id)arg1 auth:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerWithEmail:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loginWithEmail:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)urlWithAction:(id)arg1;

@end

