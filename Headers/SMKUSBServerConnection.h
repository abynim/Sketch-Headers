//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchMirrorTalk/SMKConnection.h>

#import <SketchMirrorServerKit/PTChannelDelegate-Protocol.h>

@class NSDictionary, NSError, NSNumber, NSString, PTChannel;

@interface SMKUSBServerConnection : SMKConnection <PTChannelDelegate>
{
    NSDictionary *_advertisement;
    NSError *_error;
    NSNumber *_deviceID;
    PTChannel *_channel;
}

- (void).cxx_destruct;
@property(retain) PTChannel *channel; // @synthesize channel=_channel;
@property(readonly, copy, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *advertisement; // @synthesize advertisement=_advertisement;
@property(readonly) unsigned long long hash;
- (void)ioFrameChannel:(id)arg1 didEndWithError:(id)arg2;
- (void)ioFrameChannel:(id)arg1 didReceiveFrameOfType:(unsigned int)arg2 tag:(unsigned int)arg3 payload:(id)arg4;
- (BOOL)ioFrameChannel:(id)arg1 shouldAcceptFrameOfType:(unsigned int)arg2 tag:(unsigned int)arg3 payloadSize:(unsigned int)arg4;
- (void)sendDispatchData:(id)arg1 asType:(unsigned int)arg2;
- (void)sendData:(id)arg1;
- (unsigned long long)connectionType;
- (void)connect:(CDUnknownBlockType)arg1;
- (void)connect;
- (void)close;
- (id)initWithDeviceID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

