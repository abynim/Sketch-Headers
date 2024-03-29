//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSNormalBaseEventHandler.h"

#import "MSDragLayerToolUserInterface-Protocol.h"
#import "MSGestureRecognizerDelegate-Protocol.h"
#import "_TtP6Sketch27MSSelectionOverlayPresenter_-Protocol.h"

@class MSDragToMoveOrCopyGestureRecognizer, MSDragToSelectGestureRecognizer, MSFlowOverlay, MSHitTestResult, MSLayerDragController, MSLayerMeasuringController, MSNormalEventContextualMenuBuilder, MSNormalEventData, MSOpacityKeyboardShortcutRecognizer, MSPasteboardLayers, MSPresenceOverlay, MSSelectionItem, MSSnapOverlayController, NSMenu, NSObject, NSSet, NSString, _TtC17SketchControllers13MSPathOverlay, _TtC17SketchControllers21MSSelectionBoxOverlay, _TtC6Sketch28MSSelectionOverlayController;
@protocol MSHoverableItem;

@interface MSNormalEventHandler : MSNormalBaseEventHandler <_TtP6Sketch27MSSelectionOverlayPresenter_, MSGestureRecognizerDelegate, MSDragLayerToolUserInterface>
{
    BOOL _ignoreNextKeyDownEventUntilModifiersChange;
    MSPasteboardLayers *_draggedLayers;
    BOOL _isLayerPastedFromLayerList;
    MSNormalEventData *_eventData;
    long long _dragMode;
    _TtC6Sketch28MSSelectionOverlayController *_selectionOverlayController;
    MSLayerMeasuringController *_measuringController;
    MSSnapOverlayController *_snapsController;
    MSPresenceOverlay *_presenceOverlay;
    NSObject<MSHoverableItem> *_highlightedItem;
    MSNormalEventContextualMenuBuilder *_menuBuilder;
    MSOpacityKeyboardShortcutRecognizer *_opacityShortcutRecognizer;
    MSHitTestResult *_mouseDownHitTest;
    _TtC17SketchControllers13MSPathOverlay *_selectedShapePathsOverlay;
    _TtC17SketchControllers13MSPathOverlay *_hoverHighlightOverlay;
    _TtC17SketchControllers21MSSelectionBoxOverlay *_selectionBoxOverlay;
    _TtC17SketchControllers13MSPathOverlay *_selectedOverridesOverlay;
    MSFlowOverlay *_selectionFlowOverlay;
    NSSet *_duplicatedObjectIDs;
    MSDragToSelectGestureRecognizer *_selectionGestureRecognizer;
    MSDragToMoveOrCopyGestureRecognizer *_dragGestureRecognizer;
    MSLayerDragController *_dragController;
    MSSelectionItem *_activeSelection;
    struct CGVector _duplicateOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSSelectionItem *activeSelection; // @synthesize activeSelection=_activeSelection;
@property(retain, nonatomic) MSLayerDragController *dragController; // @synthesize dragController=_dragController;
@property(readonly, nonatomic) MSDragToMoveOrCopyGestureRecognizer *dragGestureRecognizer; // @synthesize dragGestureRecognizer=_dragGestureRecognizer;
@property(readonly, nonatomic) MSDragToSelectGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(nonatomic) BOOL isLayerPastedFromLayerList; // @synthesize isLayerPastedFromLayerList=_isLayerPastedFromLayerList;
@property(copy, nonatomic) NSSet *duplicatedObjectIDs; // @synthesize duplicatedObjectIDs=_duplicatedObjectIDs;
@property(nonatomic) struct CGVector duplicateOffset; // @synthesize duplicateOffset=_duplicateOffset;
@property(readonly, nonatomic) MSFlowOverlay *selectionFlowOverlay; // @synthesize selectionFlowOverlay=_selectionFlowOverlay;
@property(readonly, nonatomic) _TtC17SketchControllers13MSPathOverlay *selectedOverridesOverlay; // @synthesize selectedOverridesOverlay=_selectedOverridesOverlay;
@property(readonly, nonatomic) _TtC17SketchControllers21MSSelectionBoxOverlay *selectionBoxOverlay; // @synthesize selectionBoxOverlay=_selectionBoxOverlay;
@property(readonly, nonatomic) _TtC17SketchControllers13MSPathOverlay *hoverHighlightOverlay; // @synthesize hoverHighlightOverlay=_hoverHighlightOverlay;
@property(readonly, nonatomic) _TtC17SketchControllers13MSPathOverlay *selectedShapePathsOverlay; // @synthesize selectedShapePathsOverlay=_selectedShapePathsOverlay;
@property(retain, nonatomic) MSHitTestResult *mouseDownHitTest; // @synthesize mouseDownHitTest=_mouseDownHitTest;
@property(readonly, nonatomic) MSOpacityKeyboardShortcutRecognizer *opacityShortcutRecognizer; // @synthesize opacityShortcutRecognizer=_opacityShortcutRecognizer;
@property(retain, nonatomic) MSNormalEventContextualMenuBuilder *menuBuilder; // @synthesize menuBuilder=_menuBuilder;
@property(retain, nonatomic) NSObject<MSHoverableItem> *highlightedItem; // @synthesize highlightedItem=_highlightedItem;
@property(readonly, nonatomic) MSPresenceOverlay *presenceOverlay; // @synthesize presenceOverlay=_presenceOverlay;
@property(readonly, nonatomic) MSSnapOverlayController *snapsController; // @synthesize snapsController=_snapsController;
@property(readonly, nonatomic) MSLayerMeasuringController *measuringController; // @synthesize measuringController=_measuringController;
@property(readonly, nonatomic) _TtC6Sketch28MSSelectionOverlayController *selectionOverlayController; // @synthesize selectionOverlayController=_selectionOverlayController;
@property(nonatomic) long long dragMode; // @synthesize dragMode=_dragMode;
@property(retain, nonatomic) MSNormalEventData *eventData; // @synthesize eventData=_eventData;
- (void)reloadFollowingBackgroundChangesToDocument;
- (void)didGridLayout;
- (void)endAdjustingHandle;
- (void)beginAdjustingHandleOfKind:(id)arg1 atPoint:(struct CGPoint)arg2 modifierFlags:(unsigned long long)arg3;
- (BOOL)selectLayerAtPoint:(struct CGPoint)arg1 toggle:(BOOL)arg2 modifierFlags:(unsigned long long)arg3;
- (void)zoomValueWillChangeTo:(double)arg1;
- (void)selectionDidChangeTo:(id)arg1;
- (void)selectionDidChangeFromLayers:(id)arg1 fromOverrides:(id)arg2 toLayers:(id)arg3 toOverrides:(id)arg4;
- (void)registerSingleSelectionMomentWhenUndoingRedoingWithPreviousLayersSelection:(id)arg1 previousOverridesSelection:(id)arg2;
- (void)changeSelectionToLayersWithPaths:(id)arg1 overridesWithIDs:(id)arg2;
- (void)currentPageDidChange;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (void)cut:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (id)updatedSelectionForwardDirection:(BOOL)arg1;
- (BOOL)canSelectPrevious;
- (BOOL)canSelectNext;
- (BOOL)canChangeSelectionBySelectingSiblingsIsForward:(BOOL)arg1;
- (void)tabInForwardDirection:(BOOL)arg1;
- (void)changeColor:(id)arg1;
- (void)deleteNormalLayers:(id)arg1;
- (void)delete:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (id)menu;
@property(readonly, nonatomic) NSMenu *menuForLayerList;
- (id)menuForCanvas;
- (void)dragToSelect:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)selectAllIncludingLockedAndHidden:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)ignoreNextKeyDownEventUntilModifiersChange;
- (void)setUndoActionName:(id)arg1;
- (void)selectLayers:(id)arg1;
- (void)updateDragWithGestureRecognizer:(id)arg1;
- (void)startDraggingAtPoint:(struct CGPoint)arg1;
- (void)layerDragged:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)isDraggingSourceSketchLayerList:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (id)siblingsOfSelectedShapePathLayers;
- (void)updateSelectedShapePathsOverlay;
- (void)documentDidChange:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)keyDownMoveCanvasIncremental:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)keyDownMoveToEndOfCanvas:(unsigned short)arg1;
- (void)keyDownMoveCanvas:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)flashSnaps:(id)arg1;
- (void)opacityShortcutRecognized:(id)arg1;
- (void)keyDownResizeLayers:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)keyDownMoveLayers:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)cancelOperation:(id)arg1;
- (id)artboardsInReadingOrder;
- (id)currentFocussedArtboard;
- (struct CGRect)artboardRectInViewCoordinates:(id)arg1 withScrollOrigin:(struct CGPoint)arg2;
- (struct CGRect)artboardRectInViewCoordinates:(id)arg1;
- (void)focusOnArtboard:(id)arg1;
- (void)moveToNextArtboard;
- (void)moveToPreviousArtboard;
- (void)selectPreviousArtboard:(id)arg1;
- (void)selectNextArtboard:(id)arg1;
- (void)selectParent;
- (void)selectChild;
- (void)keyDown:(id)arg1;
- (void)trackMouse:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)systemColorsDidChange:(id)arg1;
- (BOOL)isMouseHoveringResizeHandle:(struct CGPoint)arg1;
- (BOOL)shouldNotChangeSelectionForFlags:(unsigned long long)arg1;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)mouseExited;
- (void)selectLayerFromPickerMenu:(id)arg1;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)handleDoubleClickInContainerLayerAtLocation:(struct CGPoint)arg1 extendSelection:(BOOL)arg2;
- (void)layerDoubleClicked:(id)arg1;
- (void)editActiveSelectionExtendingSelection:(BOOL)arg1;
- (void)handleClickToSelect:(id)arg1;
- (void)enterResizeModeUsingHandle:(long long)arg1 mouse:(struct CGPoint)arg2 clickCount:(unsigned long long)arg3 flags:(unsigned long long)arg4;
- (void)enterResizeModeForLine:(id)arg1 pointIndex:(long long)arg2 mouse:(struct CGPoint)arg3 clickCount:(unsigned long long)arg4 flags:(unsigned long long)arg5;
- (void)enterRotateModeWithMouse:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (BOOL)startResizingOrRotatingHandle:(id)arg1 atPoint:(struct CGPoint)arg2 flags:(unsigned long long)arg3;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)selectHitTestResult:(id)arg1 extendSelection:(BOOL)arg2;
- (void)handleSymbolInstanceDoubleClick:(id)arg1 gestureRecognizer:(id)arg2;
- (void)dragModeDidReset;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (id)toolbarIdentifier;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

