//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSSelectionItem.h>

@class NSArray, NSString;

@interface MSSelectionItem (SketchModel)
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSString *debugDescription;
- (void)expandForLayerList;
- (id)selectionHitTestWithPoint:(struct CGPoint)arg1 options:(unsigned long long)arg2 zoomValue:(double)arg3;
@property(nonatomic, readonly) struct CGRect absoluteRect;
- (BOOL)canOverride:(id)arg1;
- (id)overridePointNameWithAttribute:(id)arg1;
@property(nonatomic, readonly) NSArray *detachedMasters;
@end

