//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BCReadWriteLock, NSArray, NSMutableArray;

@interface MSPatchContainer : NSObject
{
    BCReadWriteLock *_locker;
    NSMutableArray *_localPatches;
    NSMutableArray *_receivedPatches;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *receivedPatches; // @synthesize receivedPatches=_receivedPatches;
- (id)patchesFollowingPatchID:(id)arg1;
- (id)description;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)patchReceived:(id)arg1;
- (void)addPatch:(id)arg1;
- (id)patchWithID:(id)arg1 inArray:(id)arg2;
- (void)removePatchWithID:(id)arg1 fromArray:(id)arg2;
- (unsigned long long)indexOfPatchWithID:(id)arg1 inArray:(id)arg2;
- (void)resetReceivedPatches:(id)arg1;
- (void)resetLocalPatches:(id)arg1;
@property(readonly, nonatomic) NSArray *localPatches;
- (id)init;
- (id)initWithReceivedPatches:(id)arg1 localPatches:(id)arg2;

@end

