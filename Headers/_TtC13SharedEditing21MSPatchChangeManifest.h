//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface _TtC13SharedEditing21MSPatchChangeManifest : NSObject
{
    // Error parsing type: , name: addedPages
    // Error parsing type: , name: removedPages
    // Error parsing type: , name: changedPages
    // Error parsing type: , name: unchangedPages
    // Error parsing type: , name: addedArtboards
    // Error parsing type: , name: removedArtboards
    // Error parsing type: , name: changedArtboards
    // Error parsing type: , name: unchangedArtboards
    // Error parsing type: , name: affectedPages
    // Error parsing type: , name: affectedArtboards
    // Error parsing type: , name: addedComponents
    // Error parsing type: , name: removedComponents
    // Error parsing type: , name: changedComponents
    // Error parsing type: , name: unchangedComponents
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSSet *unchangedComponents;
@property(nonatomic, copy) NSSet *changedComponents;
@property(nonatomic, copy) NSSet *removedComponents;
@property(nonatomic, copy) NSSet *addedComponents;
@property(nonatomic, copy) NSSet *affectedArtboards;
@property(nonatomic, copy) NSSet *affectedPages;
@property(nonatomic, copy) NSSet *unchangedArtboards;
@property(nonatomic, copy) NSSet *changedArtboards;
@property(nonatomic, copy) NSSet *removedArtboards;
@property(nonatomic, copy) NSSet *addedArtboards;
@property(nonatomic, copy) NSSet *unchangedPages;
@property(nonatomic, copy) NSSet *changedPages;
@property(nonatomic, copy) NSSet *removedPages;
@property(nonatomic, copy) NSSet *addedPages;

@end

