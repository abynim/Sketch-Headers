//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSShapeGroup.h"

@class NSBezierPath;

@protocol MSShapeGroup <_MSShapeGroup>
@property(readonly, nonatomic) BOOL isPartOfClippingMask;
@property(readonly, nonatomic) BOOL isEditingChild;
@property(readonly, nonatomic) BOOL hasDecorations;
@property(readonly, nonatomic) NSBezierPath *decoratedBezierPathInBounds;
@property(readonly, nonatomic) NSBezierPath *bezierPathWithTransforms;
@property(readonly, nonatomic) NSBezierPath *bezierPathInBounds;
@property(readonly, nonatomic) NSBezierPath *bezierPath;
- (void)applyPropertiesToBezier:(NSBezierPath *)arg1;
- (NSBezierPath *)bezierPathOfSubPath:(id <MSShapePathLayer>)arg1 inRect:(struct CGRect)arg2;
- (NSBezierPath *)bezierPathInRect:(struct CGRect)arg1;
@end

