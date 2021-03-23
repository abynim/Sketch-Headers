//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/MSLayerCoordinateSpace-Protocol.h>

@protocol MSLayerCoordinateSpace;

@interface MSUnitCoordinateSpace : NSObject <MSLayerCoordinateSpace>
{
    id <MSLayerCoordinateSpace> _parentCoordinateSpace;
}

+ (struct CGPoint)convertPoint:(struct CGPoint)arg1 toBounds:(struct CGRect)arg2;
+ (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromBounds:(struct CGRect)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MSLayerCoordinateSpace> parentCoordinateSpace; // @synthesize parentCoordinateSpace=_parentCoordinateSpace;
@property(readonly, nonatomic) struct CGAffineTransform transformForConvertingFromParentCoordinateSpace;
@property(readonly, nonatomic) struct CGAffineTransform transformForConvertingToParentCoordinateSpace;
- (struct CGAffineTransform)transformForConvertingToCoordinateSpace:(id)arg1;
- (struct CGAffineTransform)transformForConvertingFromCoordinateSpace:(id)arg1;
- (struct CGVector)convertVector:(struct CGVector)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGVector)convertVector:(struct CGVector)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
@property(readonly, nonatomic) struct CGRect bounds;
- (id)initWithParentCoordinateSpace:(id)arg1;

@end

