//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSShareableObjectReference.h>

@class MSSymbolMaster;

@interface MSSymbolMasterReference : MSShareableObjectReference
{
}

- (id)localLocationPath;
- (id)foreignObjectCollectionInDocument:(id)arg1;
- (unsigned long long)shareableObjectType;
- (id)sharedObjectID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) MSSymbolMaster *symbolMaster;
- (id)addToDocument:(id)arg1 withAssetLibraryController:(id)arg2;

@end

