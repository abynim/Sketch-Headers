//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSExportManager : NSObject
{
    // Error parsing type: , name: internalQueue
    // Error parsing type: , name: driver
}

+ (id)shared;
- (void).cxx_destruct;
- (id)init;
- (void)exportWithRequests:(id)arg1 folder:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)exportWithRequest:(id)arg1 toUrl:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)exportWithRequests:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)dataForRequest:(id)arg1;

@end

