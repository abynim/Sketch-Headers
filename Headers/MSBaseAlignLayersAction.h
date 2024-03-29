//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDocumentAction.h"

#import "MSAltButtonTarget-Protocol.h"

@class NSString;

@interface MSBaseAlignLayersAction : MSDocumentAction <MSAltButtonTarget>
{
}

- (id)label;
- (BOOL)shouldUseImageForTouchBarItem;
- (void)performAction:(id)arg1;
- (BOOL)altButtonCanShowAltImage:(id)arg1;
- (BOOL)validate;
- (void)alignVectorPointsToKey:(id)arg1;
- (BOOL)canAlignToArtboardInstead;
- (void)alignToKey:(id)arg1;
- (id)alignmentPathsForAligningToKey:(id)arg1;
- (void)showOverlaysForAligningLayersToKey:(id)arg1;
- (void)showOverlaysForAligningLayers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

