//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/BCOutlineViewNode-Protocol.h>

@class MSLayer, NSArray;

@protocol MSLayerListLayerExtensions <BCOutlineViewNode>
@property(nonatomic) long long layerListExpandedType;
@property(readonly, nonatomic) BOOL isPreviewDependentOnExpansionState;
@property(readonly, nonatomic) BOOL previewShouldIndicateSharedStyle;
@property(readonly, nonatomic) BOOL isExportableViaDragAndDrop;
@property(readonly, nonatomic) BOOL lockedOnCanvas;
@property(readonly, nonatomic) BOOL containedByHiddenAncestorNode;
@property(readonly, nonatomic) BOOL canBeHidden;
@property(readonly, nonatomic) BOOL hiddenOnCanvas;
@property(readonly, nonatomic) BOOL isSelectedInLayerList;
@property(readonly, nonatomic) BOOL expandableInLayerList;
- (NSArray *)childrenForLayerList;
- (void)handleBadgeClickWithAltState:(BOOL)arg1;
- (void)moveToLayer:(MSLayer *)arg1 beforeLayer:(MSLayer *)arg2;
- (BOOL)canCopyToLayer:(MSLayer *)arg1 beforeLayer:(MSLayer *)arg2;
- (BOOL)canMoveToLayer:(MSLayer *)arg1 beforeLayer:(MSLayer *)arg2;
@end

