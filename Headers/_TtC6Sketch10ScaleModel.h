//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSHistoryMaker;

@interface _TtC6Sketch10ScaleModel : NSObject
{
    // Error parsing type: , name: originalSize
    // Error parsing type: , name: layerPositions
    // Error parsing type: , name: layerPatches
    // Error parsing type: , name: originCorner
    // Error parsing type: , name: scale
    // Error parsing type: , name: resizeBox
    // Error parsing type: , name: historyMaker
    // Error parsing type: , name: delegate
}

+ (id)keyPathsForValuesAffectingHeight;
+ (id)keyPathsForValuesAffectingWidth;
+ (id)keyPathsForValuesAffectingScaledRect;
- (void).cxx_destruct;
@property(nonatomic, retain) MSHistoryMaker *historyMaker; // @synthesize historyMaker;
@property(nonatomic) double height;
@property(nonatomic) double width;
@property(nonatomic, readonly) struct CGRect scaledRect;
@property(nonatomic) double scale; // @synthesize scale;
@property(nonatomic) long long originCorner; // @synthesize originCorner;
- (void)dealloc;
- (id)init;

@end

