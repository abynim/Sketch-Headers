//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSVectorOverlayController, NSArray, NSIndexPath, _TtC17SketchControllers26MSVectorComponentSpecifier;

@protocol MSVectorOverlayControllerDelegate <NSObject>
- (void)vectorOverlayController:(MSVectorOverlayController *)arg1 didSelectLayers:(NSArray *)arg2;
- (NSIndexPath *)vectorOverlayController:(MSVectorOverlayController *)arg1 willInsertAtIndexPath:(NSIndexPath *)arg2 location:(struct CGPoint)arg3;
- (void)vectorOverlayControllerDidFinishInteractiveSelection:(MSVectorOverlayController *)arg1;
- (void)vectorOverlayController:(MSVectorOverlayController *)arg1 didDeselectHandles:(NSArray *)arg2;
- (void)vectorOverlayController:(MSVectorOverlayController *)arg1 didSelectHandles:(NSArray *)arg2;
- (void)vectorOverlayController:(MSVectorOverlayController *)arg1 didUnhighlightHandle:(_TtC17SketchControllers26MSVectorComponentSpecifier *)arg2;
- (void)vectorOverlayController:(MSVectorOverlayController *)arg1 didHighlightHandle:(_TtC17SketchControllers26MSVectorComponentSpecifier *)arg2;
@end

