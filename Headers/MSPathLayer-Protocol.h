//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSLayerProtocol-Protocol.h>

@class MSPath;
@protocol MSLayerCoordinateSpace;

@protocol MSPathLayer <MSLayerProtocol>
@property(readonly, copy, nonatomic) MSPath *pathInFrame;
@property(nonatomic) BOOL edited;
@property(nonatomic) BOOL isClosed;
- (void)reversePath;
- (void)simplify;
- (void)setPath:(MSPath *)arg1 inCoordinateSpace:(id <MSLayerCoordinateSpace>)arg2;
@end

