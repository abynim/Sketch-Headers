//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSUUID;

@protocol SMKCommunicationInterface
- (void)sendData:(NSData *)arg1 to:(NSUUID *)arg2;
- (void)broadcastData:(NSData *)arg1;
- (void)disconnect:(NSUUID *)arg1;
- (void)connect:(NSUUID *)arg1;
- (void)connectionInfoWithReply:(void (^)(NSArray *))arg1;
- (void)startUsingOptions:(long long)arg1 webPort:(unsigned long long)arg2;
@end
