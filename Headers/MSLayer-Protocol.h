//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSLayer.h"

@class NSAffineTransform;

@protocol MSLayer <_MSLayer>
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatDoNotCascade;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGRect rect;
- (id)layerWithID:(id)arg1;
- (struct CGRect)overlayInfluenceRectForFrame;
- (struct CGRect)influenceRectForFrame;
- (struct CGRect)overlayInfluenceRectForBounds;
- (struct CGRect)influenceRectForBounds;
- (NSAffineTransform *)transformForRect:(struct CGRect)arg1;
@end

