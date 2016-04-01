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
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGRect rect;
- (struct CGRect)overlayInfluenceRectForBounds;
- (struct CGRect)overlayInfluenceRectForFrame;
- (struct CGRect)influenceRectForFrame;
- (struct CGRect)influenceRectForBounds;
- (id)layerWithID:(id)arg1;
- (NSAffineTransform *)transformForRect:(struct CGRect)arg1;
@end

