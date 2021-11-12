//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchMirrorServerKit/NSObject-Protocol.h>

@class NSData, NSError, NSString, PSWebSocketDriver;

@protocol PSWebSocketDriverDelegate <NSObject>
- (void)driver:(PSWebSocketDriver *)arg1 write:(NSData *)arg2;
- (void)driver:(PSWebSocketDriver *)arg1 didCloseWithCode:(long long)arg2 reason:(NSString *)arg3;
- (void)driver:(PSWebSocketDriver *)arg1 didFailWithError:(NSError *)arg2;
- (void)driver:(PSWebSocketDriver *)arg1 didReceivePong:(NSData *)arg2;
- (void)driver:(PSWebSocketDriver *)arg1 didReceivePing:(NSData *)arg2;
- (void)driver:(PSWebSocketDriver *)arg1 didReceiveMessage:(id)arg2;
- (void)driverDidOpen:(PSWebSocketDriver *)arg1;
@end

