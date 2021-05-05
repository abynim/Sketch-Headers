//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSForeignObject.h>

@class MSModelObject, NSString;

@interface MSForeignObject : _MSForeignObject
{
}

+ (id)masterFromDocument:(id)arg1 withID:(id)arg2;
+ (id)foreignObjectCollectionInDocument:(id)arg1;
+ (id)remoteSharedIDFromSymbolPrivateID:(id)arg1;
- (id)unlinkFromRemote;
@property(readonly, nonatomic) NSString *remoteShareID;
- (void)setLocalShareID:(id)arg1;
@property(readonly, nonatomic) NSString *localShareID;
- (void)setOriginalObject:(id)arg1;
- (id)originalObject;
@property(retain, nonatomic) MSModelObject *localObject;
- (void)removeFromOwningDocument;
- (id)masterFromLibrary:(id)arg1;
- (BOOL)isLocalToDocument:(id)arg1;
- (id)matchingForeignObjectInDocument:(id)arg1;
- (void)syncWithRemote:(id)arg1 withReferenceMapping:(id)arg2;
- (BOOL)isOutOfDateWithLibrary:(id)arg1;
- (id)initWithOriginalObject:(id)arg1 inLibrary:(id)arg2;
- (void)correctInvalidGamma;

@end

