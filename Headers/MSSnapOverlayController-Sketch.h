//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSSnapOverlayController.h"

#import "MSSpecOverlayLayoutDelegate-Protocol.h"
#import "_TtP17SketchControllers27MSCollectionOverlayDelegate_-Protocol.h"
#import "_TtP17SketchControllers29MSCollectionOverlayDataSource_-Protocol.h"

@interface MSSnapOverlayController (Sketch) <_TtP17SketchControllers29MSCollectionOverlayDataSource_, _TtP17SketchControllers27MSCollectionOverlayDelegate_, MSSpecOverlayLayoutDelegate>
- (id)collectionOverlay:(id)arg1 overlayItemContainerForSupplementaryElementOfKind:(id)arg2 layoutAttributes:(id)arg3 parameters:(struct MSRenderingParameters)arg4;
- (id)collectionOverlay:(id)arg1 overlayItemContainerForItemAtIndexPath:(id)arg2 layoutAttributes:(id)arg3 parameters:(struct MSRenderingParameters)arg4;
- (id)collectionOverlay:(id)arg1 overlayItemImagesForColorSpace:(struct CGColorSpace *)arg2 backingScale:(double)arg3;
- (long long)collectionOverlay:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)specOverlay:(id)arg1 textForMeasurement:(id)arg2 vector:(struct CGVector)arg3;
- (BOOL)specOverlay:(id)arg1 shouldHideItemAtIndexPath:(id)arg2 startpoint:(struct CGPoint)arg3 endpoint:(struct CGPoint)arg4;
- (struct CGRect)specOverlay:(id)arg1 rectForEndOfItemAtIndexPath:(id)arg2;
- (struct CGRect)specOverlay:(id)arg1 rectForStartOfItemAtIndexPath:(id)arg2;
- (struct CGRect)specOverlay:(id)arg1 spaceRectForMeasurementAt:(id)arg2;
- (struct CGPoint)specOverlay:(id)arg1 endpointForItemAtIndexPath:(id)arg2 startpoint:(struct CGPoint)arg3;
- (struct CGPoint)specOverlay:(id)arg1 startpointForItemAtIndexPath:(id)arg2;
- (long long)specOverlay:(id)arg1 typeOfItemAtIndexPath:(id)arg2;
@end

